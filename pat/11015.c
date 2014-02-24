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
