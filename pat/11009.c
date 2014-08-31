/**
链接：http://pat.zju.edu.cn/contests/pat-a-practise/1009
 
题意：计算多项式的乘积。
 
分析：基于编程方便，还是采用数组的方式来实现。
*/

#include<stdio.h>

typedef struct Poly {
	int exp;
	double coe;
} Poly;

Poly a[1005];
Poly b[1005];
double res[2005];

int main() {
	int n;
	scanf("%d", &n);
	int i;
	for (i = 0; i < n; i++) {
		scanf("%d%lf", &a[i].exp, &a[i].coe);
	}
	int m;
	scanf("%d", &m);
	for (i = 0; i < m; i++) {
		scanf("%d%lf", &b[i].exp, &b[i].coe);
	}
	int j;
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++) {
			res[a[i].exp + b[j].exp] += a[i].coe * b[j].coe;
		}

	int count = 0;
	for (i = 0; i < 2005; i++) {
		if (res[i]) {
			count++;
		}

	}

	printf("%d", count);

	for (i = 2005; i >= 0; i--) {
		if (res[i])
			printf(" %d %.1lf", i, res[i]);
	}

	printf("\n");

	return 0;
}
