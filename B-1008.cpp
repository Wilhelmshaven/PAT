//#include <stdio.h>
//
//int main(){
//	int i;
//	int n,m;
//	int a[100];
//	scanf("%d%d",&n,&m);
//	if(m>=n)m=m%n;
//	for(i=0;i<n;i++)scanf("%d",&a[i]);
//	for(i=0;i<n-1;i++){
//		if(n-m+i>=n)printf("%d ",a[i-m]);
//		else printf("%d ",a[n-m+i]);
//	}
//	if(2*n-m-1>=n)printf("%d",a[n-m-1]);
//	else printf("%d",a[2*n-m-1]);
//
//	scanf("%d",&i);
//	return 0;
//}