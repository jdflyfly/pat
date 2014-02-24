//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//int pre[1005];
//int in[1005];
//int post[1005];
//int idx;
//
//int cmp(const void*a, const void* b) {
//	return *(int*) a - *(int*) b;
//}
//
//int cmp2(const void*a, const void* b) {
//	return *(int*) b - *(int*) a;
//}
//
//int* findFirstPos(int root, int*in, int n) {
//	int i;
//	for (i = 0; i < n; i++)
//		if (in[i] == root)
//			return &in[i];
//	return NULL;
//}
//
//int*findLastPos(int root, int*in, int n) {
//	int i;
//	for (i = n - 1; i >= 0; i--)
//		if (in[i] == root)
//			return &in[i];
//	return NULL;
//}
//
//int build(int n, int*pre, int*in) {
//	if (n <= 0)
//		return 1;
//	int root = pre[0];
//	int* add = findFirstPos(root, in, n);
//	if (add == NULL)
//		return 0;
//	int p = add - in;
//	int i;
//
//	for (i = 0; i < p; i++) {
//		if (in[i] >= root)
//			return 0;
//	}
//	for (i = p + 1; i < n; i++) {
//		if (in[i] < root)
//			return 0;
//	}
//
//	int one = build(p, pre + 1, in);
//	int two = build(n - 1 - p, pre + 1 + p, in + 1 + p);
//	post[idx++] = root;
//
//	return one && two;
//}
//void printPost(int n) {
//	printf("YES\n");
//	int i;
//	for (i = 0; i < n; i++) {
//		if (i)
//			printf(" ");
//		printf("%d", post[i]);
//	}
//	printf("\n");
//}
//
//int buildMirror(int n, int*pre, int*in) {
//	if (n <= 0)
//		return 1;
//	int root = pre[0];
//	int* add = findLastPos(root, in, n);
//	if (add == NULL)
//		return 0;
//	int p = add - in;
//	int i;
//	for (i = 0; i < p; i++)
//		if (in[i] < root)
//			return 0;
//	for (i = p + 1; i < n; i++)
//		if (in[i] >= root)
//			return 0;
//
//	int one = buildMirror(p, pre + 1, in);
//	int two = buildMirror(n - 1 - p, pre + 1 + p, in + 1 + p);
//	post[idx++] = root;
//	return one && two;
//
//}
//
//int main() {
////	freopen("in.txt", "r", stdin);
//	int n;
//	scanf("%d", &n);
//	int i;
//	for (i = 0; i < n; i++)
//		scanf("%d", &pre[i]);
//	memcpy(in, pre, sizeof(int) * n);
//	qsort(in, n, sizeof(int), cmp);
//
//	int one = build(n, pre, in);
//	int two = -1;
//	if (one) {
//		printPost(n);
//	} else {
//		qsort(in, n, sizeof(int), cmp2);
//		idx = 0;
//		two = buildMirror(n, pre, in);
//		if (two) {
//			printPost(n);
//		} else {
//			printf("NO\n");
//		}
//	}
//
//	return 0;
//}
