//#include<stdio.h>
//#include<stdlib.h>
//
//typedef struct Mooncake {
//	double amount;
//	double price;
//} Mooncake;
//
//Mooncake mooncake[1005];
//int n, d;
//
//int cmp(const void*a, const void*b) {
//	Mooncake* aa = (Mooncake*) a;
//	Mooncake* bb = (Mooncake*) b;
//	double x = aa->price / aa->amount;
//	double y = bb->price / bb->amount;
//	if (x < y)
//		return 1;
//	else if (x > y)
//		return -1;
//	else
//		return 0;
//}
//
//
//int main() {
////	freopen("in.txt", "r", stdin);
//	scanf("%d%d", &n, &d);
//	int i;
//	for (i = 0; i < n; i++) {
//		scanf("%lf", &mooncake[i].amount);
//	}
//	for (i = 0; i < n; i++) {
//		scanf("%lf", &mooncake[i].price);
//	}
//	qsort(mooncake, n, sizeof(Mooncake), cmp);
//
//	double profit = 0;
//	double curAmount = 0;
//	for (i = 0; i < n; i++) {
//		if (curAmount >= d)
//			break;
//		if (curAmount + mooncake[i].amount <= d) {
//			curAmount += mooncake[i].amount;
//			profit += mooncake[i].price;
//		} else {
//			profit += (d - curAmount)
//					* (mooncake[i].price / mooncake[i].amount);
//			curAmount = d;
//		}
//
//	}
//	printf("%.2lf\n", profit);
//
//	return 0;
//}
