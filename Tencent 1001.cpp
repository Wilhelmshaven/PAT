//#include <stdio.h>
//
//
//int main(){
//	int m,n;
//	int seat[22][22];
//	int i,j;
//	int value[22][22];
//
//	n=-1;
//	m=-1;
//
//	while(n!=0&&m!=0){
//
//		for(i=0;i<22;i++){
//			for(j=0;j<22;j++){
//				seat[i][j]=0;
//				value[i][j]=0;
//			}
//		}
//
//		scanf("%d%d",&n,&m);
//		if(n==0&&m==0)break;
//		for(i=1;i<=n;i++){
//			for(j=1;j<=m;j++){
//				scanf("%d",&seat[i][j]);
//			}
//		}
//
//		int sum;
//		for(i=1;i<=n;i++){
//			for(j=1;j<=m;j++){
//				sum=0;
//				if(seat[i][j]<0){
//					sum=sum+seat[i-1][j];
//					sum=sum+seat[i][j-1];
//					sum=sum+seat[i+1][j];
//					sum=sum+seat[i][j+1];
//					//if(sum<0)sum=-sum;
//					value[i][j]=sum;
//				}
//				if(seat[i][j]>0){
//					sum=sum-seat[i-1][j];
//					sum=sum-seat[i][j-1];
//					sum=sum-seat[i+1][j];
//					sum=sum-seat[i][j+1];
//					//if(sum<0)sum=-sum;
//					value[i][j]=sum;
//				}
//			}
//		}
//
//		int max=-1000;
//		int x,y;
//		for(i=1;i<=n;i++){
//			for(j=1;j<=m;j++){
//				if(value[i][j]>max){
//					max=value[i][j];
//					x=i;
//					y=j;
//				}
//			}
//		}
//
//		printf("%d %d %d\n",x,y,value[x][y]);
//	}
//
//	return 0;
//}