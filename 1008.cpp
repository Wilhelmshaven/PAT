//#include <stdio.h>
//
//int main(){
//	int floor[101];
//	int time=0;
//	int n,i;
//	scanf("%d",&n);
//	for(i=0;i<101;i++)floor[i]=-1;
//
//	scanf("%d",&floor[0]);
//	time=time+5+floor[0]*6;
//	for(i=1;i<n;i++){
//		scanf("%d",&floor[i]);
//		if(floor[i]>floor[i-1])time=time+(floor[i]-floor[i-1])*6+5;
//		if(floor[i]<floor[i-1])time=time+(floor[i-1]-floor[i])*4+5;
//		if(floor[i]==floor[i-1])time=time+5;
//	}
//	printf("%d",time);
//
//	scanf("%d",&i);
//	return 0;
//}