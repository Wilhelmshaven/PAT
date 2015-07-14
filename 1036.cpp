//#include <stdio.h>
//
//int main(){
//	int i,j,k;
//	int n;
//	
//	char name[11],c[11],mname[11],mclass[11],fname[11],fclass[11];
//	char gender;
//	int grade;
//	int max=-1;
//	int min=101;
//	int sizen,sizec;
//	mname[0]='\n';
//	fname[0]='\n';
//
//	scanf("%d",&n);
//
//	for(i=0;i<n;i++){
//		getchar();
//		for(j=0;;j++){
//			scanf("%c",&name[j]);
//			if(name[j]==' '){
//				sizen=j;
//				break;
//			}
//		}
//		gender=getchar();
//		getchar();
//		for(j=0;;j++){
//			scanf("%c",&c[j]);
//			if(c[j]==' '){
//				sizec=j;
//				break;
//			}
//		}
//		scanf("%d",&grade);
//		if(gender=='M'&&grade<min){
//			min=grade;
//			for(j=0;j<=sizen;j++){
//				mname[j]=name[j];
//			}
//			for(j=0;j<=sizec;j++){
//				mclass[j]=c[j];
//			}
//		}
//		if(gender=='F'&&grade>max){
//			max=grade;
//			for(j=0;j<=sizen;j++){
//				fname[j]=name[j];
//			}
//			for(j=0;j<=sizec;j++){
//				fclass[j]=c[j];
//			}
//		}
//	}
//
//	int flag=0;
//	if(fname[0]!='\n'){
//		for(i=0;;i++){
//			printf("%c",fname[i]);
//			if(fname[i]==' ')break;
//		}
//		for(i=0;;i++){
//			if(fclass[i]==' ')break;
//			printf("%c",fclass[i]);
//		}
//		printf("\n");
//	}else{
//		flag=1;
//		printf("Absent\n");
//	}
//
//	if(mname[0]!='\n'){
//		for(i=0;;i++){
//			printf("%c",mname[i]);
//			if(mname[i]==' ')break;
//		}
//		for(i=0;;i++){
//			if(mclass[i]==' ')break;
//			printf("%c",mclass[i]);
//		}
//		printf("\n");
//	}else{
//		flag=1;
//		printf("Absent\n");
//	}
//	if(flag==1)printf("NA");
//	else printf("%d",max-min);
//
//
//	scanf("%d",&i);
//	return 0;
//}