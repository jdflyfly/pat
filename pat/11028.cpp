//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//typedef struct Stu {
//	char id[10];
//	char name[10];
//	int grade;
//} Stu;
//
//int cmp1(const void*a, const void*b) {
//	Stu* x = (Stu*) a;
//	Stu* y = (Stu*) b;
//	return strcmp(x->id, y->id);
//
//}
//
//int cmp2(const void*a, const void*b) {
//	Stu* x = (Stu*) a;
//	Stu* y = (Stu*) b;
//	if (strcmp(x->name, y->name) == 0)
//		return strcmp(x->id, y->id);
//	else
//		return strcmp(x->name, y->name);
//}
//
//int cmp3(const void*a, const void*b) {
//	Stu* x = (Stu*) a;
//	Stu* y = (Stu*) b;
//	if (x->grade == y->grade)
//		return strcmp(x->id, y->id);
//	else
//		return x->grade - y->grade;
//}
//
//Stu stu[100005];
//
//int main() {
//	freopen("in.txt", "r", stdin);
//	int n, c;
//	scanf("%d%d", &n, &c);
//	int i;
//	for (i = 0; i < n; i++)
//		scanf("%s%s%d", stu[i].id, stu[i].name, &stu[i].grade);
//	switch (c) {
//	case 1:
//		qsort(stu, n, sizeof(Stu), cmp1);
//		break;
//	case 2:
//		qsort(stu, n, sizeof(Stu), cmp2);
//		break;
//	case 3:
//		qsort(stu, n, sizeof(Stu), cmp3);
//		break;
//	default:
//		break;
//	}
//
//	for (i = 0; i < n; i++)
//		printf("%s %s %d\n", stu[i].id, stu[i].name, stu[i].grade);
//
//	return 0;
//}
