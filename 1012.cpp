//#include <stdio.h>
//
//int main(){
//	int score[2000][5];//CMEA
//	int rank[2000][4];//ACME
//	int arank,crank,mrank,erank;
//	int n,m,i,j;
//	int checkID;
//	int pivot;
//	int maxrank;
//	int sub;
//	int flag;
//
//	arank=1;
//	crank=1;
//	mrank=1;
//	erank=1;
//
//	scanf("%d%d",&n,&m);
//
//	for(i=0;i<n;i++){
//		scanf("%d%d%d%d",&score[i][0],&score[i][1],&score[i][2],&score[i][3]);
//		score[i][4]=(score[i][1]+score[i][2]+score[i][3])/3;
//	}
//
//	int count[4];
//	for(j=0;j<101;j++){
//		count[0]=0;
//		count[1]=0;
//		count[2]=0;
//		count[3]=0;
//		for(i=0;i<n;i++){
//			if(score[i][1]==100){
//				rank[i][1]=crank;
//				count[0]++;
//			}
//			score[i][1]++;
//			if(score[i][2]==100){
//				rank[i][2]=mrank;
//				count[1]++;
//			}
//			score[i][2]++;
//			if(score[i][3]==100){
//				rank[i][3]=erank;
//				count[2]++;
//			}
//			score[i][3]++;
//			if(score[i][4]==100){
//				rank[i][0]=arank;
//				count[3]++;
//			}
//			score[i][4]++;
//		}
//		crank=crank+count[0];
//		mrank=mrank+count[1];
//		erank=erank+count[2];
//		arank=arank+count[3];
//	}
//
//	for(i=0;i<m;i++){
//		scanf("%d",&checkID);
//		maxrank=9999;
//		flag=0;
//		for(j=0;j<n;j++){
//			if(checkID==score[j][0]){
//				pivot=j;
//				flag=1;
//				break;
//			}
//		}
//		if(flag==1){
//			for(j=0;j<4;j++){
//				if(rank[pivot][j]<maxrank){
//					sub=j;
//					maxrank=rank[pivot][j];
//				}
//			}
//			if(sub==0)printf("%d A\n",maxrank);
//			if(sub==1)printf("%d C\n",maxrank);
//			if(sub==2)printf("%d M\n",maxrank);
//			if(sub==3)printf("%d E\n",maxrank);
//		}
//		else printf("N/A\n");
//	}
//				
//	return 0;
//}