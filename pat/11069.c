//#include<stdio.h>
//#include<stdlib.h>
//
//int cmp1(const void*a, const void*b) {
//	return *(char*) b - *(char*) a;
//}
//
//int getMax(int num) {
//	char str[5];
//	sprintf(str, "%04d", num);
//	qsort(str, 4, sizeof(char), cmp1);
//	int i;
//	int result = 0;
//	for (i = 0; i < 4; i++) {
//		result = result * 10 + (str[i] - '0');
//	}
//	return result;
//}
//
//int cmp2(const void*a, const void*b) {
//	return *(char*) a - *(char*) b;
//}
//
//int getMin(int num) {
//	char str[5];
//	sprintf(str, "%04d", num);
//	qsort(str, 4, sizeof(char), cmp2);
//	int i;
//	int result = 0;
//	for (i = 0; i < 4; i++) {
//		result = result * 10 + (str[i] - '0');
//	}
//	return result;
//}
//
//int fourDigitEqual(int num) {
//	if (num < 1000)
//		return 0;
//	char str[5];
//	sprintf(str, "%04d", num);
//	if (str[0] == str[1] && str[1] == str[2] && str[2] == str[3])
//		return 1;
//
//	return 0;
//
//}
//
//int main() {
//	int num;
//	scanf("%d", &num);
//	if (fourDigitEqual(num))
//		printf("%04d - %04d = 0000\n", num, num);
//	else {
//		int max, min;
//		do {
//			max = getMax(num);
//			min = getMin(num);
//			printf("%04d - %04d = %04d\n", max, min, max - min);
//			num = max - min;
//		} while (num != 6174);
//
//	}
//
//	return 0;
//}
