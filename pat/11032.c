//#include<stdio.h>
//
//int list[100005];
//int visited[100005];
//
//int main() {
////	freopen("in.txt", "r", stdin);
//	int start1, start2, n;
//	scanf("%d%d%d", &start1, &start2, &n);
//	int a, b;
//	char ch[5];
//	while (n--) {
//		scanf("%d%s%d", &a, ch, &b);
//		list[a] = b;
//	}
//	int p = start1;
//	while (p != -1) {
//		visited[p] = 1;
//		p = list[p];
//	}
//
//	int overlap = 0;
//	p = start2;
//	while (p != -1) {
//		if (visited[p]) {
//			overlap = 1;
//			break;
//		}
//		p=list[p];
//
//	}
//	if (overlap) {
//		printf("%05d\n", p);
//	} else
//		printf("-1\n");
//
//	return 0;
//}
