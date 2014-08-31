/**
链接： http://pat.zju.edu.cn/contests/pat-a-practise/1004
 
题意：统计一颗给定树的每层的叶子节点数目。
 
 
分析：基于节点数据量比较小，可以简单地利用链接矩阵的方式存储树，然后利用dfs遍历，遍历的时候记录深度变量用于统计。
*/

#include<stdio.h>

int mat[105][105];
int num[105];
int n, m;
int maxDep = -1;

void dfs(int id, int dep) {

	int isLeaf = 1;
	int i;
	for (i = 1; i <= n; i++) {
		if (mat[id][i]) {
			isLeaf = 0;
			dfs(i, dep + 1);
		}

	}

	if (isLeaf) {
		num[dep]++;
		if (dep > maxDep)
			maxDep = dep;
	}

}

int main() {
	scanf("%d%d", &n, &m);

	int i;
	for (i = 0; i < m; i++) {
		int father, k, child;
		scanf("%d%d", &father, &k);
		int j;
		for (j = 0; j < k; j++) {
			scanf("%d", &child);
			mat[father][child] = 1;
		}
	}

	dfs(1, 0);

	for (i = 0; i <= maxDep; i++) {
		printf("%d", num[i]);
		if (i != maxDep)
			printf(" ");
	}

	return 0;
}
