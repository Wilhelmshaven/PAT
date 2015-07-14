//#include <stdio.h>
//
//int main(){
//	int i,j,k;
//	int n;
//	int bet[100000];
//	int count[10001];
//	for(i=0;i<100000;i++){
//		bet[i]=0;
//	}
//	for(i=0;i<10001;i++){
//		count[i]=0;
//	}
//
//	scanf("%d",&n);
//	for(i=0;i<n;i++){
//		scanf("%d",&bet[i]);
//		if(count[bet[i]]<2)count[bet[i]]++;    //Quicker...->Must have this if.
//	}
//	int flag=0;
//	for(i=0;i<n;i++){
//		if(count[bet[i]]==1){
//			printf("%d",bet[i]);
//			flag=1;
//			break;
//		}
//	}
//	if(flag==0)printf("None");
//
//	scanf("%d",&i);
//	return 0;
//}