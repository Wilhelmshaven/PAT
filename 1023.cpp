//#include <stdio.h>
//
//int main(){
//	char n,m;
//	char num1[21],num2[21];
//	int i;
//
//	int count1[10],count2[10];
//	for(i=0;i<10;i++){
//		count1[i]=0;
//		count2[i]=0;
//	}
//	for(i=0;i<21;i++){
//		num1[i]=0;
//		num2[i]=0;
//	}
//
//	int number;
//	int size=0;
//	for(i=0;i<20;i++){
//		scanf("%c",&n);
//		if(n!='\n'){
//			size++;
//			num1[i]=n;   
//			count1[num1[i]-48]++;   //Count
//		}else break;
//	}//Read
//	for(i=size;i>0;i--){
//		number=num1[i-1]-48;
//		number=number*2;
//		num2[i]=num2[i]+number%10+48;
//		count2[num2[i]-48]++;
//		num2[i-1]=number/10;
//	}
//	num2[0]=num2[0]+48;
//
//	int flag=0;
//	for(i=0;i<10;i++){
//		if(count1[i]!=count2[i]){
//			flag=1;
//			break;
//		}
//	}
//	//
//	if(flag==1)printf("No\n");
//	else printf("Yes\n");
//
//	if(num2[0]=='0')for(i=1;i<=size;i++)printf("%c",num2[i]);
//	else for(i=0;i<=size;i++)printf("%c",num2[i]);
//
//	scanf("%d",&i);
//	return 0;
//}