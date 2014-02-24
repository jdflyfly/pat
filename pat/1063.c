//#include<stdio.h>
//#include<stdlib.h>
//
//int set[50][10000];
//int len[50];
//
//double calcu(int a, int b) {
//	int nc = 0, nt = 0;
//	int i = 0, j = 0;
//
//	while (i < len[a] || j < len[b]) {
//		if (i >= len[a]) {
//			j++;
//			nt++;
//		} else if (j >= len[b]) {
//			i++;
//			nt++;
//		} else {
//			if (set[a][i] == set[b][j]) {
//				nc++;
//				i++;
//				j++;
//				nt++;
//			} else if (set[a][i] < set[b][j]) {
//				i++;
//				nt++;
//			} else {
//				j++;
//				nt++;
//			}
//
//		}
//
//	}
//
////	printf("nc,nt:%d,%d\n", nc, nt);
//
//	return 1.0 * nc / nt * 100;
//}
//
//int cmp(const void*a, const void*b) {
//	return *(int*) a - *(int*) b;
//}
//
//int main() {
////	freopen("in.txt", "r", stdin);
//	int n;
//	scanf("%d", &n);
//	int i;
//	int tmpSet[10000];
//	for (i = 0; i < n; i++) {
//		scanf("%d", &len[i]);
//		int j;
//		for (j = 0; j < len[i]; j++)
//			scanf("%d", &tmpSet[j]);
//		qsort(tmpSet, len[i], sizeof(int), cmp);
//		int k = 0;
//		set[i][k++] = tmpSet[0];
//		for (j = 1; j < len[i]; j++) {
//			if (tmpSet[j] != tmpSet[j - 1])
//				set[i][k++] = tmpSet[j];
//		}
//		len[i] = k;
//
//	}
//
//
//	int k;
//	scanf("%d", &k);
//	int a, b;
//	for (i = 0; i < k; i++) {
//		scanf("%d%d", &a, &b);
//		printf("%.1lf%%\n", calcu(a - 1, b - 1));
//	}
//
//	return 0;
//}
