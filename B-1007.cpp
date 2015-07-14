//#include <stdio.h>
//#include <math.h>
//
//bool prime(int n){
//	int i;
//	int k=0;
//	float q=n;
//	if(n%2==0)k=1;
//	else for(i=3;i<=sqrt(q);i=i+2){
//		if(n%i==0){
//			k=1;
//			break;
//		}
//	}
//	if(k==0)return true;
//	else return false;
//}
//
//int main(){
//	int i,j;
//	int n;
//	scanf("%d",&n);
//	bool flag1,flag2;
//	int count=0;
//	if(n>4)count=1;
//	for(i=6;i<n;i=i+6){
//		flag1=prime(i-1);
//		flag2=prime(i+1);
//		if(flag1==true&&flag2==true)count++;
//	}
//	printf("%d",count);
//
//	scanf("%d",&i);
//	return 0;
//}