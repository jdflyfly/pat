//#include<stdio.h>
//#include<math.h>
//
//int prime[100000];
//int idx = 0;
//
//int isPrime(int n) {
//	int i;
//	for (i = 2; i <= sqrt(n); i++) {
//		if (n % i == 0)
//			return 0;
//	}
//	return 1;
//
//}
//
//int main() {
//	int num;
//	int i;
//	scanf("%d", &num);
//	for (i = 2; i <= num; i++) {
//		if (isPrime(i))
//			prime[idx++] = i;
//	}
//	int count = 0;
//	for (i = 1; i < idx; i++) {
//		if (prime[i] - prime[i - 1] == 2)
//			count++;
//	}
//	printf("%d\n",count);
//	return 0;
//}
