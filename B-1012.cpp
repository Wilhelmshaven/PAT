//#include <stdio.h>
//
//int main(){
//	int n,num;
//	int i;
//
//	int a1=0;
//
//	int a2=0;
//	int one=1;
//
//	int a3=0;
//
//	float a4;
//	int count=0;
//	int sum=0;
//
//	int a5=0;
//
//	int flag[3]={0,0,0};
//
//
//	scanf("%d",&n);
//
//	for(i=0;i<n;i++){
//		scanf("%d",&num);
//		if(num%5==0){
//			if(num%2==0){
//				flag[0]=1;
//				a1=a1+num;
//			}
//		}
//		if(num%5==1){
//			flag[1]=1;
//			a2=a2+num*one;
//			one=-one;
//		}
//		if(num%5==2){
//			a3++;
//		}
//		if(num%5==3){
//			flag[2]=1;
//			sum=sum+num;
//			count++;
//		}
//		if(num%5==4){
//			if(num>a5)a5=num;
//		}
//	}
//	a4=(float)sum/(float)count;
//
//	if(flag[0]==0)printf("N ");
//	else printf("%d ",a1);
//	if(flag[1]==0)printf("N ");
//	else printf("%d ",a2);
//	if(a3==0)printf("N ");
//	else printf("%d ",a3);
//	if(flag[2]==0)printf("N ");
//	else printf("%.01f ",a4);
//	if(a5==0)printf("N");
//	else printf("%d",a5);
//
//	return 0;
//}