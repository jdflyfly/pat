//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//
//int cmp(const void *a, const void *b) {
//
//	return *(int*) b - *(int*) a;
//}
//
//int main() {
////	freopen("in.txt","r",stdin);
//	int n;
//	scanf("%d", &n);
//	int num;
//
//	int flag[105];
//	memset(flag, 0,sizeof(flag));
//	int result[105];
//	int idx = 0;
//
//	while (n--) {
//		scanf("%d", &num);
//		result[idx++] = num;
//		if (num >= 1 && !flag[num]) {
//			if (num % 2 == 0) {
//				num = num / 2;
//			} else {
//				num = (num * 3 + 1) / 2;
//			}
//		}
//
//		while (num >= 1 && !flag[num]) {
//			flag[num] = 1;
//			if (num % 2 == 0) {
//				num = num / 2;
//			} else {
//				num = (num * 3 + 1) / 2;
//			}
//		}
//	}
//
//	qsort(result, idx, sizeof(int), cmp);
//	int i;
//	int reverse[105];
//	int idx2 = 0;
//	for (i = 0; i < idx; i++) {
//		if (!flag[result[i]])
//			reverse[idx2++] = result[i];
//	}
//
//	for (i = 0; i < idx2; i++) {
//		printf("%d", reverse[i]);
//		if (i != idx2 - 1)
//			printf(" ");
//	}
//	printf("\n");
//
//	return 0;
//}
