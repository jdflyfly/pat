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
