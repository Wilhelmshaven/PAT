//#include <stdio.h>
//
//int main(){
//	int a,b,d,i;
//	long c;
//	int r[60];
//
//	for(i=0;i<60;i++)r[i]=0;
//
//	scanf("%d%d%d",&a,&b,&d);
//
//	c=a+b;
//
//	for(i=59;i>=0;i--){
//		if(c!=0){
//			r[i]=c%d;
//			c=c/d;
//		}
//		else break;
//	}
//
//	int flag=0;
//	for(i=0;i<60;i++){
//		if(r[i]!=0){
//			flag=i;
//			break;
//		}
//	}
//
//	if(flag==0)printf("0");
//	else for(i=flag;i<60;i++)printf("%d",r[i]);
//
//	return 0;
//}