/**
 
题意：计算两个点之间的加权最短路径，若有多条最短路径，选取沿途节点权重和最大的。
 
分析：利用Dijkstra算法求出最短路径，然后dfs搜索所有路径，记录其中最短路径个数以及更新最大权重。

*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define Inf 100000000

int n,m,from,to;
int people[505];
int road[505][505];  

int known[505];
int d[505];
int p[505];


int vis[505];  
int maxNum = -1;  
int pathNum = 0; 


void printStatus() {  
	int i;  
	printf("known:");  
	for (i = 0; i < n; i++) {  
		printf("%d ", known[i]);  
	}  
	printf("d:");  
	for (i = 0; i < n; i++) {  
		printf("%d ", d[i]);  
	}  

	printf("p:");  
	for (i = 0; i < n; i++) {  
		printf("%d ", p[i]);  
	}  
	printf("\n");  
}

int getMin(){
	int min = Inf;
	int minIdx =-1;
	for(int i=0;i<n;i++){
		if(!known[i]&&d[i]<min){
			minIdx=i;
			min =d[i];
		}
	}
	return minIdx;
}


void dijkstra(){
	//init
	memset(known,0,sizeof(known));
	memset(p,-1,sizeof(p));
	for(int i=0;i<n;i++)
		d[i]=Inf;

	d[from]=0;

	while(1){
		//get min point
		int minIdx = getMin();
		if(minIdx==-1)
			break;

		known[minIdx]=1;

		//update the dis
		for(int i=0;i<n;i++){
			if(!known[i]&&road[minIdx][i]){
				if(road[minIdx][i]+d[minIdx]<d[i]){
					d[i]=road[minIdx][i]+d[minIdx];
					p[i]=minIdx;
				}
			}
		}

	}
}


void dfs(int city, int dis, int peopleNum){
	if(dis>d[to])
		return;
	if(city==to&&dis==d[to]){
		pathNum++;
		if(peopleNum>maxNum){
			maxNum=peopleNum;
		}
	}

	for(int i=0;i<n;i++){
		if(road[city][i]&&!vis[i]){
			vis[i]=1;
			dfs(i,dis+road[city][i],peopleNum+people[i]);
			vis[i]=0;
		}
	}

}


int main() {
//	freopen("data.in","r",stdin);
//	freopen("data.out","w",stdout);

	scanf("%d%d%d%d",&n,&m,&from,&to);
	for(int i=0;i<n;i++)
		scanf("%d",&people[i]);

	int start,end,len;
	for(int i=0;i<m;i++){
		scanf("%d%d%d",&start,&end,&len);
		road[start][end]=len;
		road[end][start]=len;
	}
	dijkstra();

	//	printStatus();

	dfs(from,0,people[from]);
	printf("%d %d\n", pathNum, maxNum);  

	return 0;
}
