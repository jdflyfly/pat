/**
链接：http://pat.zju.edu.cn/contests/pat-a-practise/1008
 
题意：给出楼层序列计算电梯运行时间。
 
分析：简单模拟题。
*/

#include<stdio.h>

int main() {
	int n;
	int count = 0;
	int cur = 0;
	int tmp;
	scanf("%d", &n);
	while (n--) {
		scanf("%d", &tmp);
		if (tmp > cur) {
			count += (tmp - cur) * 6 + 5;
		} else if (tmp < cur) {
			count += (cur - tmp) * 4 + 5;
		} else
			count += 5;

		cur = tmp;
	}
	printf("%d\n", count);

	return 0;
}
