/*

链接：http://pat.zju.edu.cn/contests/pat-a-practise/1018
 
题意（转biaobiaoqi）：以杭州的公用自行车站点管理为背景。每个站点是一个节点，每个节点上最多停放 Cmax 辆自行车，
Cmax/2 为节点的最佳状态。不同节点间距离不同，整个构成了一张带权无向图。要求从起始点（公用自行车管理中心）出发，
去目的地维护目的地节点的车辆状态，如果车辆低于 Cmax/2，则给它添加车辆到 Cmax/2 辆，如果多于 Cmax/2，则去除掉几辆车。
同时，在去往目的地的过程中，也需要调整所有沿途站点的车辆（这里题目没有交代清楚，实际测试是只能在去往目的地的途中调整，
回来的途上不可调整）。求到给定目的地的最短路径，如果有多条最短路径，则按照 
1.从管理中心送出的车辆越少越好；2.拿回到管理中心的车越少越好的优先级找到结果。
 
 
分析：首先利用dijkstra算法求出最短路径的长度，然后dfs求出所有的最短路径，然后在其中寻找题目要求的最优的路径。
 
 
 */


#include<stdio.h>
#include<vector>

using namespace std;

#define Inf 100000000
int c, n, sp, m;
int bikeNum[505];
int mat[505][505];
int found[505];
int d[505];
int p[505];

int visited[505];
vector<vector<int> > shortestPaths;

int getMinIdx() {
	int i;
	int minDis = Inf;
	int minIdx = -1;
	for (i = 0; i <= n; i++) {
		if (!found[i] && d[i] < minDis) {
			minDis = d[i];
			minIdx = i;
		}
	}
	return minIdx;
}

void dfs(int v, int dis, int num, vector<int>& vec) {
	vec.push_back(v);
	if (dis > d[sp]) {
		vec.pop_back();
		return;
	}

	if (v == sp && dis == d[sp]) {
		shortestPaths.push_back(vec);
		vec.pop_back();
		return;
	}
	visited[v] = 1;
	int i;
	for (i = 0; i <= n; i++) {
		if (!visited[i] && mat[v][i])
			dfs(i, dis + mat[v][i], num + bikeNum[v] - c / 2, vec);
	}
	visited[v] = 0;
	vec.pop_back();
	return;
}

int main() {
//	freopen("in.txt", "r", stdin);
	scanf("%d%d%d%d", &c, &n, &sp, &m);
	int i;
	for (i = 1; i <= n; i++)
		scanf("%d", &bikeNum[i]);
	int from, to, dis;
	for (i = 0; i < m; i++) {
		scanf("%d%d%d", &from, &to, &dis);
		mat[from][to] = dis;
		mat[to][from] = dis;
	}

	d[0] = 0;
	for (i = 1; i <= n; i++)
		d[i] = Inf;
	for (i = 0; i <= n; i++)
		p[i] = -1;
	int idx;
	do {
		idx = getMinIdx();
		found[idx] = 1;
		int i;
		for (i = 0; i <= n; i++) {
			if (mat[idx][i] && !found[i])
				if (d[i] > d[idx] + mat[idx][i]) {
					d[i] = d[idx] + mat[idx][i];
					p[i] = idx;
				}

		}

	} while (idx != sp);

	vector<int> path;
	dfs(0, 0, 0, path);

	int j;
	int minSendBikeNum = Inf;
	int minBikeBackNum = Inf;

	int sendBikeNum[10000];
	int bikeBackNum[10000];

	for (i = 0; i < shortestPaths.size(); i++) {
		int sum = 0;
		int minNum = Inf;
		int tmpSum = 0;
		for (j = 0; j < shortestPaths[i].size(); j++) {
			sum += bikeNum[shortestPaths[i][j]];
			if (j) {
				tmpSum += bikeNum[shortestPaths[i][j]] - c / 2;
				if (tmpSum < minNum) {
					minNum = tmpSum;
				}
			}
		}
//		printf("minNum:%d\n", minNum);

		int tmp = (shortestPaths[i].size() - 1) * c / 2 - sum;
		if (tmp >= 0) {
			sendBikeNum[i] = tmp;
			bikeBackNum[i] = 0;
		} else {
			sendBikeNum[i] = 0;
			bikeBackNum[i] = -tmp;
		}
		if (minNum < 0) {
			sendBikeNum[i] = -minNum;
			bikeBackNum[i] = -tmp-minNum;
		}

	}

	for (i = 0; i < shortestPaths.size(); i++) {
		if (sendBikeNum[i] < minSendBikeNum) {
			minSendBikeNum = sendBikeNum[i];
		}
	}
	int resultIdx = -1;
	for (i = 0; i < shortestPaths.size(); i++) {
		if (sendBikeNum[i] == minSendBikeNum) {
			if (bikeBackNum[i] < minBikeBackNum) {
				minBikeBackNum = bikeBackNum[i];
				resultIdx = i;
			}

		}

	}
	printf("%d ", sendBikeNum[resultIdx]);

	for (i = 0; i < shortestPaths[resultIdx].size(); i++) {
		if (i != 0)
			printf("->");
		printf("%d", shortestPaths[resultIdx][i]);
	}
	printf(" %d\n", bikeBackNum[resultIdx]);

	return 0;
}
