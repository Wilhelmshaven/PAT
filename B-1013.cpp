//#include <stdio.h>
//
//int main(){
//	int prime[10000];
//	int i,pivot,base,limit,j,flag;
//	int m,n,count;
//	
//	prime[0]=2;
//	pivot=1;
//	base=2;
//	
//	for(i=3;;i++){
//		limit=base*base;
//		if(i>=limit)base++;
//		flag=0;
//		for(j=0;;j++){
//			if(prime[j]<=base-1){
//				if(i%prime[j]==0){
//					flag=1;
//					break;
//				}
//			}else break;
//		}
//		if(flag==0){
//			prime[pivot]=i;
//			pivot++;
//		}
//		if(pivot>10000)break;
//	}
//
//	scanf("%d%d",&m,&n);
//	count=1;
//	for(i=m-1;i<n;i++){
//		if(count==1)printf("%d",prime[i]);
//		else printf(" %d",prime[i]);
//		count++;
//		if(count>10){
//			printf("\n");
//			count=1;
//		}
//	}
//
//	return 0;
//}
