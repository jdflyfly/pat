#include<stdio.h>

int seq[10005];

int main() {
//	freopen("in.txt", "r", stdin);
	int n;
	scanf("%d", &n);
	int i;
	for (i = 0; i < n; i++)
		scanf("%d", &seq[i]);

	int maxSum = -1;
	int left, right;
	int thisSum = 0;
	int start = 0;
	int allNeg = 1;
	for (i = 0; i < n; i++) {
		if (seq[i] >= 0)
			allNeg = 0;

		thisSum += seq[i];
		if (thisSum < 0) {
			thisSum = 0;
			start = i + 1;
		} else if (thisSum > maxSum) {
			maxSum = thisSum;
			left = seq[start];
			right = seq[i];
		}

	}
	if (allNeg)
		printf("%d %d %d\n", 0, seq[0], seq[n - 1]);
	else
		printf("%d %d %d\n", maxSum, left, right);

	return 0;
}
