//#include <stdio.h>
//
//int main(){
//	int i,j;
//	int n,m;
//	int flag;
//	char c[80];
//
//	for(i=0;;i++){
//		scanf("%c",&c[i]);
//		if(c[i]=='\n'){
//			flag=i-1;
//			break;
//		}
//	}
//	
//	int end=flag;
//	int begin;
//	for(i=flag;i>=0;i--){
//		if(i!=0){
//			if(c[i]==' '){
//				begin=i+1;
//				for(j=begin;j<=end;j++)printf("%c",c[j]);
//				printf(" ");
//				end=begin-2;
//			}
//		}else for(j=0;j<=end;j++)printf("%c",c[j]);
//	}
//
//	scanf("%d",&i);
//
//	return 0;
//}