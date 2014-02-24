#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int rate[24];
int n;

typedef struct Record {
	char name[25];
	int month;
	int day;
	int hour;
	int min;
	char type[10];
	int total;
} Record;

Record record[1005];

int cmp(const void*a, const void*b) {
	Record* aa = (Record*) a;
	Record* bb = (Record*) b;
	int res = strcmp(aa->name, bb->name);
	if (res < 0)
		return -1;
	else if (res > 0)
		return 1;
	else
		return aa->total - bb->total;

}
void print() {
	int i;
	for (i = 0; i < n; i++)
		printf("%s %d:%d:%d:%d\t%d\t%s\n", record[i].name, record[i].month,
				record[i].day, record[i].hour, record[i].min, record[i].total,
				record[i].type);
	printf("\n");
}

double calcu(Record a, Record b) {
	double cost = 0;
	int totalDiff = b.total - a.total;
	int i = 0;
	int start = a.hour * 60 + a.min;
	int end = start + totalDiff;
	while (i < start)
		i += 60;
	if (i >= end) {
		cost += (end - start) * rate[(i / 60) % 24 - 1];
	} else {
		cost += (i - start) * rate[(i / 60) % 24 - 1];
		while (i + 60 <= end) {
			cost += 60 * rate[(i / 60) % 24];
			i += 60;
		}

		cost += (end - i) * rate[(i / 60) % 24];

	}
	cost = cost / 100;

	printf("%02d:%02d:%02d %02d:%02d:%02d %d $%.2lf\n", a.day, a.hour, a.min,
			b.day, b.hour, b.min, totalDiff, cost);
	return cost;
}

int getEnd(int idx) {
	int i;
	for (i = idx; i < n; i++) {
		if (strcmp(record[idx].name, record[i].name) != 0)
			return i;
	}
	return n;
}

int main() {
	freopen("in.txt", "r", stdin);
	int i;
	for (i = 0; i < 24; i++)
		scanf("%d", &rate[i]);
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%s%d:%d:%d:%d%s", &record[i].name, &record[i].month,
				&record[i].day, &record[i].hour, &record[i].min,
				&record[i].type);
		record[i].total = record[i].min + record[i].hour * 60
				+ record[i].day * 24 * 60;
	}
	qsort(record, n, sizeof(Record), cmp);

//	print();
	int start = 0;
	int end = 0;
	while (start != n) {
		end = getEnd(start);

		int waitForOn = 1;
		double totalCost = 0;
		Record cur;
		int hasOutputName = 0;
		for (i = start; i < end; i++) {

			if (record[i].type[1] == 'f') {
				if (waitForOn)
					continue;
				else {
					if (!hasOutputName) {
						printf("%s %02d\n", cur.name, cur.month);
						hasOutputName = 1;
					}
					totalCost += calcu(cur, record[i]);
					waitForOn = 1;
				}
			} else {
				if (waitForOn) {
					memcpy(&cur, &record[i], sizeof(Record));
					waitForOn = 0;
				} else {
					memcpy(&cur, &record[i], sizeof(Record));
				}
			}

		}
		if (hasOutputName)
			printf("Total amount: $%.2lf\n", totalCost);

		start = end;
	}
	return 0;
}
