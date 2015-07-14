//#include <stdio.h>
//
//int main(){
//	int n;
//	scanf("%d",&n);
//	int i,j,x,y;
//	int max=-1;
//	int min=1000;
//	int grade;
//	char name[11];
//	char rename1[11];
//	char rename2[11];
//	char cla[11];
//	char recla1[11];
//	char recla2[11];
//	for(i=1;i<=n;i++){
//		x=0;
//		y=0;
//		getchar();
//		for(j=0;j<11;j++){
//			name[j]=getchar();
//			//scanf("%c",&name[j]);
//			x++;
//			if(name[j]==' ')break;
//		}
//		for(j=0;j<11;j++){
//			cla[j]=getchar();
//			//scanf("%c",&cla[j]);
//			y++;
//			if(cla[j]==' ')break;
//		}
//		scanf("%d",&grade);
//		if(grade>max){
//			max=grade;
//			for(j=0;j<x;j++){
//				rename1[j]=name[j];
//			}
//			for(j=0;j<y;j++){
//				recla1[j]=cla[j];
//			}
//		}
//		if(grade<min){
//			min=grade;
//			for(j=0;j<x;j++){
//				rename2[j]=name[j];
//			}
//			for(j=0;j<y;j++){
//				recla2[j]=cla[j];
//			}
//		}
//
//	}
//
//	for(i=0;;i++){
//		if(rename1[i]!=' ')printf("%c",rename1[i]);
//		else{
//			printf(" ");
//			break;
//		}
//	}
//	for(i=0;;i++){
//		if(recla1[i]!=' ')printf("%c",recla1[i]);
//		else{
//			printf("\n");
//			break;
//		}
//	}
//	for(i=0;;i++){
//		if(rename2[i]!=' ')printf("%c",rename2[i]);
//		else{
//			printf(" ");
//			break;
//		}
//	}
//	for(i=0;;i++){
//		if(recla2[i]!=' ')printf("%c",recla2[i]);
//		else{
//			printf("\n");
//			break;
//		}
//	}
//
//	scanf("%d",&i);
//	return 0;
//}