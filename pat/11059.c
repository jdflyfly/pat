//#include<stdio.h>
//#include<math.h>
//
//int isPrime(int num){
////	printf("isPrime %d\n",num);
//	int i;
//	for(i=2;i<=sqrt((double)num);i++){
//		if(num%i==0)
//			return 0;
//	}
//	return 1;
//}
//
//
//int main(){
//	long n;
//	scanf("%ld",&n);
//
//	if(n==1){
//		printf("1=1\n");
//		return 0;
//	}
//
//	int i=0;
//	int tmp=n;
//	printf("%d=",n);
//	int start=1;
//	for(i=2;i<=tmp;i++){
//		if(isPrime(i)&&n%i==0)
//		{
//			int k=0;
//			while(tmp%i==0){
//				tmp/=i;
//				k++;
//			}
//			if(!start){
//				printf("*");
//			}
//			else{
//				start=0;
//			}
//
//			if(k==1){
//				printf("%d",i);
//			}else{
//				printf("%d^%d",i,k);
//			}
//
//		}
//	}
//	printf("\n");
//
//	return 0;
//}
