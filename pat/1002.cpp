/**

链接：http://pat.zju.edu.cn/contests/pat-a-practise/1002
 
题意：多项式相加并且格式化输出。
 
分析：指数范围不大，可以简单用数组实现，数组的索引对应指数，内容对应系数。

*/

#include<stdio.h>

double result[1005];

int main() {
	int k;
	scanf("%d", &k);
	int exp;
	double coe;
	while (k--) {
		scanf("%d%lf", &exp, &coe);
		result[exp] += coe;
	}
	scanf("%d", &k);
	while (k--) {
		scanf("%d%lf", &exp, &coe);
		result[exp] += coe;
	}

	int i;
	int count = 0;
	for (i = 0; i < 1005; i++) {
		if (result[i])
			count++;
	}

	printf("%d", count);
	for (i = 1005; i >= 0; i--) {
		if (result[i]) {
			printf(" %d %.1lf", i, result[i]);
		}
	}
	printf("\n");

	return 0;
}
