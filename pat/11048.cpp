//#include<stdio.h>
//#include<stdlib.h>
//
//int arr[100005];
//
//int cmp(const void*a, const void*b) {
//	return *(int*) a - *(int*) b;
//}
//
//int main() {
////	freopen("in.txt", "r", stdin);
//	int n, m;
//	scanf("%d%d", &n, &m);
//	int i;
//	for (i = 0; i < n; i++) {
//		scanf("%d", &arr[i]);
//	}
//	qsort(arr, n, sizeof(int), cmp);
//	i = 0;
//	int j = n - 1;
//	int found = 0;
//	while (i < j) {
//		if (arr[i] + arr[j] == m) {
//			found = 1;
//			break;
//		} else if (arr[i] + arr[j] < m) {
//			i++;
//		} else {
//			j--;
//		}
//
//	}
//	if (found)
//		printf("%d %d\n", arr[i], arr[j]);
//	else
//		printf("No Solution\n");
//
//	return 0;
//}
