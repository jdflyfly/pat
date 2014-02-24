//#include<stdio.h>
//#include<stdlib.h>
//
//int nc,np;
//int coupon[100005];
//int prod[100005];
//
//int cmp(const void*a,const void*b){
//	return *(int*)b-*(int*)a;
//}
//
//int main(){
////	freopen("in.txt","r",stdin);
//	scanf("%d",&nc);
//	int i;
//	for(i=0;i<nc;i++)
//		scanf("%d",&coupon[i]);
//
//	scanf("%d",&np);
//	for(i=0;i<np;i++)
//		scanf("%d",&prod[i]);
//	qsort(coupon,nc,sizeof(int),cmp);
//	qsort(prod,np,sizeof(int),cmp);
//
//
//	int sum=0;
//
//	int j;
//	for(i=0,j=0;i<nc && j<np;i++,j++)
//    {
//        if(coupon[i]>0 && prod[j]>0)
//            sum+=coupon[i]*prod[j];
//    }
//
//    for(i=nc-1,j=np-1;i>=0 && j>=0; i--,j--)
//    {
//        if(coupon[i]<0 && prod[j]<0)
//            sum+=coupon[i]*prod[j];
//    }
//
//
//	printf("%d\n",sum);
//
//	return 0;
//}
