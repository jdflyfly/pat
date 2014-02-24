//#include<stdio.h>
//#include<ctype.h>
//
//char a[65];
//char b[65];
//char c[65];
//char d[65];
//
//char week[][5] = { "MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN" };
//
//int day;
//int hour;
//int min;
//
//int main() {
////	freopen("in.txt", "r", stdin);
//	scanf("%s", a);
//	scanf("%s", b);
//	scanf("%s", c);
//	scanf("%s", d);
//
//	int i;
//	int isHour = 0;
//	for (i = 0; i < 65; i++) {
//		if (!isHour && a[i] == b[i] && a[i] >= 'A' && a[i] <= 'G') {
//			day = a[i] - 'A';
//			isHour = 1;
//			continue;
//		}
//		if (isHour) {
//			if ((a[i] == b[i])
//					&& ((a[i] >= '0' && a[i] <= '9')
//							|| (a[i] >= 'A' && a[i] <= 'N'))) {
//				if (a[i] >= '0' && a[i] <= '9')
//					hour = a[i] - '0';
//				else
//					hour = 10 + a[i] - 'A';
//				break;
//			}
//		}
//
//	}
//
//	for (i = 0; i < 65; i++) {
//		if (c[i] == d[i] && isalpha(c[i])) {
//			min = i;
//			break;
//		}
//	}
//
//	printf("%s %02d:%02d\n", week[day], hour, min);
//
//	return 0;
//}
