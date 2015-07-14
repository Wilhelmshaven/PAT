//#include <stdio.h>
//#include <stdlib.h>
//
//int cmp(const void *a,const void *b){
//	return *(long*)b-*(long*)a;
//}
//
//int main(){
//	int nc,np;
//	int i;
//	long ncs[100000],nps[100000];
//	int pivot,pivot1,pivot2;
//	long sum=0;
//	int positive,negative;
//
//	scanf("%d",&nc);
//	for(i=0;i<nc;i++){
//		scanf("%ld",&ncs[i]);
//	}
//
//	scanf("%d",&np);
//	for(i=0;i<np;i++){
//		scanf("%ld",&nps[i]);
//	}
//
//	qsort(ncs,nc,sizeof(ncs[0]),cmp);
//	qsort(nps,np,sizeof(nps[0]),cmp);
//
//	for(i=0;i<nc&&i<np;i++){
//		if(ncs[i]>0&&nps[i]>0){
//			sum=sum+ncs[i]*nps[i];
//		}else break;
//	}
//	for(i=1;;i++){
//		if(ncs[nc-i]<0&&nps[np-i]<0){
//			sum=sum+ncs[nc-i]*nps[np-i];
//		}else break;
//	}
//
//	printf("%ld",sum);
//
//	return 0;
//}
//
