///*
// trick：
// 1、前导0
// 如：000001,000.000001
// 2、出现0时也要按照科学计数法输出
// e.g. 4 00000.00000 0001
// NO 0.0000*10^0 0.1*10^1
// 3、小于0.1的情况 0.00000001
//
// */
//
//#include<stdio.h>
//#include<string.h>
//
//void convert(int n, char* str, char* res, int *exp) {
//	if (str[0] == '0') {
//		if (str[1] != '.') {
//			int i;
//			for (i = 0; i < n; i++)
//				res[i] = '0';
//			res[i] = 0;
//			*exp = 0;
//			return;
//		} else {
//			int i;
//			int count = 0;
//			int len = strlen(str);
//			for (i = 2; i < len; i++) {
//				if (str[i] == '0')
//					count++;
//				else
//					break;
//
//			}
//			*exp = -count;
//
//			int j;
//			for (i = 2 + count, j = 0; i < len && n > 0; i++) {
//				res[j++] = str[i];
//				n--;
//			}
//
//			while (n > 0) {
//				res[j++] = '0';
//				n--;
//			}
//
//			res[j] = 0;
//
//		}
//
//	} else {
//		int i;
//		int len = strlen(str);
//		for (i = 0; i < len; i++) {
//			if (str[i] == '.') {
//				*exp = i;
//				break;
//			}
//		}
//		if (i == len)
//			*exp = i;
//
//		int j;
//		for (i = 0, j = 0; i < len && n > 0; i++) {
//			if (str[i] == '.')
//				continue;
//			res[j++] = str[i];
//			n--;
//		}
//
//		while (n > 0) {
//			res[j++] = '0';
//			n--;
//		}
//
//		res[j] = 0;
//	}
//
//}
//
//void init(char* before, char* after) {
//	int len = strlen(before);
//	int i;
//	int zero = 1;
//	//0
//	for (i = 0; i < len; i++) {
//		if (before[i] != '0' && before[i] != '.')
//			zero = 0;
//	}
//	if(zero){
//		after[0]='0';
//		after[1]=0;
//		return;
//	}
//
//	int start = 0;
//	for (i = 0; i < len - 1; i++) {
//		if (before[i] == '0' && before[i + 1] != '0') {
//			if (before[i + 1] == '.')
//				start = i;
//			else
//				start = i + 1;
//			break;
//		}
//
//	}
//	strcpy(after, before + start);
//
//}
//
//int main() {
////	freopen("in.txt", "r", stdin);
//	int n;
//	char strA[105];
//	char strB[105];
//
//	char resultA[105];
//	char resultB[105];
//	int expA;
//	int expB;
//
//	char tmpA[105];
//	char tmpB[105];
//	scanf("%d%s%s", &n, tmpA, tmpB);
//
//	init(tmpA, strA);
//	init(tmpB, strB);
//	convert(n, strA, resultA, &expA);
//	convert(n, strB, resultB, &expB);
//	if (strcmp(resultA, resultB) == 0 && expA == expB)
//		printf("YES 0.%s*10^%d\n", resultA, expA);
//	else
//		printf("NO 0.%s*10^%d 0.%s*10^%d\n", resultA, expA, resultB, expB);
//
//	return 0;
//}
