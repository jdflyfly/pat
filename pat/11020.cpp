#include<cstdio>
#include<queue>

using namespace std;

struct TreeNode{
	int val;
	TreeNode* left;
	TreeNode* right;

	TreeNode(int v):val(v),left(NULL),right(NULL){}

};


int post[35];
int in[35];

TreeNode * build(int post[],int in[],int n){
	if(n<=0)
		return NULL;
	int rootVal = post[n-1];
	int rootIdx = -1;
	for(int i=0;i<n;i++){
		if(in[i]==rootVal){
			rootIdx = i;
			break;
		}
	}

	TreeNode* root = new TreeNode(rootVal);
	root->left = build(post,in,rootIdx);
	root->right=build(post+rootIdx,in+rootIdx+1,n-1-rootIdx);

	return root;
}


int main(){
//	freopen("data.in","r",stdin);
//	freopen("data.out","w",stdout);

	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&post[i]);
	for(int i=0;i<n;i++)
		scanf("%d",&in[i]);

	TreeNode* root = build(post,in,n);
	queue<TreeNode*> queue;
	queue.push(root);
	int count=0;
	while(!queue.empty()){
		TreeNode* out = queue.front();
		queue.pop();
		if(count)
			printf(" ");	
		printf("%d",out->val);

		if(out->left)
			queue.push(out->left);
		if(out->right)
			queue.push(out->right);
		count++;
	}

	return 0;
}
