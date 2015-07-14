//#include <stdio.h>
//
//int main(){
//	int i,j;
//	float game;
//	float profit;
//	float max[3];
//	char type[3];
//	for(i=0;i<3;i++){
//		scanf("%f",&game);
//		max[i]=game;
//		type[i]='W';
//		scanf("%f",&game);
//		if(game>max[i]){
//			max[i]=game;
//			type[i]='T';
//		}
//		scanf("%f",&game);
//		if(game>max[i]){
//			max[i]=game;
//			type[i]='L';
//		}
//	}
//	profit=(max[0]*max[1]*max[2]*0.65-1)*2;
//	printf("%c %c %c %.2f",type[0],type[1],type[2],profit);
//
//	scanf("%d",&i);
//	return 0;
//}