//#include <stdio.h>
//
//int main(){
//	int n,m,i;
//	char c[1001];
//	int pivot,length;
//
//	n=0;
//	while(scanf("%c",&c[n])!=EOF){
//		n++;
//	}
//
//	pivot=1;
//	int max=0;
//	while(pivot<n){
//		length=1;
//		for(i=1;;i++){
//			//if(pivot-i<0||pivot+i>0)break;
//			if(c[pivot-i]==c[pivot+i])length=length+2;
//			else break;
//		}
//		if(length>max)max=length;
//
//		length=0;
//		for(i=1;;i++){
//			//if(pivot-i<0||pivot+i>0)break;
//			if(c[pivot-i]==c[pivot+i-1])length=length+2;
//			else break;
//		}
//		if(length>max)max=length;
//
//		pivot++;
//	}
//
//	printf("%d",max);
//
//	scanf("%d",&i);
//	return 0;
//}