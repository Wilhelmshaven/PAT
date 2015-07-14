//#include <stdio.h>
//
//int main(){
//	int i,n;
//	char a,b;
//	int score1[3],score2[3];
//	int count1[3],count2[3];
//	int max=-1;//In case of 0:0
//	int c;
//
//	scanf("%d",&n);
//
//	//initialize
//	for(i=0;i<3;i++){
//		score1[i]=0;
//		score2[i]=0;
//		count1[i]=0;
//		count2[i]=0;
//	}
//
//	for(i=0;i<n;i++){
//		getchar();
//		scanf("%c %c",&a,&b);	
//		if(a=='B'){
//			if(b=='B'){
//				score1[1]++;
//				score2[1]++;
//			}else if(b=='C'){
//				count1[0]++;
//				score1[0]++;
//				score2[2]++;
//			}else if(b=='J'){
//				count2[2]++;
//				score1[2]++;
//				score2[0]++;
//			}
//		}else if(a=='C'){
//			if(b=='B'){
//				count2[0]++;
//				score1[2]++;
//				score2[0]++;
//			}else if(b=='C'){
//				score1[1]++;
//				score2[1]++;
//			}else if(b=='J'){
//				count1[1]++;
//				score1[0]++;
//				score2[2]++;
//			}
//		}else if(a=='J'){
//			if(b=='B'){
//				count1[2]++;
//				score1[0]++;
//				score2[2]++;
//			}else if(b=='C'){
//				count2[1]++;
//				score1[2]++;
//				score2[0]++;
//			}else if(b=='J'){
//				score1[1]++;
//				score2[1]++;
//			}
//		}
//	}
//
//	printf("%d %d %d\n",score1[0],score1[1],score1[2]);
//	printf("%d %d %d\n",score2[0],score2[1],score2[2]);
//
//	for(i=0;i<3;i++){
//		if(count1[i]>max){
//			max=count1[i];
//			c=i;
//		}
//	}
//	if(c==0)printf("B ");
//	if(c==1)printf("C ");
//	if(c==2)printf("J ");
//
//	max=-1;
//	for(i=0;i<3;i++){
//		if(count2[i]>max){
//			max=count2[i];
//			c=i;
//		}
//	}
//	if(c==0)printf("B");
//	if(c==1)printf("C");
//	if(c==2)printf("J");
//
//	return 0;
//}