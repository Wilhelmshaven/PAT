//#include <stdio.h>
//
//int main(){
//	int n,m,i;
//	long input,color,count;
//
//	scanf("%d%d",&m,&n);
//
//	scanf("%ld",&color);
//	count=1;
//	for(i=1;i<m*n;i++){
//		scanf("%ld",&input);
//		if(input==color)count++;
//		else count--;
//		if(count<0){
//			color=input;
//			count=0;
//		}
//	}
//
//	printf("%ld",color);
//
//	return 0;
//}