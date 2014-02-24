//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//typedef struct Node {
//	int value;
//	struct Node* left;
//	struct Node* right;
//
//} Node;
//
//Node* insert(Node* tree, int v) {
//	if (tree != NULL) {
//		if (v < tree->value)
//			tree->left = insert(tree->left, v);
//		else if (v > tree->value)
//			tree->right = insert(tree->right, v);
//		else
//			;
//	} else {
//		tree = (Node*) malloc(sizeof(Node));
//		tree->value = v;
//		tree->left = tree->right = NULL;
//	}
//	return tree;
//}
//
//int main() {
//	int n;
//	freopen("in.txt", "r", stdin);
//	Node* root = NULL;
//	scanf("%d", &n);
//	int i;
//	int v;
//	for (i = 0; i < n; i++) {
//		scanf("%d", &v);
//		root = insert(root, v);
//	}
//
//	Node queue[10000];
//	int front = 0, rear = 0;
//
//	queue[rear].value = root->value;
//	queue[rear].left = root->left;
//	queue[rear].right = root->right;
//	rear++;
//
//	while (front < rear) {
//		Node* cur = &queue[front++];
//		printf("%d ", cur->value);
//		if (cur->left) {
//			queue[rear].value = cur->left->value;
//			queue[rear].left = cur->left->left;
//			queue[rear].right = cur->left->right;
//			rear++;
//		}
//		if (cur->right) {
//			queue[rear].value = cur->right->value;
//			queue[rear].left = cur->right->left;
//			queue[rear].right = cur->right->right;
//			rear++;
//		}
//
//	}
//
//	return 0;
//}
