//#include<stdio.h>
//
//int n, m, l;
//int order[205];
//int seq[10005];
//int length[10005];
//int idx;
//
//int getMaxPreLength(int i) {
//	int maxLen = 0;
//	int j;
//	for (j = 0; j < i; j++) {
//		if (order[seq[j]] <= order[seq[i]] && length[j] > maxLen) {
//			maxLen = length[j];
//		}
//
//	}
//
//	return maxLen;
//}
//
//int main() {
////	freopen("in.txt", "r", stdin);
//	scanf("%d%d", &n, &m);
//	int i;
//	for (i = 0; i < m; i++) {
//		int tmp;
//		scanf("%d", &tmp);
//		order[tmp] = i + 1;
//	}
//	scanf("%d", &l);
//	for (i = 0; i < l; i++) {
//		int tmp;
//		scanf("%d", &tmp);
//		if (order[tmp])
//			seq[idx++] = tmp;
//	}
//
//	for (i = 0; i < idx; i++) {
//		length[i] = 1;
//		int preLength = getMaxPreLength(i);
//		length[i] = preLength + 1;
//	}
//	int maxLen = -1;
//	for (i = 0; i < idx; i++) {
//		if (length[i] > maxLen)
//			maxLen = length[i];
//	}
//	printf("%d\n", maxLen);
//
//	return 0;
//}
