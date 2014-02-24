#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define Inf 100000000

int road[505][505];
int people[505];
int n, m, from, to;

int known[505];
int d[505];
int p[505];

int visited[505];
int maxNum = -1;
int pathNum = 0;

//void printStatus() {
//	int i;
//	printf("known:");
//	for (i = 0; i < n; i++) {
//		printf("%d ", known[i]);
//	}
//	printf("d:");
//	for (i = 0; i < n; i++) {
//		printf("%d ", d[i]);
//	}
//
//	printf("p:");
//	for (i = 0; i < n; i++) {
//		printf("%d ", p[i]);
//	}
//	printf("\n");
//}

int getMin() {
	int i;
	int min = Inf;
	int minIdx = -1;
	for (i = 0; i < n; i++) {
		if (!known[i] && d[i] < min) {
			min = d[i];
			minIdx = i;
		}
	}
	return minIdx;

}

void dijkstra() {
	//init
	memset(known, 0, sizeof(known));
	memset(p, -1, sizeof(p));
	int i;
	for (i = 0; i < n; i++)
		d[i] = Inf;

	d[from] = 0;
//	printStatus();
	//loop
	int min;
	while (1) {
		min = getMin();
		if (min == -1)
			break;

		known[min] = 1;
		int j;
		for (j = 0; j < n; j++) {
			if (road[min][j]) {
				if (!known[j])
					if (d[min] + road[min][j] < d[j]) {
						d[j] = d[min] + road[min][j];
						p[j] = min;
					}

			}

		}

	}

}

//void printPath(int to) {
//	if (p[to] != -1)
//		printPath(p[to]);
//	printf("%d ", to);
//}

void dfs(int city, int dis, int peoNum) {
	if (city == to && dis == d[to]) {
		pathNum++;
		if (peoNum > maxNum)
			maxNum = peoNum;
	}
	if(dis>d[to])
		return;
	int i;
	for (i = 0; i < n; i++) {
		if (road[city][i] && !visited[i]) {
			visited[i] = 1;
			dfs(i, dis + road[city][i], peoNum + people[i]);
			visited[i] = 0;
		}
	}

}

int main() {
	scanf("%d%d%d%d", &n, &m, &from, &to);
	int i;
	for (i = 0; i < n; i++)
		scanf("%d", &people[i]);
	int a, b, dis;
	for (i = 0; i < m; i++) {
		scanf("%d%d%d", &a, &b, &dis);
		road[a][b] = dis;
		road[b][a] = dis;
	}
	dijkstra();
//	printStatus();

//	printPath(to);

	dfs(from, 0, people[from]);
	printf("%d %d\n", pathNum, maxNum);

	return 0;
}
