/**
题意
Reversible Primes 是指在某个进制下，一个数本身和它翻转过来形成的新数都是素数。 
题中给出多组数据，以负数结尾程序。每组数据包含一个数以及一个进制数。判定该数是否是 Reversible Primes.

分析
两个功能点实现：判定素数和特定进制下的数据倒转。
*/

#include<stdio.h>
#include<math.h>

int isPrime(int n){
	if(n<2)
		return 0;
	int i;
	for(i=2;i<=sqrt((double)n);i++){
		if(n%i==0)
			return 0;
	}
	return 1;
}

int reverse(int num,int radix){
	int rem;
	int newInt=0;
	while(num){
		rem=num%radix;
		num/=radix;
		newInt=newInt*radix+rem;
	}
	return newInt;
}


int main(){
	int n,d;
	while(1){
		scanf("%d",&n);
		if(n<=0)
			break;
		scanf("%d",&d);
		if(isPrime(n)&&isPrime(reverse(n,d)))
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
}
