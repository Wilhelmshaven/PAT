//#include <stdio.h>
//
//int main(){
//	int n;
//	scanf("%d",&n);
//	int i,j;
//	int count[111301][2];
//	int record[100];
//	for(i=1;i<=111300;i++){
//		count[i][0]=0;
//		count[i][1]=0;
//	}
//	int callaz;
//	for(i=1;i<=n;i++){
//		scanf("%d",&callaz);
//		if(n==1){
//			record[2]=callaz;
//			break;
//		}
//		count[callaz][0]++;
//		for(j=1;;j++){
//			if(callaz==1)break;
//			if(callaz%2==0){
//				callaz=callaz/2;
//				count[callaz][1]++;
//			}
//			else{
//				callaz=(3*callaz+1)/2;
//				count[callaz][1]++;
//			}
//		}
//	}
//	j=2;
//	for(i=2;i<=111300;i++){
//		if(count[i][0]==1&&count[i][1]==0){
//			record[j]=i;
//			j++;
//		}
//	}
//	int k;
//	for(i=2;i<j;i++){
//		for(k=i+1;k<j;k++){
//			int temp;
//			if(record[i]<record[k]){
//				temp=record[i];
//				record[i]=record[k];
//				record[k]=temp;
//			}
//		}
//	}
//	for(i=2;i<j;i++){
//		printf("%d",record[i]);
//		if(i!=j-1)printf(" ");
//	}
//	scanf("%d",&i);
//	return 0;
//}