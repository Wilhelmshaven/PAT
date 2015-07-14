//#include <stdio.h>
//
//int main(){
//	int i,j;
//	int n,m;
//	int position[55];
//	int card[55];
//	for(i=1;i<55;i++)card[i]=i;
//
//	scanf("%d",&n);
//	for(i=1;i<55;i++)scanf("%d",&position[i]);
//	for(i=0;i<n;i++){
//		for(j=1;j<55;j++)card[j]=position[card[j]];
//	}
//
//	for(i=1;i<55;i++)position[card[i]]=i;
//
//	int point;
//	int flower;
//	for(i=1;i<54;i++){
//		flower=(position[i]-1)/13;
//		point=position[i]%13;
//		if(point==0)point=13;
//		if(flower==0){
//			printf("S%d ",point);
//		}
//		if(flower==1){
//			printf("H%d ",point);
//		}
//		if(flower==2){
//			printf("C%d ",point);
//		}
//		if(flower==3){
//			printf("D%d ",point);
//		}
//		if(flower==4){
//			if(point==1)printf("J1 ");
//			else printf("J2 ");
//		}
//	}
//	flower=(position[54]-1)/13;
//	point=position[54]%13;
//	if(point==0)point=13;
//	if(flower==0){
//		printf("S%d",point);
//	}
//	if(flower==1){
//		printf("H%d",point);
//	}
//	if(flower==2){
//		printf("C%d",point);
//	}
//	if(flower==3){
//		printf("D%d",point);
//	}
//	if(flower==4){
//		if(point==1)printf("J1");
//		else printf("J2");
//	}
//
//
//	scanf("%d",&i);
//	return 0;
//}