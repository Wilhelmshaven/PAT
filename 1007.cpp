//#include <stdio.h>
//
//int main(){
//	int n,i,j,k,num[10000];
//	int total;
//	int max=-9999999999;
//	int sum;
//	int begin,end;
//	scanf("%d",&n);
//	for(i=0;i<n;i++){
//		scanf("%d",&num[i]);
//		total=i+1;
//	}
//	for(i=0;i<total;i++){
//		sum=0;
//		for(j=i;j<total;j++){
//			sum=sum+num[j];
//			if(sum>max){
//				max=sum;
//				begin=num[i];
//				end=num[j];
//			}
//			if(sum==max){
//				if(num[i]<begin){
//					begin=num[i];
//					end=num[j];
//				}
//			}
//		}
//	}
//	int flag=0;
//	for(i=0;i<total;i++){
//		if(num[i]>=0){
//			flag=1;
//			break;
//		}
//	}
//	if(flag==1)printf("%d %d %d",max,begin,end);
//	else printf("0 %d %d",num[0],num[total-1]);
//
//	scanf("%d",&n);
//	return 0;
//}