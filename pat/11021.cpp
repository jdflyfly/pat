//#include<stdio.h>
//#include<stdlib.h>
//
//#define Max 10005
//
//int parents[Max];
//int mat[Max][Max];
//int visit[Max];
//int n;
//int maxDep = -1;
//int results[Max];
//int idx;
//
//int oneLeaf = -1;
//int firstMaxDep = -1;
//
//int cmp(const void*a, const void* b) {
//	return *(int*) a - *(int*) b;
//}
//
//void firstDfs(int num, int dep) {
//	visit[num] = 1;
//
//	if (dep > firstMaxDep) {
//		firstMaxDep = dep;
//		oneLeaf = num;
//	}
//
//	int i;
//	for (i = 1; i <= n; i++) {
//		if (!visit[i] && mat[num][i])
//			firstDfs(i, dep + 1);
//	}
//}
//
//void dfsDep(int num, int dep) {
//	visit[num] = 1;
//	if (dep > maxDep) {
//		maxDep = dep;
//		idx = 0;
//		results[idx++] = num;
//	} else if (dep == maxDep) {
//		results[idx++] = num;
//	}
//
//	int i;
//	for (i = 1; i <= n; i++) {
//		if (!visit[i] && mat[num][i])
//			dfsDep(i, dep + 1);
//	}
//
//}
//
//int find(int a) {
//	int p = a;
//	while (p != parents[p])
//		p = parents[p];
//	return p;
//}
//
//void connect(int a, int b) {
//	int p = find(a);
//	int q = find(b);
//	if (p != q)
//		parents[p] = q;
//}
//
//int main() {
//	freopen("in.txt", "r", stdin);
//	scanf("%d", &n);
//
//	int i;
//
//	for (i = 1; i <= n; i++) {
//		parents[i] = i;
//	}
//
//	int a, b;
//	for (i = 1; i < n; i++) {
//		scanf("%d%d", &a, &b);
//		mat[a][b] = 1;
//		mat[b][a] = 1;
//		connect(a, b);
//	}
//
//	int componentNum = 0;
//	for (i = 1; i <= n; i++) {
//		if (parents[i] == i)
//			componentNum++;
//	}
//	if (componentNum > 1)
//		printf("Error: %d components\n", componentNum);
//
//	else {
//
//		int j;
//		for (j = 1; j <= n; j++)
//			visit[j] = 0;
//		firstDfs(1, 0);
//
//		for (j = 1; j <= n; j++)
//			visit[j] = 0;
//		dfsDep(oneLeaf, 0);
//
//		results[idx++] = oneLeaf;
//
//		qsort(results, idx, sizeof(int), cmp);
//
//		for (i = 0; i < idx; i++)
//			if (i == 0 || (i > 0 && results[i] != results[i - 1]))
//				printf("%d\n", results[i]);
//
//	}
//
//	return 0;
//}
