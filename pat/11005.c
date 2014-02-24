#include<stdio.h>

int arr[20];
int idx = 0;

char str[10][10] = { "zero", "one", "two", "three", "four", "five", "six",
		"seven", "eight", "nine" };

int main() {
	char ch;
	int sum = 0;
	while (1) {
		scanf("%c", &ch);
		if (ch >= '0' && ch <= '9') {
			sum += ch - '0';
		} else if (ch == '\n')
			break;
		else
			;
	}

	if (sum == 0) {
		printf("zero\n");
		return 0;
	}

	while (sum) {
		arr[idx++] = sum % 10;
		sum = sum / 10;
	}

	int i;
	for (i = idx - 1; i >= 0; i--) {
		printf("%s", str[arr[i]]);
		if (i)
			printf(" ");
	}
	printf("\n");

	return 0;
}
