//#include<stdio.h>
//#include<map>
//using namespace std;
//
//int a[100005];
//int ordered[100005];
//int n;
//int num;
//map<int, int> oldIdx;
//
//void swap(int *a, int *b) {
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//	num++;
//}
//
//int findIdx(int num) {
//	int i;
//	for (i = 0; i < n; i++) {
//		if (a[i] == num)
//			return i;
//	}
//	return -1;
//}
//
//int isDone() {
//	int i;
//	for (i = 0; i < n; i++) {
//		if (ordered[i] == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int getFirstUnorderIdx() {
//	int i;
//	for (i = 0; i < n; i++) {
//		if (ordered[i] == 0 && a[i] != 0)
//			return i;
//	}
//	return -1;
//}
//
//int main() {
////	freopen("in.txt", "r", stdin);
//	scanf("%d", &n);
//	int i;
//	for (i = 0; i < n; i++) {
//		scanf("%d", &a[i]);
//		oldIdx[a[i]] = i;
//	}
//
//	for (i = 0; i < n; i++)
//		if (a[i] == i)
//			ordered[i] = 1;
//
//	int zeroIdx = findIdx(0);
//	while (!isDone()) {
//
//		while (a[0] != 0) {
//			int otherIdx = oldIdx[zeroIdx];
//			swap(&a[zeroIdx], &a[otherIdx]);
//			ordered[zeroIdx] = 1;
//			zeroIdx = otherIdx;
//		}
//		int firstIdx = getFirstUnorderIdx();
//		if (firstIdx == -1)
//			break;
//		oldIdx[a[firstIdx]]=zeroIdx;
//		swap(&a[zeroIdx], &a[firstIdx]);
//		zeroIdx = firstIdx;
//
//	}
//	printf("%d\n", num);
//
//	return 0;
//}
