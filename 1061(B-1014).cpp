//#include <stdio.h>
//
//int main(){
//	char s[4][60];
//	int i,j;
//	char temp;
//	int pivot;
//
//	for(i=0;i<4;i++){
//		for(j=0;;j++){
//			temp=getchar();
//			if(temp!='\n')s[i][j]=temp;
//			else break;
//		}
//	}
//
//	for(i=0;i<60;i++){
//		if(s[0][i]==s[1][i]&&s[0][i]=='A'){
//			printf("MON ");
//			pivot=i;
//			break;
//		}
//		if(s[0][i]==s[1][i]&&s[0][i]=='B'){
//			printf("TUE ");
//			pivot=i;
//			break;
//		}
//		if(s[0][i]==s[1][i]&&s[0][i]=='C'){
//			printf("WED ");
//			pivot=i;
//			break;
//		}
//		if(s[0][i]==s[1][i]&&s[0][i]=='D'){
//			printf("THU ");
//			pivot=i;
//			break;
//		}
//		if(s[0][i]==s[1][i]&&s[0][i]=='E'){
//			printf("FRI ");
//			pivot=i;
//			break;
//		}
//		if(s[0][i]==s[1][i]&&s[0][i]=='F'){
//			printf("SAT ");
//			pivot=i;
//			break;
//		}
//		if(s[0][i]==s[1][i]&&s[0][i]=='G'){
//			printf("SUN ");
//			pivot=i;
//			break;
//		}
//	}
//
//	for(i=pivot+1;i<60;i++){
//		if(s[0][i]==s[1][i]&&s[0][i]>47&&s[0][i]<58){
//			printf("%02d:",s[0][i]-48);
//			break;
//		}
//		if(s[0][i]==s[1][i]&&s[0][i]>64&&s[0][i]<79){
//			printf("%02d:",s[0][i]-55);
//			break;
//		}
//	}
//
//	for(i=0;i<60;i++){
//		if(s[2][i]==s[3][i]){
//			if(s[2][i]>64&&s[2][i]<91){
//				printf("%02d\n",i);
//				break;
//			}
//			if(s[2][i]>96&&s[2][i]<123){
//				printf("%02d\n",i);
//				break;
//			}
//		}
//	}
//
//	return 0;
//}