//#include <stdio.h>
//
//int main(){
//	int n;
//	int i;
//	int x;
//	float y;
//	float poly1[1001],poly2[1001];
//	for(i=0;i<1001;i++){
//		poly1[i]=0;
//		poly2[i]=0;
//	}
//
//	scanf("%d",&n);
//	for(i=0;i<n;i++){
//		scanf("%d%f",&x,&y);
//		poly1[x]=y;
//	}
//	scanf("%d",&n);
//	for(i=0;i<n;i++){
//		scanf("%d%f",&x,&y);
//		poly2[x]=y;
//	}
//
//	for(i=0;i<1001;i++){
//		poly1[i]=poly1[i]+poly2[i];
//	}
//
//	int k=0;
//	for(i=0;i<1001;i++){
//		if(poly1[i]!=0)k++;
//	}
//	for(i=1000;i>=0;i--){
//		if(poly1[i]!=0){
//			printf("%d",k);
//			for(int j=i;j>=0;j--){
//				if(poly1[j]!=0){
//					printf(" %d",j);
//					printf(" %.1f",poly1[j]);
//				}
//			}
//			break;
//		}
//	}
//	if(k==0)printf("0");
//
//	scanf("%d",&i);
//	return 0;
//}