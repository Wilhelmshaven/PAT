//#include <stdio.h>
//
//int main(){
//	int i,j,k;
//	int n,m;
//	int temp;
//	int coin[1001];
//	for(i=0;i<=1000;i++)coin[i]=0;
//
//	scanf("%d%d",&n,&m);
//	for(i=0;i<n;i++){
//		scanf("%d",&temp);
//		if(coin[temp]<2)coin[temp]++;
//	}
//
//	int flag=0;
//
//	for(i=1;i<=m/2;i++){
//		if(coin[i]!=0){
//			coin[i]--;
//			temp=m-i;
//			if(coin[temp]!=0){
//				printf("%d %d",i,temp);
//				flag=1;
//				break;
//			}
//		}
//	}
//
//	if(flag==0)printf("No Solution");
//
//	scanf("%d",&i);
//	return 0;
//}