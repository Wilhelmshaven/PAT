//#include <stdio.h>
//
//int main(){
//	int n,m,i;
//	int radix[30];
//	int length;
//
//	scanf("%d%d",&m,&n);
//
//	for(i=0;;i++){
//		length=i;
//		radix[i]=m%n;
//		m=m/n;
//		if(m==0)break;
//	}
//
//	int pivot;
//	int flag=1;
//	if(length%2==0){
//		pivot=length/2;
//		for(i=1;i<=pivot;i++){
//			if(radix[pivot-i]!=radix[pivot+i]){
//				flag=0;
//				break;
//			}
//		}
//	}else{
//		pivot=length/2;
//		for(i=1;i<=pivot+1;i++){
//			if(radix[pivot-i+1]!=radix[pivot+i]){
//				flag=0;
//				break;
//			}
//		}
//	}
//
//	if(flag==1)printf("Yes\n");
//	else printf("No\n");
//	printf("%d",radix[length]);
//	for(i=length-1;i>=0;i--)printf(" %d",radix[i]);
//
//	scanf("%d",&i);
//	return 0;
//}