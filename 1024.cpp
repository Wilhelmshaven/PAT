//#include <stdio.h>
//
//int main(){
//	int k,i,j;
//	char number[100];
//	int pivot,cursor,count;
//	char input;
//	int flag;
//	int b;
//
//	for(i=0;i<100;i++)number[i]=48;
//
//	for(i=99;;i--){
//		scanf("%c",&input);
//		if(input!=' ')number[i]=input;
//		else{
//			pivot=i;
//			break;
//		}
//	}
//	scanf("%d",&k);
//
//	//check first
//	b=1;
//	for(i=1;;i++){
//		if(pivot+i>100-i)break;
//		if(number[pivot+i]!=number[100-i]){
//			b=0;
//			break;
//		}
//	}
//
//	if(b!=1){
//		count=0;
//		for(i=0;i<k;i++){
//			cursor=1;
//			for(;;){
//				if(100-cursor<pivot+cursor)break;
//				number[100-cursor]=number[100-cursor]+number[pivot+cursor]-48;
//				number[pivot+cursor]=number[100-cursor];
//				cursor++;
//			}//Add
//			for(j=99;j>pivot;j--){
//				if(number[j]>57){
//					number[j]=number[j]-10;
//					number[j-1]++;
//				}
//			}
//  			if(number[pivot]>48)pivot--;//Jin wei
//			flag=1;
//			for(j=1;;j++){
//				if(pivot+j>100-j)break;
//				if(number[pivot+j]!=number[100-j]){
//					flag=0;
//					break;
//				}
//			}
//			count++;
//			if(flag==1)break;//check
//		}
//
//		for(i=pivot+1;i<100;i++)printf("%c",number[i]);
//		printf("\n");
//		if(count!=0)printf("%d\n",count);
//		else printf("%d\n",k);
//	}
//	else{
//		for(i=pivot+1;i<100;i++)printf("%c",number[i]);
//		printf("\n");
//		printf("0\n");
//	}
//
//	return 0;
//}