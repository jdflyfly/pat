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
