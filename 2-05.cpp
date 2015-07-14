//#include <stdio.h>
//#include <math.h>
//
//int main(){
//	int n,i;
//	double m[10000];
//	double avg=0;
//
//	scanf("%d",&n);
//	for(i=0;i<n;i++){
//		scanf("%lf",&m[i]);
//		avg=avg+m[i];
//	}
//	avg=(double)avg/n;
//
//	for(i=0;i<n;i++)m[i]=(m[i]-avg)*(m[i]-avg);
//
//	avg=0;
//	for(i=0;i<n;i++)avg=avg+m[i];
//
//	avg=sqrtf(avg/n);
//
//	printf("%.5lf",avg);
//
//	return 0;
//}