//#include <stdio.h>
//
//int main(){
//	int n;
//	scanf("%d",&n);
//	int i,j,x,y;
//	int max[3]={0,0,0};
//	int min[3]={24,00,00};
//
//	char name[16];
//	char rename1[16];
//	char rename2[16];
//	int time[3];
//
//	for(i=1;i<=n;i++){
//		x=0;
//		y=0;
//		getchar();
//		for(j=0;j<16;j++){
//			name[j]=getchar();
//			x++;
//			if(name[j]==' ')break;
//		}
//		scanf("%d",&time[0]);
//		getchar();
//		scanf("%d",&time[1]);
//		getchar();
//		scanf("%d",&time[2]);
//		getchar();
//
//		if(time[0]<min[0]||(time[0]==min[0]&&time[1]<min[1])||(time[0]==min[0]&&time[1]==min[1]&&time[2]<=min[2])){
//			for(j=0;j<3;j++){
//				min[j]=time[j];
//			}
//			for(j=0;j<16;j++){
//				rename1[j]=name[j];
//				if(name[j]==' ')break;
//			}
//		}
//
//		scanf("%d",&time[0]);
//		getchar();
//		scanf("%d",&time[1]);
//		getchar();
//		scanf("%d",&time[2]);
//
//		if(time[0]>max[0]||(time[0]==max[0]&&time[1]>max[1])||(time[0]==max[0]&&time[1]==max[1]&&time[2]>=max[2])){
//			for(j=0;j<3;j++){
//				max[j]=time[j];
//			}
//			for(j=0;j<16;j++){
//				rename2[j]=name[j];
//				if(name[j]==' ')break;
//			}
//		}
//	}
//
//	for(i=0;;i++){
//		if(rename1[i]!=' ')printf("%c",rename1[i]);
//		else{
//			printf(" ");
//			break;
//		}
//	}
//
//	for(i=0;;i++){
//		if(rename2[i]!=' ')printf("%c",rename2[i]);
//		else break;
//	}
//
//
//	scanf("%d",&i);
//	return 0;
//}