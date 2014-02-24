//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//int cmp(const void*a, const void*b) {
//	char*x = (char*) a;
//	char*y = (char*) b;
//	char tmp1[20];
//	char tmp2[20];
//	strcpy(tmp1, x);
//	strcpy(tmp2, y);
//	strcat(tmp1, y);
//	strcat(tmp2, x);
//
//	return strcmp(tmp1, tmp2);
//
//}
//
//int n;
//char str[10000 + 5][10];
//char res[100000];
//
//int main() {
////	freopen("in.txt", "r", stdin);
//	scanf("%d", &n);
//	int i;
//	for (i = 0; i < n; i++)
//		scanf("%s", str[i]);
//
//	qsort(str, n, sizeof(str[0]), cmp);
//
//	int end = 0;
//	for (i = 0; i < n; i++) {
//		if (atoi(str[i]) == 0) {
//			strcat(res, str[i]);
//			if (i == n - 1)
//				end = 1;
//		} else
//			break;
//	}
//	if (end) {
//		printf("0\n");
//		return 0;
//	}
//	int j;
//	for (j = i; j < n; j++) {
//		if (j != i)
//			printf("%s", str[j]);
//		else
//			printf("%d", atoi(str[j]));
//	}
//	printf("\n");
//
//	return 0;
//}
