/**
链接：http://pat.zju.edu.cn/contests/pat-a-practise/1011
 
题意：给定数据，找到每行的最大值根据公式计算结果。
 
分析：简单模拟题目。
*/

#include<stdio.h>

double bigger(double a, double b) {
	if (a > b)
		return a;
	else
		return b;
}

int main() {
	double max1, max2, max3;
	char bet1, bet2, bet3;
	double w, t, l;
	scanf("%lf%lf%lf", &w, &t, &l);
	max1 = bigger(bigger(w, t), l);
	if (max1 == w)
		bet1 = 'W';
	else if (max1 == t)
		bet1 = 'T';
	else
		bet1 = 'L';

	scanf("%lf%lf%lf", &w, &t, &l);
	max2 = bigger(bigger(w, t), l);
	if (max2 == w)
		bet2 = 'W';
	else if (max2 == t)
		bet2 = 'T';
	else
		bet2 = 'L';

	scanf("%lf%lf%lf", &w, &t, &l);
	max3 = bigger(bigger(w, t), l);
	if (max3 == w)
		bet3 = 'W';
	else if (max3 == t)
		bet3 = 'T';
	else
		bet3 = 'L';

	printf("%c %c %c %.2lf\n", bet1, bet2, bet3,
			(max1 * max2 * max3 * 0.65 - 1) * 2);

	return 0;
}
