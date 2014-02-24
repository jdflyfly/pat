//#include<stdio.h>
//
//#define Inf 100000000
//
//int dis[505][505];
//int cost[505][505];
//int d[505];
//int c[505];
//int p[505];
//int known[505];
//
//void printPath(int end) {
//	if (p[end] != -1)
//		printPath(p[end]);
//	printf("%d ", end);
//
//}
//
//void dijkstra(int start, int end, int n) {
////init
//	int i;
//	for (i = 0; i < n; i++) {
//		d[i] = Inf;
//		c[i] = Inf;
//		p[i] = -1;
//	}
//	d[start] = 0;
//	c[start] = 0;
//
////loop
//	int idx = -1;
//	do {
//		int minToChoose = Inf;
//		for (i = 0; i < n; i++) {
//			if (!known[i] && d[i] < minToChoose) {
//				minToChoose = d[i];
//				idx = i;
//			}
//
//		}
//		known[idx] = 1;
//
//		for (i = 0; i < n; i++) {
//			if (!known[i] && dis[idx][i])
//				if (d[i] > d[idx] + dis[idx][i]
//						|| (d[i] == d[idx] + dis[idx][i]
//								&& c[i] > c[idx] + cost[idx][i])) {
//					d[i] = d[idx] + dis[idx][i];
//					c[i] = c[idx] + cost[idx][i];
//					p[i] = idx;
//				}
//
//		}
//
//	} while (idx != end);
//
//}
//
//int main() {
////	freopen("in.txt", "r", stdin);
//	int n, m, s, dd;
//	scanf("%d%d%d%d", &n, &m, &s, &dd);
//	int i;
//	int tmpFrom, tmpTo, tmpDis, tmpCost;
//	for (i = 0; i < m; i++) {
//		scanf("%d%d%d%d", &tmpFrom, &tmpTo, &tmpDis, &tmpCost);
//		dis[tmpFrom][tmpTo] = tmpDis;
//		dis[tmpTo][tmpFrom] = tmpDis;
//		cost[tmpFrom][tmpTo] = tmpCost;
//		cost[tmpTo][tmpFrom] = tmpCost;
//	}
//
//	dijkstra(s, dd, n);
//
//	printPath(dd);
//	printf("%d %d\n", d[dd], c[dd]);
//
//	return 0;
//}
