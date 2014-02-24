//#include<stdio.h>
//
//int main() {
////	freopen("in.txt", "r", stdin);
//	int tmp;
//	int sum1 = 0, count1 = 0, sum2 = 0, count2 = 0, count3 = 0;
//	double avg4 = 0;
//	int max5 = -1;
//	int count5 = 0;
//	int flag2 = 0;
//	int count4 = 0;
//	int n;
//	scanf("%d", &n);
//	int i;
//
//	for (i = 0; i < n; i++) {
//		scanf("%d", &tmp);
//		if (tmp % 5 == 0) {
//			if (tmp % 2 == 0) {
//				sum1 += tmp;
//				count1++;
//			}
//		} else if (tmp % 5 == 1) {
//			if (flag2) {
//				tmp = -tmp;
//				flag2 = 0;
//			} else
//				flag2 = 1;
//
//			sum2 += tmp;
//			count2++;
//
//		} else if (tmp % 5 == 2) {
//			count3++;
//
//		} else if (tmp % 5 == 3) {
//			avg4 = (avg4 * count4 + tmp) / (count4 + 1);
//			count4++;
//
//		} else {
//			if (tmp > max5)
//				max5 = tmp;
//			count5++;
//		}
//
//	}
//	if (count1 != 0)
//		printf("%d ", sum1);
//	else
//		printf("N ");
//
//	if (count2 != 0)
//		printf("%d ", sum2);
//	else
//		printf("N ");
//
//	if (count3 != 0)
//		printf("%d ", count3);
//	else
//		printf("N ");
//
//	if (count4 != 0)
//		printf("%.1lf ", avg4);
//	else
//		printf("N ");
//
//	if (count5 != 0)
//		printf("%d\n", max5);
//	else
//		printf("N\n");
//
//	return 0;
//}
