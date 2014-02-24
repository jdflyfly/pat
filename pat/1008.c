//#include<stdio.h>
//
//int arr[105];
//int n, m;
//
//void move() {
//	if(n==1)
//		return;
//	int tmp;
//	tmp = arr[n - 1];
//	int i;
//	for (i = n - 2; i >= 0; i--)
//		arr[i + 1] = arr[i];
//	arr[0] = tmp;
//	return;
//}
//
//int main() {
//	scanf("%d%d", &n, &m);
//
//	int i;
//	for (i = 0; i < n; i++)
//		scanf("%d", &arr[i]);
//
//	for (i = 0; i < m % n; i++)
//		move();
//
//	for (i = 0; i < n; i++) {
//		printf("%d", arr[i]);
//		if (i != n - 1)
//			printf(" ");
//	}
//	printf("\n");
//
//	return 0;
//}
