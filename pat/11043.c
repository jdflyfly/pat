//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//
//int pre[1005];
//int in[1005];
//int post[1005];
//int n;
//
//int cmp(const void* a,const void* b){
//	return *(int*)a-*(int *)b;
//}
//
//int *findInorder(int target){
//	int i;
//	for(i=0;i<n;i++)
//
//}
//
//
//void build(int n,int* pre,int* in){
//	if(n<=0)
//		return;
//	int root=pre[0];
//	int p=findInorder(root)-in;
//
//}
//
//
//void print(int* arr,int n){
//	int i;
//	for(i=0;i<n;i++){
//		printf("%d",arr[i]);
//		if(i!=n-1)
//			printf(" ");
//	}
//	printf("\n");
//}
//
//int main(){
//
//	scanf("%d",&n);
//	int i;
//	for(i=0;i<n;i++)
//		scanf("%d",&pre[i]);
//	memcpy(in,pre,sizeof(pre));
//	qsort(in,n,sizeof(int),cmp);
//
//	print(pre,n);
//	print(in,n);
//
//	build(n,pre,in);
//
//	return 0;
//}
