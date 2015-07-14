//#include <stdio.h>
//
//int main(){
//	int i,j;
//	char a[10000][2],b[10000];
//	int code[256];
//	for(i=0;i<256;i++){
//		code[i]=0;
//	}
//	for(i=0;i<10000;i++){
//		a[i][1]=0;
//	}
//	for(i=0;;i++){
//		scanf("%c",&a[i][0]);
//		if(a[i][0]=='\n')break;
//	}
//	for(i=0;;i++){
//		scanf("%c",&b[i]);
//		if(b[i]=='\n')break;
//	}
//	for(i=0;;i++){
//		if(b[i]=='\n')break;
//		if(code[b[i]]==0)code[b[i]]=1;
//	}
//	for(i=0;i<256;i++){
//		if(code[i]!=0){
//			for(j=0;;j++){
//				if(a[j][0]=='\n')break;
//				if(a[j][0]==i)a[j][1]=1;
//			}
//		}
//	}
//	for(i=0;;i++){
//		if(a[i][0]=='\n')break;
//		else if(a[i][1]==0)printf("%c",a[i][0]);
//	}
//
//	scanf("%d",&i);
//	return 0;
//}