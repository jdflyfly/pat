//#include<stdio.h>
//
//long a[1000005];
//long b[1000005];
//
//int main() {
//	freopen("in.txt", "r", stdin);
//	int m, n;
//	scanf("%d", &m);
//	int i;
//	for (i = 0; i < m; i++)
//		scanf("%ld", &a[i]);
//
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//		scanf("%ld", &b[i]);
//
//	int idx;
//	if ((m + n) % 2 == 0)
//		idx = (m + n) / 2;
//	else
//		idx = (m + n + 1) / 2;
//
//	int p = 0, q = 0;
//	int counter = 0;
//	int tmp = -1;
//	while (p < m || q < n) {
//
//		if (p >= m) {
//			tmp = b[q];
//			q++;
//		} else if (q >= n) {
//			tmp = a[p];
//			p++;
//		} else {
//			if (a[p] <= b[q]) {
//				tmp = a[p];
//				p++;
//			} else if (a[p] > b[q]) {
//				tmp = b[q];
//				q++;
//			}
//		}
//		counter++;
//		if (counter == idx)
//			break;
//	}
//	printf("%d\n", tmp);
//
//	return 0;
//}
