//#include<stdio.h>
//#include<string.h>
//
//
//
//int calcu(char *str){
//	int max=0;
//	int n=strlen(str);
//	int i;
//	for(i=0;i<n;i++){
//		int count=1;
//		int p=i-1;
//		int q=i+1;
//		while(p>=0&&q<n){
//			if(str[p--]==str[q++])
//				count+=2;
//			else
//				break;
//
//		}
//		if(count>max)
//			max=count;
//
//	}
//
//	for(i=0;i<n;i++){
//		int count=0;
//		int p=i;
//		int q=i+1;
//		while(p>=0&&q<n){
//			if(str[p--]==str[q++])
//				count+=2;
//			else
//				break;
//
//		}
//		if(count>max)
//			max=count;
//
//	}
//
//	return max;
//}
//
//
//int main(){
//	char str[1005];
//	gets(str);
//	int num=0;
//	num=calcu(str);
//	printf("%d\n",num);
//
//	return 0;
//}
