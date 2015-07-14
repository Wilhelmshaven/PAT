//#include <stdio.h>
//#include <math.h>
//
//int p[65536][2];
//
////int Prime(long n){  ////Running too much time. It is no need to find all primes I think.
////	int i=2;
////	int j,k;
////	p[0][0]=2;
////	p[1][0]=3;
////	long front,next;
////	int a,b;
////	
////	for(j=0;j<10000;j++)p[j][1]=0;
////
////	for(j=6;j<n;j=j+6){
////		front=j-1;
////		next=j+1;
////		a=0;
////		b=0;
////		for(k=2;k<next/2;k++){
////			if(a==1&&b==1)break;
////			if(front%k==0)a=1;
////			if(next%k==0)b=1;
////		}
////		if(a==0){
////			p[i][0]=front;
////			i++;
////		}
////		if(b==0){
////			p[i][0]=next;
////			i++;
////		}
////	}
////	p[i][0]=n;
////
////	return i+1;
////}
//
//long Prime(long n){
//	p[0][0]=2;
//	p[1][0]=3;
//	long i=2;
//	long k;
//	int  j;
//	long base;
//	int flag;
//	long num;
//
//	for(j=0;j<65536;j++)p[j][1]=0;
//
//	long limit;
//	base=2;
//	long maxM;
//
//	while(true){
//		limit=base*base;
//		if(n>=limit)base++;
//		else{
//			maxM=base-1;
//			break;
//		}
//	}//M*M<n<(M+1)*(M+1)
//
//	base=2;
//	//print prime 2 to M
//	for(k=4;k<maxM;k++){
//		limit=base*base;
//		if(k>=limit)base++;
//
//		flag=0;
//		for(j=0;j<i;j++){
//			if(p[j][0]<=base-1){
//				if(k%p[j][0]==0){
//					flag=1;
//					break;
//				}
//			}else break;
//		}
//		if(flag==0){
//			p[i][0]=k;
//			i++;
//		}
//
//	}
//
//	p[i][0]=maxM;
//	i++;
//
//	return i;
//
//}
//
//int main(){
//	long n;
//	int i;
//	long size;
//	long num;
//
//	scanf("%ld",&n);
//	num=n;
//	size=Prime(num);
//
//	i=0;
//	while(n!=1){
//		if(n%p[i][0]==0){
//			p[i][1]++;
//			n=n/p[i][0];
//		}else i++;
//	}
//
//	printf("%ld=",num);
//	int flag=0;
//
//	for(i=0;i<size;i++){
//		if(p[i][1]!=0&&flag!=0){
//			if(p[i][1]==1)printf("*%ld",p[i][0]);
//			else printf("*%ld^%ld",p[i][0],p[i][1]);
//		}
//		if(p[i][1]!=0&&flag==0){
//			flag=1;
//			if(p[i][1]==1)printf("%ld",p[i][0]);
//			else printf("%ld^%ld",p[i][0],p[i][1]);
//		}
//	}
//	if(num==1)printf("1");
//
//	//scanf("%ld",&n);
//
//	return 0;
//}