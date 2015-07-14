//#include <stdio.h>
//#include <stdlib.h>
//
//int cmp(const void *a,const void *b){
//	return *(int *)a-*(int *)b;
//}
//
//int main(){
//	int n,m,k,s1,s2;
//	static int set[50][10001];
//	int same,distinct;
//	int i,j,x;
//	int pivot;
//	int temp,flag;
//	float percent;
//
//	scanf("%d",&n);
//	for(i=0;i<n;i++){
//		scanf("%d",&m);
//		pivot=2;
//		set[i][0]=m;//total number
//		for(j=1;j<=m;j++){//begin with set[i][1]
//			flag=0;
//			scanf("%d",&temp);
//			if(j>1){//at least 1 number
//				for(k=1;k<pivot;k++){
//					if(temp==set[i][k]){
//						flag=1;
//						set[i][0]--;
//						break;
//					}
//				}
//				if(flag==0){
//					set[i][pivot]=temp;
//					pivot++;
//				}
//			}else{
//				set[i][1]=temp;
//			}
//		}
//	}
//
//	//最好还是给数组先排序，无序数组太耗时间
//	for(i=0;i<n;i++){
//		int size=set[i][0];
//		set[i][0]=set[i][size];  //取出首元素（数组大小）
//		qsort(set[i],size,sizeof(int),cmp);
//		for(j=size-1;j>=0;j--){
//			set[i][j+1]=set[i][j];
//		}//数组后移
//		set[i][0]=size;//放回首元素
//	}
//	
//	scanf("%d",&k);
//
//	for(i=0;i<k;i++){
//		scanf("%d%d",&s1,&s2);
//		s1--;
//		s2--;
//		same=0;
//		distinct=0;
//		int x,y;
//		x=1;
//		y=1;
//		for(;;){
//			if(x>set[s1][0]){
//				distinct=distinct+set[s2][0]-y+1;
//				break;
//			}
//			if(y>set[s2][0]){
//				distinct=distinct+set[s1][0]-x+1;
//				break;
//			}
//			if(set[s1][x]<set[s2][y]){
//				distinct++;
//				x++;
//			}
//			else if(set[s1][x]>set[s2][y]){
//				distinct++;
//				y++;
//			}
//			else if(set[s1][x]==set[s2][y]){
//				distinct++;
//				same++;
//				x++;
//				y++;
//			}
//		}
//		//flag=set[s2][0];
//		//for(j=0;j<set[s1][0];j++){
//		//	for(x=0;x<set[s2][0];x++){
//		//		if(set[s2][x+1]==set[s1][j+1]){
//		//			flag--;
//		//			same++;
//		//			break;
//		//		}
//		//	}
//		//}
//		//
//		//distinct=set[s1][0]+flag;
//		percent=(float)same/(float)distinct;
//		printf("%.1f%%\n",percent*100);
//	}
//
//	return 0;
//}