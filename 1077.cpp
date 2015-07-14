//#include <stdio.h>
//
//int main(){
//	int n,i,j,k,flag;
//	char s[100][257],c,result[256];
//
//	scanf("%d",&n);
//	getchar();
//
//	for(i=0;i<n;i++){
//		for(j=1;;j++){
//			c=getchar();
//			if(c!='\n')s[i][j]=c;
//			else{
//				s[i][0]=j-1;
//				break;
//			}
//		}
//	}
//
//	k=0;
//	flag=0;
//	for(;;){
//		for(i=1;i<n;i++){
//			if(s[0][s[0][0]-k]!=s[i][s[i][0]-k] || s[0][s[0][0]-k]==' '){
//				flag=1;
//				break;
//			}
//		}
//		if(flag==1)break;
//		else{
//			result[k]=s[0][s[0][0]-k];
//			k++;
//		}
//	}
//
//	if(k!=0){
//		for(i=k-1;i>0;i--)printf("%c",result[i]);
//		if(i==0 && result[i]!=' ')printf("%c",result[0]);
//	}
//	else printf("nai\n");
//
//	return 0;
//}