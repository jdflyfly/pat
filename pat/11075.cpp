/**
注意仔细比对给定的case。
开始理解错了，一道题目提交了如果没过编译，分数应该显示0，而不是-。
*/

#include<cstdio>
#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

struct Info{
	int id;
	int totalScore;
	int score[5];
	int rank;
	int active;
	int perNum;
};

int p[10];

Info info[10005];

int cmp(Info a, Info b){
	if(a.totalScore==b.totalScore){
		if(a.perNum==b.perNum){
			return a.id<b.id;
		}
		else
			return a.perNum>b.perNum;
	}else
		return a.totalScore>b.totalScore;
}


int main(){
//	freopen("data.in","r",stdin);
//	freopen("data.out","w",stdout);
	int n,k,m;
	while(scanf("%d%d%d",&n,&k,&m)!=EOF){
		for(int i=0;i<n;i++){
			info[i].id=i+1;
			for(int j=0;j<5;j++)
				info[i].score[j]=-1;
			info[i].totalScore=0;
			info[i].perNum=0;
			info[i].active=0;
		}

		for(int i=0;i<k;i++)
			scanf("%d",&p[i]);

		int id,pid,score;
		for(int i=0;i<m;i++){
			scanf("%d%d%d",&id,&pid,&score);
			if(score!=-1)
				info[id-1].active=1;

			if(score==-1&&info[id-1].score[pid-1]==-1){
				info[id-1].score[pid-1]=0;
			}
			else if(score>info[id-1].score[pid-1])
				info[id-1].score[pid-1]=score;
		}

		for(int i=0;i<n;i++){
			for(int j=0;j<k;j++){
				if(info[i].score[j]>0)
					info[i].totalScore+=info[i].score[j];
				if(info[i].score[j]==p[j])
					info[i].perNum++;
			}
		}

		sort(info,info+n,cmp);
		info[0].rank=1;
		for(int i=1;i<n;i++){
			if(info[i].totalScore==info[i-1].totalScore)
				info[i].rank=info[i-1].rank;
			else
				info[i].rank=i+1;
		}

		for(int i=0;i<n;i++){
			if(info[i].active){
				printf("%d %05d %d",info[i].rank,info[i].id,info[i].totalScore);
				for(int j=0;j<k;j++){
					if(info[i].score[j]==-1)
						printf(" -");
					else
						printf(" %d",info[i].score[j]);
				}
				printf("\n");
			}
		}

	}

	return 0;
}
