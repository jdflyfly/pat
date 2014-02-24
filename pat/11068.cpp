///**
// * f[i][j]表示前i个硬币能凑出来的小于等于j的最大值。
// * 转移方程：f[i][j] = max(f[i - 1][j], f[i - 1][j - c[i]] + c[i])
// *由于最终的输出要求是排序的币值的字典序最小的组合，可以对 c[i]做从大到小的排序，
// *并另开一个数组 has[i][j] 来记录当前状态下，是否有包含 c[i]。
// *同时注意，当f[i - 1][j] == f[i - 1][j - c[i]] + c[i]时，采纳当前的 c[i]，以满足字典序。
// */
//
//#include<stdio.h>
//#include<stdlib.h>
//
//int n, m;
//int c[10005];
//int f[10005][105];
//int has[10005][105];
//
//int cmp(const void*a, const void*b) {
//	return *(int*) b - *(int*) a;
//}
//
//int getMax(int a, int b) {
//	if (a > b)
//		return a;
//	else
//		return b;
//}
//
//void print() {
//	int i, j;
//	for (i = 1; i <= n; i++)
//		printf("%d ", c[i]);
//	printf("\n");
//
//	for (i = 0; i <= n; i++) {
//		for (j = 0; j <= m; j++) {
//			printf("%d ", f[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\n");
//}
//
//int main() {
////	freopen("in.txt", "r", stdin);
//	scanf("%d%d", &n, &m);
//	int i;
//	for (i = 1; i <= n; i++) {
//		scanf("%d", &c[i]);
//	}
//	qsort(c + 1, n, sizeof(int), cmp);
//
//	int j;
//	for (i = 1; i <= n; i++)
//		for (j = 1; j <= m; j++) {
//			if (c[i] <= j) {
//				if (f[i - 1][j] > f[i - 1][j - c[i]] + c[i]) {
//					f[i][j] = f[i - 1][j];
//					has[i][j] = 0;
//				} else {
//					f[i][j] = f[i - 1][j - c[i]] + c[i];
//					has[i][j] = 1;
//				}
//
//			} else {
//				f[i][j] = f[i - 1][j];
//				has[i][j] = 0;
//			}
//
//		}
//
////	print();
//
//	if (f[n][m] != m) {
//		printf("No Solution\n");
//	} else {
//		while (m > 0) {
//			if (has[n][m]) {
//				printf("%d", c[n]);
//				if (m - c[n] > 0) {
//					printf(" ");
//				}
//				m -= c[n];
//			}
//			--n;
//		}
//	}
//
//	return 0;
//}
