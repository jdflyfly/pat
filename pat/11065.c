//#include<stdio.h>
//
//int main() {
//	freopen("in.txt", "r", stdin);
//	int t;
//	scanf("%d", &t);
//	int i;
//	long long a, b, c, sum;
//
//	for (i = 1; i <= t; i++) {
//		scanf("%lld%lld%lld", &a, &b, &c);
//
//		sum = a + b;
//		if (a > 0 && b > 0 && sum < 0)
//			printf("Case #%d: true\n", i);
//		else if (a < 0 && b < 0 && sum >= 0) {
//			printf("Case #%d: false\n", i);
//		} else {
//			if (sum > c)
//				printf("Case #%d: true\n", i);
//			else
//				printf("Case #%d: false\n", i);
//
//		}
//	}
//
//	return 0;
//}
