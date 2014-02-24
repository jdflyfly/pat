#include<stdio.h>
#include<stdlib.h>

typedef struct Grade {
	int id;
	int c;
	int m;
	int e;
	int a;
	int cRank;
	int mRank;
	int eRank;
	int aRank;
	int bestRank;
	char bestCourse;

} Grade;

Grade grades[2005];
int n, m;

int cmpA(const void*a, const void*b) {
	return ((Grade*) b)->a - ((Grade*) a)->a;
}

int cmpC(const void*a, const void*b) {
	return ((Grade*) b)->c - ((Grade*) a)->c;
}

int cmpM(const void*a, const void*b) {
	return ((Grade*) b)->m - ((Grade*) a)->m;
}

int cmpE(const void*a, const void*b) {
	return ((Grade*) b)->e - ((Grade*) a)->e;
}

void print() {
	int i;
	for (i = 0; i < n; i++) {
		printf("%d %d:%d %d:%d %d:%d %d:%d   %d-%c\n", grades[i].id,
				grades[i].a, grades[i].aRank, grades[i].c, grades[i].cRank,
				grades[i].m, grades[i].mRank, grades[i].e, grades[i].eRank,
				grades[i].bestRank, grades[i].bestCourse);
	}
}

void rank(char type) {
	int i;
	if (type == 'a') {
		grades[0].aRank = 1;
		for (i = 1; i < n; i++) {
			if (grades[i].a == grades[i - 1].a)
				grades[i].aRank = grades[i - 1].aRank;
			else
				grades[i].aRank = i + 1;
		}

	} else if (type == 'c') {
		grades[0].cRank = 1;
		for (i = 1; i < n; i++) {
			if (grades[i].c == grades[i - 1].c)
				grades[i].cRank = grades[i - 1].cRank;
			else
				grades[i].cRank = i + 1;
		}

	} else if (type == 'm') {
		grades[0].mRank = 1;
		for (i = 1; i < n; i++) {
			if (grades[i].m == grades[i - 1].m)
				grades[i].mRank = grades[i - 1].mRank;
			else
				grades[i].mRank = i + 1;
		}

	} else {
		grades[0].eRank = 1;
		for (i = 1; i < n; i++) {
			if (grades[i].e == grades[i - 1].e)
				grades[i].eRank = grades[i - 1].eRank;
			else
				grades[i].eRank = i + 1;
		}

	}

}

void chooseBestRank() {
	int i;
	int minRank;
	for (i = 0; i < n; i++) {
		minRank = 10000;

		if (grades[i].aRank < minRank)
			minRank = grades[i].aRank;
		if (grades[i].cRank < minRank)
			minRank = grades[i].cRank;
		if (grades[i].mRank < minRank)
			minRank = grades[i].mRank;
		if (grades[i].eRank < minRank)
			minRank = grades[i].eRank;
		grades[i].bestRank = minRank;

		if (grades[i].eRank == minRank)
			grades[i].bestCourse = 'E';
		if (grades[i].mRank == minRank)
			grades[i].bestCourse = 'M';
		if (grades[i].cRank == minRank)
			grades[i].bestCourse = 'C';
		if (grades[i].aRank == minRank)
			grades[i].bestCourse = 'A';

	}

}

int main() {
//	freopen("in.txt", "r", stdin);
	scanf("%d%d", &n, &m);
	int i;
	for (i = 0; i < n; i++) {
		scanf("%d%d%d%d", &grades[i].id, &grades[i].c, &grades[i].m,
				&grades[i].e);
		grades[i].a = (grades[i].c + grades[i].m + grades[i].e) / 3;
	}
	qsort(grades, n, sizeof(Grade), cmpA);
	rank('a');
	qsort(grades, n, sizeof(Grade), cmpC);
	rank('c');
	qsort(grades, n, sizeof(Grade), cmpM);
	rank('m');
	qsort(grades, n, sizeof(Grade), cmpE);
	rank('e');

	chooseBestRank();

	int thisId;
	for (i = 0; i < m; i++) {
		scanf("%d", &thisId);
		int j;
		int found = 0;
		for (j = 0; j < n; j++) {
			if (grades[j].id == thisId) {
				printf("%d %c\n", grades[j].bestRank, grades[j].bestCourse);
				found = 1;
				break;
			}

		}
		if (!found) {
			printf("N/A\n");
		}

	}

//	print();

	return 0;
}
