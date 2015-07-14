//#include <stdio.h>
//
//int main(){
//	int n,i;
//	long long a,b,c,d;
//
//	scanf("%d",&n);
//
//	for(i=0;i<n;i++){
//		scanf("%lld%lld%lld",&a,&b,&c);
//		if(a>=0&&b>=0){
//			if(c>=0){
//				a=a-4611686018427387904LL;
//				b=b-4611686018427387903LL;
//				c=c-9223372036854775807LL;
//				if(a+b>c)printf("Case #%d: true\n",i+1);
//				else printf("Case #%d: false\n",i+1);
//			}else printf("Case #%d: true\n",i+1);
//		}else if(a<=0&&b<=0){
//			if(c<0){
//				a=a+4611686018427387904LL;
//				b=b+4611686018427387904LL;
//				c=c+9223372036854775808LL;
//				if(a+b>c)printf("Case #%d: true\n",i+1);
//				else printf("Case #%d: false\n",i+1);
//			}else printf("Case #%d: false\n",i+1);
//		}else{
//			if(a+b>c)printf("Case #%d: true\n",i+1);
//			else printf("Case #%d: false\n",i+1);
//		}
//	}
//
//	return 0;
//}