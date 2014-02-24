//#include<stdio.h>
//#include<stdlib.h>
//#include<math.h>
//
//int arr[1005];
//int tree[1005];
//
//int cmp(const void*a, const void*b) {
//	return *(int*) a - *(int*) b;
//}
//
//int getMin(int x, int y) {
//	if (x < y)
//		return x;
//	else
//		return y;
//}
//
//void buildTree(int idx, int a[], int n) {
//	if (n <= 0)
//		return;
//	int m = 1;
//	while ((pow(2, m) - 1) < n)
//		m++;
//	int rootIdx = pow((double) 2, m - 2) - 1
//			+ getMin(pow((double) 2, m - 2), n - (pow((double) 2, m - 1) - 1));
//	tree[idx] = a[rootIdx];
//	buildTree(2 * idx, a, rootIdx);
//	buildTree(2 * idx + 1, a + rootIdx + 1, n - 1 - rootIdx);
//
//}
//
//int main() {
////	freopen("in.txt", "r", stdin);
//	int n;
//	scanf("%d", &n);
//	int i;
//	for (i = 0; i < n; i++)
//		scanf("%d", &arr[i]);
//
//	qsort(arr, n, sizeof(int), cmp);
//
//	buildTree(1, arr, n);
//
//	for (i = 1; i <= n; i++) {
//		if (i != 1)
//			printf(" ");
//		printf("%d", tree[i]);
//	}
//	printf("\n");
//	return 0;
//}
