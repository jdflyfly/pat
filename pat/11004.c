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
