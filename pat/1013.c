//#include<stdio.h>
//#include<math.h>
//
//int prime[10005];
//int idx = 1;
//
//int isPrime(int n) {
//	int i;
//	for (i = 2; i <= sqrt(n); i++)
//		if (n % i == 0)
//			return 0;
//
//	return 1;
//}
//
//void calcu() {
//	int i;
//	for (i = 2;; i++) {
//		if (isPrime(i)) {
//			prime[idx++] = i;
//			if (idx == 10001)
//				break;
//		}
//
//	}
//
//}
//
//int main() {
//	int m, n;
//	scanf("%d%d", &m, &n);
//	calcu();
//	int i;
//	for (i = m; i <= n; i++) {
//		if ((i - m) % 10 != 0)
//			printf(" ");
//		printf("%d", prime[i]);
//		if ((i - m) % 10 == 9)
//			printf("\n");
//
//	}
//
//	return 0;
//}
