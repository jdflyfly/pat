//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//int isPalin(char* str){
//	int len=strlen(str);
//	int i;
//	for(i=0;i<=len/2;i++){
//		if(str[i]!=str[len-1-i])
//			return 0;
//	}
//	return 1;
//}
//
//void reverseAndAdd(char* str){
//	char rev[1000];
//	int len=strlen(str);
//	int i;
//	for(i=0;i<len;i++){
//		rev[i]=str[len-1-i];
//	}
//	char revRes[1000];
//	int c=0;
//	int j;
//	for(i=len-1,j=0;i>=0;i--,j++){
//		int tmp=str[i]-'0'+rev[i]-'0'+c;
//		if(tmp>=10)
//		{
//			revRes[j]=tmp-10+'0';
//			c=1;
//		}
//		else
//		{
//			revRes[j]=tmp+'0';
//			c=0;
//		}
//	}
//	if(c==1){
//		revRes[j++]='1';
//	}
//
//	for(i=0;i<j;i++)
//		str[i]=revRes[j-1-i];
//	str[i]=0;
//	return;
//
//}
//
//int main(){
//	int k;
//	char str[1000];
//	scanf("%s%d",str,&k);
//	int count=0;
//
//	while(!isPalin(str)){
//		reverseAndAdd(str);
//		count++;
//		if(count>=k)
//			break;
//	}
//	printf("%s\n%d\n",str,count);
//
//	return 0;
//}
