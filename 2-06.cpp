//#include <stdio.h>
//
//int main(){
//	int a,n,i,j;
//	static int sum[1000000];
//
//	scanf("%d%d",&a,&n);
//
//	for(i=0;i<1000000;i++)sum[i]=0;
//
//	sum[999999]=n*a;
//	n--;
//	for(i=999998;i>=0;i--){
//		if(n<=0)break;
//		sum[i]=n*a+sum[i+1]/10;
//		n--;
//	}
//
//	for(i=0;i<1000000;i++){
//		if(sum[i]!=0){
//			for(j=i;j<1000000;j++)printf("%d",sum[j]%10);
//			break;
//		}
//		if(i==999999)printf("0");
//	}
//
//	scanf("%d",&i);
//	return 0;
//}