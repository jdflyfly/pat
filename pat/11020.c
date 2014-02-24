#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Node{
	int val;
	struct Node* left;
	struct Node* right;
}Node;

int post[35];
int in[35];
int n;

Node* root;


int* findRoot(int num){
	int i;
	for(i=0;i<n;i++)
	{
		if(in[i]==num)
			return &in[i];
	}
	return NULL;

}


Node* build(int n,int *post,int *in){
	if(n<=0)
		return NULL;
	Node* root=(Node*)malloc(sizeof(Node));
	root->val=post[n-1];
	int p=findRoot(post[n-1])-in;
	root->left=build(p,post,in);
	root->right=build(n-1-p,post+p,in+p+1);
	return root;
}


int main(){
//	freopen("in.txt","r",stdin);

	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++)
		scanf("%d",&post[i]);
	for(i=0;i<n;i++)
		scanf("%d",&in[i]);
	root=build(n,post,in);

	Node queue[1000];
	int front=0;
	int rear=0;
	memcpy(&queue[rear++],root,sizeof(Node));
	Node* cur;
	int count=n;
	while(front<rear){
		cur=&queue[front++];
		printf("%d",cur->val);
		if(--count)
			printf(" ");
		if(cur->left)
			memcpy(&queue[rear++],cur->left,sizeof(Node));
		if(cur->right)
			memcpy(&queue[rear++],cur->right,sizeof(Node));

	}

	printf("\n");

	return 0;
}
