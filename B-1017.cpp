//#include <stdio.h>
//
//int main(){
//	char a[1000],b,t;
//	int i,j,k;
//	int temp,q[1000],r;
//
//	for(i=0;;i++){
//		t=getchar();
//		if(t!=' ')a[i]=t;
//		else break;
//	}
//
//	b=getchar();
//	b=b-48;
//
//	if(i==1){
//		r=(a[0]-48)%b;
//		q[0]=(a[0]-48)/b;
//		printf("%d %d",q[0],r);
//	}else{
//		k=0;
//		for(j=0;j<i-1;j++){
//			temp=(a[j]-48)*10+(a[j+1]-48);
//			q[k]=temp/b;
//			k++;
//			a[j+1]=temp%b+48;
//		}
//		for(j=0;j<k;j++)printf("%d",q[j]);
//		printf(" %c",a[k]);
//	}
//
//	return 0;
//}
