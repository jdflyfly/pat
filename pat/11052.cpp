//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//typedef struct Node {
//	int idx;
//	int key;
//	int next;
//} Node;
//
//Node node[100005];
//Node arr[100005];
//int idx;
//
//int cmp(const void*a, const void*b) {
//	Node*aa = (Node*) a;
//	Node*bb = (Node*) b;
//	return aa->key - bb->key;
//
//}
//
//int main() {
////	freopen("in.txt", "r", stdin);
//	int n, head;
//	scanf("%d%d", &n, &head);
//	int a, key, b;
//	int count = n;
//	while (count--) {
//		scanf("%d%d%d", &a, &key, &b);
//		node[a].idx = a;
//		node[a].key = key;
//		node[a].next = b;
//	}
//	int p = head;
//	while (p != -1) {
//		if(node[p].next==0){
//			printf("0 %05d\n",head);
//			return 0;
//		}
//		memcpy(arr + idx, &node[p], sizeof(Node));
//		idx++;
//		p = node[p].next;
//	}
//
//	if (idx == 0) {
//		printf("%d -1\n", idx);
//		return 0;
//	}
//
//	qsort(arr, idx, sizeof(Node), cmp);
//
//	int i;
//	for (i = 0; i < idx - 1; i++) {
//		arr[i].next = arr[i + 1].idx;
//	}
//	arr[idx - 1].next = -1;
//
//	printf("%d %05d\n", idx, arr[0].idx);
//
//	for (i = 0; i < idx; i++) {
//		if (arr[i].next > 0)
//			printf("%05d %d %05d\n", arr[i].idx, arr[i].key, arr[i].next);
//		else
//			printf("%05d %d %d\n", arr[i].idx, arr[i].key, arr[i].next);
//
//	}
//
//	return 0;
//}
