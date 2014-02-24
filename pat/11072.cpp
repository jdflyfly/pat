//#include<stdio.h>
//#include<ctype.h>
//#include<stdlib.h>
//
//#define MAX 1015
//#define Inf 100000000
//
//int dis[MAX][MAX];
//
//int known[MAX];
//int d[MAX];
//int p[MAX];
//
//void dijkstra(int start, int n, int ds) {
//	//init
//	int i;
//	for (i = 1; i <= n; i++) {
//		known[i] = 0;
//		d[i] = Inf;
//		p[i] = -1;
//	}
//	d[start] = 0;
//	int idx;
//	do {
//		int minDis = Inf;
//		idx = -1;
//		for (i = 1; i <= n; i++) {
//			if (!known[i] && d[i] < minDis) {
//				minDis = d[i];
//				idx = i;
//			}
//		}
//		if (idx == -1)
//			break;
//
//		known[idx] = 1;
//		for (i = 1; i <= n; i++) {
//			if (!known[i] && dis[idx][i])
//				if (d[i] > d[idx] + dis[idx][i]) {
//					d[i] = d[idx] + dis[idx][i];
//					p[i] = idx;
//				}
//
//		}
//
//	} while (true);
//
//}
//
//int main() {
////	freopen("in.txt", "r", stdin);
//	int n, m, k, ds;
//	scanf("%d%d%d%d", &n, &m, &k, &ds);
//	int i;
//	char from[5], to[5];
//	int tmpDis;
//	for (i = 0; i < k; i++) {
//		scanf("%s%s%d", from, to, &tmpDis);
//		if (isdigit(from[0])) {
//			if (isdigit(to[0])) {
//				dis[atoi(from)][atoi(to)] = tmpDis;
//				dis[atoi(to)][atoi(from)] = tmpDis;
//			} else {
//				dis[atoi(from)][atoi(&to[1]) + n] = tmpDis;
//				dis[atoi(&to[1]) + n][atoi(from)] = tmpDis;
//
//			}
//
//		} else {
//			if (isdigit(to[0])) {
//				dis[atoi(&from[1]) + n][atoi(to)] = tmpDis;
//				dis[atoi(to)][atoi(&from[1]) + n] = tmpDis;
//
//			} else {
//				dis[atoi(&from[1]) + n][atoi(&to[1]) + n] = tmpDis;
//				dis[atoi(&to[1]) + n][atoi(&from[1]) + n] = tmpDis;
//
//			}
//
//		}
//
//	}
//	double maxMinDis = -1;
//	double minAvg = Inf;
//	int resultIdx = -1;
//
//	for (i = 1; i <= m; i++) {
//		dijkstra(n + i, m + n, ds);
//
//		int tooFar = 0;
//		int min = Inf;
//		int sum = 0;
//		int j;
//		for (j = 1; j <= n; j++) {
//			sum += d[j];
//			if (d[j] > ds)
//				tooFar = 1;
//			if (d[j] && d[j] < min)
//				min = d[j];
////			printf("%d ", d[j]);
//		}
//		double avg = 1.0 * sum / n;
//		if (!tooFar) {
//			if (min > maxMinDis || (min == maxMinDis && avg < minAvg)) {
//				maxMinDis = min;
//				minAvg = avg;
//				resultIdx = i;
//			}
//
//		}
//
////		printf("\n");
////		printf("tooFar:%d,min:%d,avg:%.1lf\n", tooFar, min, avg);
//
//	}
//	if (resultIdx != -1)
//		printf("G%d\n%.1lf %.1lf", resultIdx, maxMinDis, minAvg);
//	else
//		printf("No Solution\n");
//
//	return 0;
//}
