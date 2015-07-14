//#include <stdio.h>
//#include <stdlib.h>
//int node[100000][3];
//
//int main(){
//	int i,j;
//	int n;
//	int start;
//
//	scanf("%d%d",&n,&start);
//	for(i=0;i<n;i++){
//		scanf("%d%d%d",&node[i][0],&node[i][1],&node[i][2]);
//	}
//
//	int temp;
//	int pivot;
//	int flag;
//	int min;
//
//	for(i=0;i<n;i++){
//		flag=0;
//		min=node[i][1];
//		for(j=i+1;j<n;j++){
//			if(node[j][1]<min){
//				flag=1;
//				pivot=j;
//				min=node[j][1];
//			}
//		}
//		if(flag==1){
//			temp=node[i][0];
//			node[i][0]=node[pivot][0];
//			node[pivot][0]=temp;
//			temp=node[i][1];
//			node[i][1]=node[pivot][1];
//			node[pivot][1]=temp;
//			node[i][2]=node[pivot][0];
//		}
//	}
//	node[n-1][2]=-1;
//
//	printf("%d %05d\n",n,node[0][0]);
//	for(i=0;i<n-1;i++)printf("%05d %d %05d\n",node[i][0],node[i][1],node[i+1][0]);
//	printf("%05d %d -1\n",node[n-1][0],node[n-1][1]);
//
//	scanf("%d",&i);
//	return 0;
//}