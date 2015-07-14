//#include <stdio.h>
//
//int main(){
//	int count[10],i;
//	char c;
//
//	for(i=0;i<10;i++)count[i]=0;
//
//	for(;;){
//		c=getchar();
//		if(c!='\n')count[c-48]++;
//		else break;
//	}
//
//	for(i=0;i<10;i++){
//		if(count[i]!=0)printf("%d:%d\n",i,count[i]);
//	}
//
//	return 0;
//}