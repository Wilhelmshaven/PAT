//#include <stdio.h>
//#include <stdlib.h>
//
//int cmp(const void *a,const void *b){
//	return *(int *)a-*(int *)b;
//}
//
//int main(){
//	static int list[500000][5];
//	int course[2500];
//	int c;
//	int n,k;
//	int index,s;
//	int i,j;
//	int name[4];
//	char temp[4];
//
//	scanf("%d%d",&n,&k);
//	int pivot=0;
//	for(i=0;i<k;i++){
//		scanf("%d%d",&index,&s);
//		getchar();
//		for(j=0;j<s;j++){
//			list[pivot][0]=index;
//			list[pivot][1]=getchar();
//			list[pivot][2]=getchar();
//			list[pivot][3]=getchar();
//			list[pivot][4]=getchar();
//			getchar();
//			pivot++;
//		}
//	}
//
//	int count;
//	for(i=0;i<n;i++){
//		name[0]=getchar();
//		name[1]=getchar();
//		name[2]=getchar();
//		name[3]=getchar();
//		getchar();
//
//		count=0;
//		c=0;
//		for(j=0;j<pivot;j++){
//			if(name[0]==list[j][1]&&name[1]==list[j][2]&&name[2]==list[j][3]&&name[3]==list[j][4]){
//				count++;
//				course[c]=list[j][0];
//				c++;
//			}
//		}
//
//		qsort(course,c,sizeof(int),cmp);
//
//		temp[0]=name[0];
//		temp[1]=name[1];
//		temp[2]=name[2];
//		temp[3]=name[3];
//		printf("%c%c%c%c",temp[0],temp[1],temp[2],temp[3]);
//		printf(" %d",count);
//		for(i=0;i<c;i++)printf(" %d",course[i]);
//		printf("\n");
//	}
//
//	return 0;
//}