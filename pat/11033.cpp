///*
// * 1.从 A 加油站出发，在能行走的最大范围内，如果有比 A 站汽油更便宜的 B 站，则保证在 A 站点的加油量刚好满足能到达 B 站点；如果没有比 A 站汽油更便宜的站，则在 A 加满车油行走到【从 A 能走出的范围内】油价【最便宜】的站上，再行计算。
// * 2.从 A 加油站出发，在能行走的最大范围内，如果没有其他站点，则 A.dist + 一次最大的行走距离 为 impossible 情况下的最大站点。
// * 注意有个陷阱：如果没有距离为 0 的加油站，则无法行驶。
// *
// *
// */
//
//#include<stdio.h>
//#include<stdlib.h>
//
//typedef struct Station {
//	double price;
//	double position;
//} Station;
//
//Station station[505];
//double c, d, a;
//int n;
//
//int cmp(const void*a, const void*b) {
//	Station*aa = (Station*) a;
//	Station*bb = (Station*) b;
//	return aa->position - bb->position;
//
//}
//
//Station* getNextCheapestStaPos(double curPrice, double curPos, double maxDis) {
//	double minPrice = 1000000000;
//	int minIdx = -1;
//	int i;
//	for (i = 0; i < n; i++) {
//		if (station[i].position > curPos
//				&& station[i].position <= curPos + maxDis) {
//			if (station[i].price < minPrice) {
//				minPrice = station[i].price;
//				minIdx = i;
//			}
//		}
//	}
//	if (minIdx != -1)
//		return &station[minIdx];
//	else
//		return NULL;
//
//}
//
//Station* getNextCheaperStaPos(double curPrice, double curPos, double maxDis) {
//	int i;
//	for (i = 0; i < n; i++) {
//		if (station[i].position > curPos
//				&& station[i].position <= curPos + maxDis) {
//			if (station[i].price <= curPrice) {
//				return &station[i];
//			}
//		}
//	}
//	return NULL;
//}
//
//int main() {
////	freopen("in.txt", "r", stdin);
//	scanf("%lf%lf%lf%d", &c, &d, &a, &n);
//	int i;
//	for (i = 0; i < n; i++) {
//		scanf("%lf%lf", &station[i].price, &station[i].position);
//	}
//	qsort(station, n, sizeof(Station), cmp);
//	if (station[0].position != 0) {
//		printf("The maximum travel distance = 0.00\n");
//		return 0;
//	}
//	int impossible = 0;
//	double cost = 0;
//	double curPos = 0;
//	double maxDis = c * a;
//	double curPrice = station[0].price;
//	double curGas = 0;
//	while (curPos < d) {
//
//		Station* nextSta = getNextCheaperStaPos(curPrice, curPos, maxDis);
//		if (nextSta == NULL) {
//			if (curPos + maxDis >= d) {
//				if (((d - curPos) / a - curGas) > 0) {
//					cost += ((d - curPos) / a - curGas) * curPrice;
//					break;
//				} else {
//					break;
//				}
//
//			} else
//				nextSta = getNextCheapestStaPos(curPrice, curPos, maxDis);
//		}
//
//		if (nextSta == NULL) {
//			if (curPos + maxDis < d) {
//				curPos += maxDis;
//				impossible = 1;
//				break;
//			} else {
//				if (((d - curPos) / a - curGas) > 0) {
//					cost += ((d - curPos) / a - curGas) * curPrice;
//					break;
//				} else {
//					break;
//				}
//
//			}
//
//		}
//
//		else if (nextSta->price <= curPrice) {
//			if (((nextSta->position - curPos) / a - curGas) >= 0) {
//				cost += ((nextSta->position - curPos) / a - curGas) * curPrice;
//				curGas = 0;
//			} else {
//				curGas = curGas - (nextSta->position - curPos) / a;
//			}
//			curPos = nextSta->position;
//			curPrice = nextSta->price;
//		} else {
//			cost += c * curPrice - curGas * curPrice;
//			curGas = c - (nextSta->position - curPos) / a;
//			curPos = nextSta->position;
//			curPrice = nextSta->price;
//		}
//
//	}
//	if (impossible)
//		printf("The maximum travel distance = %.2lf", curPos);
//	else
//		printf("%.2lf\n", cost);
//
//	return 0;
//}
