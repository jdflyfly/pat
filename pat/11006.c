/**
链接：http://pat.zju.edu.cn/contests/pat-a-practise/1006
 
题意：分析每个人到达和离开实验室的时间，找到最早来和最晚走的人。
 
分析：简单的一次遍历寻找最大最小值，我直接利用字符串比较时间的大小，也可以读入int 转化成分钟处理。
*/

#include<stdio.h>
#include<string.h>

char firstPer[20];
char lastPer[20];
char firstTime[20] = "23:59:59";
char lastTime[20] = "00:00:00";

int main() {
	int n;
	scanf("%d", &n);
	char id[20], in[20], out[20];
	while (n--) {
		scanf("%s%s%s", id, in, out);
		if (strcmp(in, firstTime) < 0) {
			strcpy(firstPer, id);
			strcpy(firstTime, in);
		}
		if (strcmp(out, lastTime) > 0) {
			strcpy(lastPer, id);
			strcpy(lastTime, out);
		}

	}
	printf("%s %s\n", firstPer, lastPer);

	return 0;
}
