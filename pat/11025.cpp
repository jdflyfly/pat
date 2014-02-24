//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//typedef struct Stu {
//	char id[15];
//	int score;
//	int loc;
//	int localRank;
//	int globalRank;
//
//} Stu;
//
//int n;
//int loc[105];
//int idx;
//
//Stu stu[100 * 300 + 5];
//
////int cmp(const void*a, const void*b) {
////	Stu *aa = (Stu*) a;
////	Stu *bb = (Stu*) b;
////	int diff = aa->score - bb->score;
////	if (diff < 0)
////		return 1;
////	else if (diff > 0)
////		return -1;
////	else {
////		int locDiff = aa->loc - bb->loc;
////		if (locDiff > 0)
////			return 1;
////		else if (locDiff < 0)
////			return -1;
////		else
////			return strcmp(aa->id, bb->id);
////
////	}
////}
//
//
//int cmp(const void *a, const void *b)
//{
//	Stu *ta = (Stu *)a;
//	Stu *tb = (Stu *)b;
//	if (tb->score == ta->score) return strcmp(ta->id, tb->id);
//	else return tb->score - ta->score;
//}
//
//int main() {
//	freopen("in.txt", "r", stdin);
//	scanf("%d", &n);
//	int i;
//	int sum = 0;
//	for (i = 0; i < n; i++) {
//		scanf("%d", &loc[i]);
//		int j;
//		for (j = 0; j < loc[i]; j++) {
//			scanf("%s%d", stu[idx].id, &stu[idx].score);
//			stu[idx].loc = i + 1;
//			idx++;
//		}
//		qsort(stu + sum, loc[i], sizeof(Stu), cmp);
//		stu[sum].localRank = 1;
//		for (j = 1; j < loc[i]; j++) {
//			if (stu[sum + j].score == stu[sum + j - 1].score)
//				stu[sum + j].localRank = stu[sum + j - 1].localRank;
//			else
//				stu[sum + j].localRank = j + 1;
//		}
//
//		sum += loc[i];
//	}
//
//	qsort(stu, idx, sizeof(Stu), cmp);
//
//	stu[0].globalRank = 1;
//	for (i = 1; i < idx; i++) {
//		if (stu[i].score == stu[i - 1].score)
//			stu[i].globalRank = stu[i - 1].globalRank;
//		else
//			stu[i].globalRank = i + 1;
//	}
//
//	printf("%d\n", idx);
//	for (i = 0; i < idx; i++)
//		printf("%s %d %d %d\n", stu[i].id, stu[i].globalRank, stu[i].loc,
//				stu[i].localRank);
//
//	return 0;
//}
