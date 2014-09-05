#include<cstdio>
#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;


struct Stu{
	int id;
	int ge;
	int gi;
	double ga;
	int order[5];
};

struct Enter{
	int num;
	vector<Stu> stu;
};

Stu stu[40005];
Enter enter[105];

int cmp(Stu a,Stu b){
	if(a.ga==b.ga){
		return a.ge>b.ge;
	}
	else
		return a.ga>b.ga;
}

int cmpId(Stu a, Stu b){
	return a.id<b.id;
}

int canEnter(int stuIdx, int schoolIdx){
	if(enter[schoolIdx].stu.size()<enter[schoolIdx].num)
		return 1;
	if(stu[stuIdx].ga== enter[schoolIdx].stu[enter[schoolIdx].stu.size()-1].ga&&stu[stuIdx].ge== enter[schoolIdx].stu[enter[schoolIdx].stu.size()-1].ge)
		return 1;

	return 0;

}

int main(){
//	freopen("data.in","r",stdin);
//	freopen("data.out","w",stdout);

	int n,m,k;
	cin>>n>>m>>k;
	for(int i=0;i<m;i++)
		cin>>enter[i].num;

	for(int i=0;i<n;i++){
		stu[i].id=i;
		cin>>stu[i].ge;
		cin>>stu[i].gi;
		stu[i].ga=(stu[i].ge+stu[i].gi)*1.0/2;
		for(int j=0;j<k;j++)
			cin>>stu[i].order[j];
	}
	sort(stu,stu+n,cmp);

	for(int i=0;i<n;i++){
		for(int j=0;j<k;j++){
			if(canEnter(i,stu[i].order[j])){
				enter[stu[i].order[j]].stu.push_back(stu[i]);
				break;
			}
		}

	}

	for(int i=0;i<m;i++){
		sort(enter[i].stu.begin(),enter[i].stu.end(),cmpId);
		for(int j=0;j<enter[i].stu.size();j++){
			if(j)
				cout<<" ";
			cout<<enter[i].stu[j].id;
		}
		cout<<endl;
	}

	return 0;
}
