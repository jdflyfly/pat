//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//
//typedef struct stu {
//	int no;
//	int d;
//	int c;
//
//} stu;
//
//int cmp(const void*a, const void*b) {
//	stu* x = (stu*) a;
//	stu* y = (stu*) b;
//
//	if (x->d + x->c == y->d + y->c && x->d == y->d)
//		return x->no - y->no;
//	else if (x->d + x->c == y->d + y->c)
//		return y->d - x->d;
//	else
//		return (y->d + y->c) - (x->d + x->c);
//
//}
//
//void print(stu* p, int n) {
//	int i;
//	for (i = 0; i < n; i++) {
//		printf("%08d %d %d\n", p[i].no, p[i].d, p[i].c);
//	}
//}
//
//stu one[100000], two[100000], three[100000], four[100000];
//int main() {
//	freopen("in.txt", "r", stdin);
//	int n, low, high;
//	scanf("%d%d%d", &n, &low, &high);
//	int countAll = 0, count1 = 0, count2 = 0, count3 = 0, count4 = 0;
//
//	int tmpNo, tmpD, tmpC;
//	stu tmpStu;
//	int i;
//
//	for (i = 0; i < n; i++) {
//		scanf("%d%d%d", &tmpNo, &tmpD, &tmpC);
//		tmpStu.no = tmpNo;
//		tmpStu.d = tmpD;
//		tmpStu.c = tmpC;
//
//		if (tmpD < low || tmpC < low)
//			continue;
//		else if (tmpD >= high && tmpC >= high) {
//			memcpy(&one[count1++], &tmpStu, sizeof(stu));
//			countAll++;
//		} else if (tmpD >= high && tmpC < high) {
//			memcpy(&two[count2++], &tmpStu, sizeof(stu));
//			countAll++;
//		} else if (tmpD < high && tmpC < high && tmpD >= tmpC) {
//			memcpy(&three[count3++], &tmpStu, sizeof(stu));
//			countAll++;
//		} else {
//			memcpy(&four[count4++], &tmpStu, sizeof(stu));
//			countAll++;
//		}
//
//	}
//
//	qsort(one, count1, sizeof(stu), cmp);
//	qsort(two, count2, sizeof(stu), cmp);
//	qsort(three, count3, sizeof(stu), cmp);
//	qsort(four, count4, sizeof(stu), cmp);
//
//	printf("%d\n", countAll);
//	print(&one[0], count1);
//	print(&two[0], count2);
//	print(&three[0], count3);
//	print(&four[0], count4);
//
//	return 0;
//}
