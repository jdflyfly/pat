//#include<stdio.h>
//#include<string.h>
//
//typedef struct Info{
//	char name[15];
//	char pwd[15];
//	int changed;
//}Info;
//
//Info infos[1000];
//
//int main(){
//	int n;
//	scanf("%d",&n);
//	int i;
//	int changeCount=0;
//	for(i=0;i<n;i++){
//		scanf("%s%s",infos[i].name,infos[i].pwd);
//		infos[i].changed=0;
//		int len=strlen(infos[i].pwd);
//		int j;
//		for(j=0;j<len;j++){
//			if(infos[i].pwd[j]=='1'){
//				infos[i].pwd[j]='@';
//				infos[i].changed=1;
//			}
//
//			if(infos[i].pwd[j]=='0'){
//				infos[i].pwd[j]='%';
//				infos[i].changed=1;
//			}
//
//			if(infos[i].pwd[j]=='l'){
//				infos[i].pwd[j]='L';
//				infos[i].changed=1;
//			}
//
//			if(infos[i].pwd[j]=='O'){
//				infos[i].pwd[j]='o';
//				infos[i].changed=1;
//			}
//
//		}
//		if(infos[i].changed)
//			changeCount++;
//
//	}
//	if(changeCount>0){
//		printf("%d\n",changeCount);
//		for(i=0;i<n;i++)
//			if(infos[i].changed==1)
//				printf("%s %s\n",infos[i].name,infos[i].pwd);
//
//	}
//	else{
//		if(n==1)
//			printf("There is 1 account and no account is modified\n");
//		else
//			printf("There are %d accounts and no account is modified\n",n);
//
//	}
//
//	return 0;
//}
