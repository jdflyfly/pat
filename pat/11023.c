//#include<stdio.h>
//#include<string.h>
//
//char ori[25];
//char doub[25];
//
//int oriFlag[10];
//int doubFlag[10];
//
//void process(char *str, int *a) {
//	int len = strlen(str);
//	int i;
//	for (i = 0; i < len; i++)
//		a[str[i] - '0'] = 1;
//
//}
//void add() {
//	int n = strlen(ori);
//	char rev[25];
//	int i;
//	int c = 0;
//	for (i = n - 1; i >= 0; i--) {
//		int num = (ori[i] - '0') * 2 + c;
//		if (num >= 10) {
//			rev[n - 1 - i] = '0' + num - 10;
//			c = 1;
//		} else {
//			rev[n - 1 - i] = '0' + num;
//			c = 0;
//		}
//
//	}
//	rev[n - 1 - i] = 0;
//	if (c) {
//		rev[n - 1 - i] = '1';
//		rev[n - i] = 0;
//	}
//
//	int m = strlen(rev);
//	for (i = 0; i < m; i++)
//		doub[i] = rev[m - 1 - i];
//
//}
//
//int main() {
//	scanf("%s", ori);
//	process(ori, oriFlag);
//	add();
//	process(doub, doubFlag);
//	int i;
//	int equal = 1;
//	for (i = 0; i < 10; i++) {
//		if (oriFlag[i] != doubFlag[i]) {
//			equal = 0;
//			break;
//		}
//	}
//	if (equal)
//		printf("Yes\n");
//	else
//		printf("No\n");
//
//	printf("%s\n", doub);
//
//	return 0;
//}
