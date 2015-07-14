//#include <stdio.h>
//
//int main(){
//	int n,m,i,j,in,out;
//	int distance[100000];
//	int sum=0;
//	int temp;
//	int result;
//
//	scanf("%d",&n);
//	distance[0]=0;
//	for(i=1;i<=n;i++){
//		scanf("%d",&temp);
//		distance[i]=temp+distance[i-1];
//	}
//	sum=distance[n];
//
//	scanf("%d",&m);
//	for(i=0;i<m;i++){
//		result=-1;
//		temp=0;
//		scanf("%d%d",&in,&out);
//		if(in==out)result=0;
//
//		if(in-out>0)temp=distance[in-1]-distance[out-1];
//		if(in-out<0)temp=distance[out-1]-distance[in-1];
//	
//		if(result==0)printf("%d\n",result);
//		else{
//			if(sum-temp>=temp)printf("%d\n",temp);
//			else printf("%d\n",sum-temp);
//		}
//	}
//
//	return 0;
//}


///////////////////////////////////Below is the old code.
////#include <stdio.h>
////
////int main(){
////	int n,m,i,j,in,out;
////	int distance[100000];
////	int sum=0;
////	int temp;
////	int result;
////
////	scanf("%d",&n);
////	for(i=1;i<=n;i++)scanf("%d",&distance[i]);
////	for(i=1;i<=n;i++)sum=sum+distance[i];
////
////	scanf("%d",&m);
////	for(i=0;i<m;i++){
////		result=-1;
////		temp=0;
////		scanf("%d%d",&in,&out);
////		if(in==out)result=0;
////
////		if(in-out>0){
////			if(in-out<n/2){
////				for(j=out;j<=in;j++)temp=temp+distance[j];
////			}else{
////				j=in;
////				for(;;){
////					if(j==out)break;
////					temp=temp+distance[j];
////					j++;
////					if(j>n)j=1;
////				}
////			}
////		}
////		if(in-out<0){
////			if(out-in<n/2){
////				for(j=in;j<=out;j++)temp=temp+distance[j];
////			}else{
////				j=out;
////				for(;;){
////					if(j==in)break;
////					temp=temp+distance[j];
////					j++;
////					if(j>n)j=1;
////				}
////			}
////		}
////	
////		if(result==0)printf("%d\n",result);
////		else{
////			if(sum-temp>=temp)printf("%d\n",temp);
////			else printf("%d\n",sum-temp);
////		}
////	}
////
////	return 0;
////}