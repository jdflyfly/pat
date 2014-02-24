//#include<stdio.h>
//
//int main() {
//	int num;
//	scanf("%d", &num);
//
//	int tmp;
//	int counter = 3;
//	char result[100];
//	int idx=0;
//	while (num && counter--) {
//		tmp = num % 10;
//		if(counter==2){
//			if(tmp>0){
//				int i;
//				for(i=tmp;i>=1;i--){
//					result[idx++]='0'+i;
//				}
//			}
//		}
//		else if(counter==1){
//			int i;
//			for(i=0;i<tmp;i++)
//				result[idx++]='S';
//
//		}
//		else{
//			int i;
//			for(i=0;i<tmp;i++)
//				result[idx++]='B';
//		}
//
//		num = num / 10;
//	}
//
//	int i;
//	for(i=idx-1;i>=0;i--){
//		printf("%c",result[i]);
//	}
//	printf("\n");
//
//	return 0;
//}
