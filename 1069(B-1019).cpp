//#include <stdio.h>
//
//int main(){
//	int n,i,j,temp;
//	int digit[4],max[4],min[4],a,b;
//	int number;
//
//	scanf("%d",&n);
//
//	digit[3]=n/1000;
//	digit[2]=(n%1000)/100;
//	digit[1]=(n%100)/10;
//	digit[0]=n%10;
//
//	for(;;){
//		//digit[3]=n/1000;
//		//digit[2]=(n%1000)/100;
//		//digit[1]=(n%100)/10;
//		//digit[0]=n%10;
//
//		if(digit[0]==digit[1]&&digit[1]==digit[2]&&digit[2]==digit[3]){
//			printf("%d - %d = 0000",n,n);
//			break;
//		}
//
//		for(i=0;i<3;i++){
//			for(j=i+1;j<4;j++){
//				if(digit[i]<digit[j]){
//					temp=digit[i];
//					digit[i]=digit[j];
//					digit[j]=temp;
//				}
//			}
//		}
//		for(i=0;i<4;i++)max[i]=digit[i];
//		for(i=0;i<4;i++)min[3-i]=digit[i];
//
//		a=max[0]*1000+max[1]*100+max[2]*10+max[3];
//		b=min[0]*1000+min[1]*100+min[2]*10+min[3];
//		n=a-b;
//
//		digit[3]=n/1000;
//		digit[2]=(n%1000)/100;
//		digit[1]=(n%100)/10;
//		digit[0]=n%10;
//		//printf("%4d - %4d = %4d\n",a,b,n);
//		printf("%d%d%d%d - %d%d%d%d = %d%d%d%d\n",max[0],max[1],max[2],max[3],min[0],min[1],min[2],min[3],digit[3],digit[2],digit[1],digit[0]);
//		if(n==6174)break;
//	}
//
//	scanf("%d",&n);
//
//	return 0;
//}