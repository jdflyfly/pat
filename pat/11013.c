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
