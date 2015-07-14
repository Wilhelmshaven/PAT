//#include <stdio.h>
//
//int main(){
//	int n,d;
//	float cake[1000][2];
//	int i;
//	float max,sum;
//	int p;
//
//	scanf("%d%d",&n,&d);
//	for(i=0;i<n;i++){
//		scanf("%f",&cake[i][0]);
//	}
//	for(i=0;i<n;i++){
//		scanf("%f",&cake[i][1]);
//		cake[i][1]=cake[i][1]/cake[i][0];
//	}
//
//	sum=0;
//	while(d>0){
//		max=0;
//		for(i=0;i<n;i++){
//			if(cake[i][1]>max){
//				max=cake[i][1];
//				p=i;
//			}
//		}
//		if(d<=cake[p][0]){
//			sum=sum+max*d;
//			printf("%.2f",sum);
//		}else{
//			sum=sum+cake[p][0]*max;
//		}
//		cake[p][1]=-1;
//		d=d-cake[p][0];
//	}
//	
//	return 0;
//}