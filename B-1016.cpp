//#include <stdio.h>
//
//int main(){
//	int i,k;
//	char a;
//	char c[10];
//	int sum=0,count,ten,n;
//
//	//String 1
//	for(i=0;;i++){
//		a=getchar();
//		if(a==' '){
//			k=i;
//			break;
//		}
//		else c[i]=a;
//	}
//	a=getchar();
//	count=0;
//	for(i=0;i<k;i++){
//		if(c[i]==a)count++;
//	}
//
//	ten=1;
//	n=a-48;
//	for(i=0;i<count;i++){
//		sum=sum+n*ten;
//		ten=ten*10;
//	}
//
//	getchar();
//	//String 2
//	for(i=0;;i++){
//		a=getchar();
//		if(a==' '){
//			k=i;
//			break;
//		}
//		else c[i]=a;
//	}
//	a=getchar();
//	count=0;
//	for(i=0;i<k;i++){
//		if(c[i]==a)count++;
//	}
//
//	ten=1;
//	n=a-48;
//	for(i=0;i<count;i++){
//		sum=sum+n*ten;
//		ten=ten*10;
//	}
//
//	printf("%d",sum);
//
//	return 0;
//}