#include<cstdio>
#include<iostream>
#include<algorithm>
#include<string>

using namespace std;


struct Stu{
	string name;
	string id;
	int grade;
};

Stu stu[105];

int cmp(Stu a,Stu b){
	return a.grade>b.grade;
}


int main(){
	freopen("data.in","r",stdin);
	freopen("data.out","w",stdout);

	int n;
	cin>>n;
	int from, to;

	for(int i=0;i<n;i++){
		cin>>stu[i].name>>stu[i].id>>stu[i].grade;
	}
	cin>>from>>to;

	sort(stu,stu+n,cmp);

	int empty=1;
	for(int i=0;i<n;i++){
		if(stu[i].grade>=from&&stu[i].grade<=to){
			cout<<stu[i].name<<" "<<stu[i].id<<endl;
			empty=0;
		}
	}
	if(empty)
		cout<<"NONE"<<endl;

	return 0;
}
