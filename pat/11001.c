#include<stdio.h>

int main() {
	int a, b, c;
	scanf("%d%d", &a, &b);
	c = a + b;
	if (c == 0) {
		printf("0\n");
		return 0;
	}
	int flag = 0;
	if (c < 0) {
		flag = 1;
		c = -c;
	}
	char result[20];
	int idx = 0;
	int tmp;
	int count = 0;
	while (c) {
		tmp = c % 10;
		if (count && count % 3 == 0)
			result[idx++] = ',';

		result[idx++] = '0' + tmp;
		c = c / 10;
		count++;
	}
	if (flag)
		printf("%c", '-');
	int i;
	for (i = idx - 1; i >= 0; i--)
		printf("%c", result[i]);
	printf("\n");

	return 0;
}
