/**
考察 quadratic probing，hash点被占用，向后依次探测+1,+4,+9,+16... 注意要%Msize。
*/
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<cmath>

using namespace std;

int isPrime(int a){
	if(a<=1)
		return 0;
	for(int i=2;i<=sqrt((double)a);i++){
		if(a%i==0)
			return 0;
	}
	return 1;

}

int getPrime(int a){
	for(int i=a;i<0x7fffffff;i++){
		if(isPrime(i)){
			return i;
		}

	}
	return -1;
}


int main(){
	freopen("data.in","r",stdin);
	freopen("data.out","w",stdout);

	int s,n;
	cin>>s>>n;
	int prime = getPrime(s);

	int* table = new int[prime];
	for(int i=0;i<prime;i++)
		table[i]=0;
	int cur;
	for(int i=0;i<n;i++){
		cin>>cur;
		int idx = cur%prime;
		if(table[idx]==0){
			cout<<idx;
			table[idx]=1;
		}else{
			int nextIdx;
			int found=0;
			for(int j=1;j<=prime;j++){
				nextIdx = (idx+j*j)%prime;
				if(table[nextIdx]==0){
					table[nextIdx]=1;
					cout<<nextIdx;
					found=1;
					break;
				}
			}
			if(!found)
				cout<<"-";
		}

		if(i!=n-1)
			cout<<" ";
	}
	cout<<endl;
	delete[] table;
	return 0;
}
