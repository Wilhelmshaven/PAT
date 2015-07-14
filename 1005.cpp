//#include <stdio.h>
//
//int main(){
//	char c;
//	int i;
//	int sum=0;
//	for(i=1;;i++){
//		scanf("%c",&c);
//		if(c=='\n')break;
//		else sum=sum+c-48;
//	}
//	int result[4];
//	result[0]=sum%10;
//	result[1]=sum%100/10;
//	result[2]=sum%1000/100;
//	result[3]=sum/1000;
//
//
//	if(result[3]!=0){
//		if(result[3]==1)printf("one");
//		if(result[3]==2)printf("two");
//		if(result[3]==3)printf("three");
//		if(result[3]==4)printf("four");
//		if(result[3]==5)printf("five");
//		if(result[3]==6)printf("six");
//		if(result[3]==7)printf("seven");
//		if(result[3]==8)printf("eight");
//		if(result[3]==9)printf("nine");
//		for(i=2;i>=0;i--){
//			if(result[i]==1)printf(" one");
//			if(result[i]==2)printf(" two");
//			if(result[i]==3)printf(" three");
//			if(result[i]==4)printf(" four");
//			if(result[i]==5)printf(" five");
//			if(result[i]==6)printf(" six");
//			if(result[i]==7)printf(" seven");
//			if(result[i]==8)printf(" eight");
//			if(result[i]==9)printf(" nine");
//			if(result[i]==0)printf(" zero");
//		}
//	}else if(result[2]!=0){
//			if(result[2]==1)printf("one");
//			if(result[2]==2)printf("two");
//			if(result[2]==3)printf("three");
//			if(result[2]==4)printf("four");
//			if(result[2]==5)printf("five");
//			if(result[2]==6)printf("six");
//			if(result[2]==7)printf("seven");
//			if(result[2]==8)printf("eight");
//			if(result[2]==9)printf("nine");
//			for(i=1;i>=0;i--){
//				if(result[i]==1)printf(" one");
//				if(result[i]==2)printf(" two");
//				if(result[i]==3)printf(" three");
//				if(result[i]==4)printf(" four");
//				if(result[i]==5)printf(" five");
//				if(result[i]==6)printf(" six");
//				if(result[i]==7)printf(" seven");
//				if(result[i]==8)printf(" eight");
//				if(result[i]==9)printf(" nine");
//				if(result[i]==0)printf(" zero");
//			}
//	}else if(result[1]!=0){
//			if(result[1]==1)printf("one");
//			if(result[1]==2)printf("two");
//			if(result[1]==3)printf("three");
//			if(result[1]==4)printf("four");
//			if(result[1]==5)printf("five");
//			if(result[1]==6)printf("six");
//			if(result[1]==7)printf("seven");
//			if(result[1]==8)printf("eight");
//			if(result[1]==9)printf("nine");
//
//			if(result[0]==1)printf(" one");
//			if(result[0]==2)printf(" two");
//			if(result[0]==3)printf(" three");
//			if(result[0]==4)printf(" four");
//			if(result[0]==5)printf(" five");
//			if(result[0]==6)printf(" six");
//			if(result[0]==7)printf(" seven");
//			if(result[0]==8)printf(" eight");
//			if(result[0]==9)printf(" nine");
//			if(result[0]==0)printf(" zero");
//	}else{ 
//			if(result[0]==1)printf("one");
//			if(result[0]==2)printf("two");
//			if(result[0]==3)printf("three");
//			if(result[0]==4)printf("four");
//			if(result[0]==5)printf("five");
//			if(result[0]==6)printf("six");
//			if(result[0]==7)printf("seven");
//			if(result[0]==8)printf("eight");
//			if(result[0]==9)printf("nine");
//			if(result[0]==0)printf("zero");
//	}
//
//	scanf("%d",&i);
//	return 0;
//}