//#include <stdio.h>
//#define size 1000001
//long s1[size],s2[size];
//
//int main(){
//	int i,j,k,p;
//	int n,m;
//	int middle;
//	long s3;
//
//	scanf("%d",&n);
//	for(i=1;i<=n;i++)scanf("%ld",&s1[i]);
//	//scanf("%d",&m);
//	m=n;
//	for(i=1;i<=m;i++)scanf("%ld",&s2[i]);
//
//	j=1;
//	k=1;
//
//	middle=m+n;
//	if(middle%2==0)middle=middle/2;
//	else middle=middle/2+1;
//
//	for(i=1;i<=middle;i++){
//		if(s1[j]>s2[k]){
//			s3=s2[k];
//			k++;
//		}else{
//			s3=s1[j];
//			j++;
//		}
//		if(j>n){
//			for(p=i+1;p<=middle;p++){
//				s3=s2[k];
//				k++;
//			}
//			break;
//		}
//		if(k>m){
//			for(p=i+1;p<=middle;p++){
//				s3=s1[j];
//				j++;
//			}
//			break;
//		}
//	}
//
//	printf("%ld",s3);
//
//	//scanf("%d",&i);
//	return 0;
//}