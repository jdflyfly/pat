//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//
//typedef struct Info{
//	char name[15];
//	char gender[5];
//	char id[15];
//	int score;
//}Info;
//
//int lowestBoyScore=101;
//int highestGirlScore=-1;
//int boyCount=0;
//int girlCount=0;
//
//Info boy,girl;
//
//int main(){
//	int n;
//	scanf("%d",&n);
//	int i;
//	Info tmp;
//	for(i=0;i<n;i++){
//		scanf("%s%s%s%d",tmp.name,tmp.gender,tmp.id,&tmp.score);
//		if(tmp.gender[0]=='F'){
//			girlCount++;
//			if(tmp.score>highestGirlScore){
//				memcpy(&girl,&tmp,sizeof(Info));
//				highestGirlScore=tmp.score;
//			}
//		}
//		else{
//			boyCount++;
//			if(tmp.score<lowestBoyScore){
//				memcpy(&boy,&tmp,sizeof(Info));
//				lowestBoyScore=tmp.score;
//			}
//
//		}
//
//	}
//	if(girlCount)
//		printf("%s %s\n",girl.name,girl.id);
//	else
//		printf("Absent\n");
//
//	if(boyCount)
//		printf("%s %s\n",boy.name,boy.id);
//	else
//		printf("Absent\n");
//
//	if(girlCount&&boyCount)
//		printf("%d\n",girl.score-boy.score);
//	else
//		printf("NA\n");
//
//	return 0;
//}
