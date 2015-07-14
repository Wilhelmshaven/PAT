//#include <stdio.h>
//
//void output(int x){
//	if(x<0)x=-x;
//	if(x==0)printf("000");
//	else if(x<10)printf("00%d",x);
//	else if(x<100)printf("0%d",x);
//	else printf("%d",x);
//}
//
//int main(){
//	int m,n,sum;
//	scanf("%d%d",&m,&n);
//	sum=m+n;
//	int a,b,c;
//	a=sum%1000;
//	b=(sum%1000000-a)/1000;
//	c=(sum-b*1000-a)/1000000;
//
//	if(sum<0)printf("-");
//	if(c<0)c=-c;
//	if(b<0)b=-b;
//	if(a<0)a=-a;
//	if(c!=0){
//
//		printf("%d,",c);
//		output(b);
//		printf(",");
//		output(a);
//	}
//	else if(b!=0){
//		printf("%d",b);
//		printf(",");
//		output(a);
//	}else printf("%d",a);
//
//	printf("%d%d%d",a,b,c);
//	scanf("%d",&n);
//	return 0;
//}