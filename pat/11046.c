//#include<stdio.h>
//
//int dis[100005];
//int disSum[100005];
//
//int main() {
////	freopen("in.txt", "r", stdin);
//	int n;
//	scanf("%d", &n);
//	int sum = 0;
//	int i;
//	for (i = 1; i <= n; i++) {
//		scanf("%d", &dis[i]);
//		sum += dis[i];
//		disSum[i]=sum-dis[i];
//	}
//
//	int k;
//	scanf("%d", &k);
//	int from, to;
//	int length;
//	for (i = 0; i < k; i++) {
//		scanf("%d%d", &from, &to);
//		if (from > to) {
//			int tmp = from;
//			from = to;
//			to = tmp;
//
//		}
//		length = 0;
//		length=disSum[to]-disSum[from];
//
//		if (length < sum - length)
//			printf("%d\n", length);
//		else
//			printf("%d\n", sum - length);
//
//	}
//
//	return 0;
//}
