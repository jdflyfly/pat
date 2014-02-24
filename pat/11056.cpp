//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<queue>
//#include<vector>
//
//
//using namespace std;
//
//typedef struct Mouse{
//	int idx;
//	int weight;
//	int order;
//	int outRound;
//	int rank;
//}Mouse;
//
//Mouse mouse[1005];
//
//int cmpOrder(const void*a,const void*b){
//	Mouse*aa=(Mouse*)a;
//	Mouse*bb=(Mouse*)b;
//	return aa->order-bb->order;
//
//}
//
//int cmpIdx(const void*a,const void*b){
//	Mouse*aa=(Mouse*)a;
//	Mouse*bb=(Mouse*)b;
//	return aa->idx-bb->idx;
//
//}
//
//int cmpOutRank(const void*a,const void*b){
//	Mouse*aa=(Mouse*)a;
//	Mouse*bb=(Mouse*)b;
//	return bb->outRound-aa->outRound;
//
//}
//
//void print(int n){
//	int i;
//	for(i=0;i<n;i++){
//		printf("%d %d %d %d %d\n",mouse[i].idx,mouse[i].weight,mouse[i].order,mouse[i].outRound,mouse[i].rank);
//	}
//
//}
//
//int main(){
////	freopen("in.txt","r",stdin);
//	int np,ng;
//	scanf("%d%d",&np,&ng);
//	int i;
//	for(i=0;i<np;i++){
//		mouse[i].idx=i;
//		scanf("%d",&mouse[i].weight);
//	}
//	int tmpIdx;
//	for(i=0;i<np;i++){
//		scanf("%d",&tmpIdx);
//		mouse[tmpIdx].order=i;
//	}
//	qsort(mouse,np,sizeof(Mouse),cmpOrder);
////	print(np);
//
//	queue<Mouse> queue;
//	vector<Mouse> out;
//	vector<Mouse> fight;
//	for(i=0;i<np;i++)
//		queue.push(mouse[i]);
//	int round=1;
//	while(!queue.empty()){
//
//		int end=0;
//		while(!end){
//			for(i=0;i<ng;i++){
//				if(!queue.empty()&&queue.front().outRound<round){
//					fight.push_back(queue.front());
//					queue.pop();
//				}
//			}
//			if(fight.size()==1&&queue.empty()){
//				out.push_back(fight[0]);
//				break;
//			}
//
//			if(fight.size()<ng||queue.empty()||queue.front().outRound==round){
//				end=1;
//			}
//			int maxWei=-1;
//			int maxIdx=-1;
//			for(i=0;i<fight.size();i++){
//				if(fight[i].weight>maxWei){
//					maxWei=fight[i].weight;
//					maxIdx=i;
//				}
//
//			}
//			fight[maxIdx].outRound++;
//			queue.push(fight[maxIdx]);
//
//			for(i=0;i<fight.size();i++){
//				if(i!=maxIdx)
//					out.push_back(fight[i]);
//			}
//			fight.clear();
//
//		}
//
//		round++;
//	}
//
//	for(i=0;i<np;i++){
//		memcpy(&mouse[i],&out[i],sizeof(Mouse));
//	}
//
//
//	qsort(mouse,np,sizeof(Mouse),cmpOutRank);
//
//
//	mouse[0].rank=1;
//	for(i=1;i<np;i++){
//		if(mouse[i].outRound==mouse[i-1].outRound)
//			mouse[i].rank=mouse[i-1].rank;
//		else
//			mouse[i].rank=i+1;
//
//	}
//	qsort(mouse,np,sizeof(Mouse),cmpIdx);
//
////	print(np);
//
//	for(i=0;i<np;i++){
//		printf("%d",mouse[i].rank);
//		if(i!=np-1)
//			printf(" ");
//	}
//	printf("\n");
//
//	return 0;
//}
