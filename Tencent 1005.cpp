//#include <stdio.h>
//int temp[21];
//
//void reset(int i){
//	temp[i]=1;
//	temp[i+1]++;
//	if(temp[i+1]==4)reset(i+1);
//}
//
//int main(){
//	int a,b,t;
//	int i,j,k,sum;
//
//	a=1;
//	b=1;
//	t=1;
//	while(scanf("%d%d%d",&a,&b,&t)!= EOF){
//		int attack;
//		attack=t/15;          
//		b=b+attack/2;      //Final score
//
//		if(attack%2==1)attack=attack/2+1;
//		else attack=attack/2;
//
//		int score;
//		score=a-b;
//
//		int flag=0;
//		if(score<=0){
//			flag=1;
//			score=-score;
//		}
//
//		int count=0;
//
//		for(i=0;i<21;i++)temp[i]=1;
//		//Modify
//		/*
//		i=0;
//		for(j=0;j<=score;j=j+3){
//			if(score-j==attack-j/3){
//				for(i=attack-1;i>attack-j/3;i--)temp[i]=3;
//				break;
//			}
//			if(score-j<attack-j/3){
//				for(i=attack-1;i>attack-j/3+1;i++)temp[i]=3;
//				temp[attack-j/3]=2;
//				break;
//			}
//		}
//		*/
//		//End of Modify
//		if(flag==1){
//			j=0;
//			for(i=0;;i++){
//				sum=0;
//				for(k=0;k<attack;k++){
//					sum=sum+temp[k];
//				}
//				if(sum>score)count++;
//				temp[j]++;
//				if(temp[j]==4&&j!=attack-1)reset(j);
//				if(temp[attack]==2)break;
//			}
//		}else{
//			count=1;
//			for(i=0;i<attack;i++)count=count*3;
//		}
//
//		printf("%d\n",count);
//	}
//
//	return 0;
//}