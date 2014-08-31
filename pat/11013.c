/**
题意:给定一张图和指定几个点。针对给出的每个点，要求计算，在除掉连接该点的路径的情况下，保证整个图连通所需要添加的边的数量。

分析:DFS计算连通分量。

针对每个点，执行算法的过程中，需要注意去除掉该点对应的所有通路。
*/


#include<stdio.h>
#include<string.h>

int mat[1005][1005];
int n, m, k;

int backup[1005];
int visited[1005];

void dfs(int a) {
	visited[a] = 1;
	int i;
	for (i = 1; i <= n; i++) {
		if (!visited[i] && mat[a][i])
			dfs(i);
	}
}

int calcu(int removed) {
	memset(visited, 0, sizeof(visited));
	int num = 0;
	memcpy(backup, mat[removed], sizeof(int) * 1005);
	memset(mat[removed], 0, sizeof(int) * 1005);
	int i;
	for (i = 1; i <= n; i++) {
		if (i != removed && !visited[i]) {
			dfs(i);
			num++;
		}
	}

	memcpy(mat[removed], backup, sizeof(int) * 1005);

	return num - 1;
}

int main() {
//	freopen("in.txt", "r", stdin);
	scanf("%d%d%d", &n, &m, &k);
	int i;
	int a, b;
	for (i = 0; i < m; i++) {
		scanf("%d%d", &a, &b);
		mat[a][b] = mat[b][a] = 1;

	}
	int removed;
	for (i = 0; i < k; i++) {
		scanf("%d", &removed);
		printf("%d\n", calcu(removed));

	}

	return 0;
}
