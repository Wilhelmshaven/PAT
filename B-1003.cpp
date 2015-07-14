//#include <stdio.h>
//
//int main(){
//	int n;
//	scanf("%d",&n);
//	int i,j;
//	char p,t;
//	int flag1,flag2;
//	//char a[100],b[100],c[100];
//	int ax,bx,cx,ansflag,answer;
//	getchar();
//	for(i=1;i<=n;i++){
//		ansflag=1;
//		ax=0;
//		bx=0;
//		cx=0;
//		flag1=0;
//		flag2=0;
//		for(j=1;j<=100;j++){
//			scanf("%c",&p);
//			if(p=='\n')break;
//			if(j==100&&p!='\n')getchar();
//			if(p!='P'&&p!='A'&&p!='T'){
//				answer=0;
//				ansflag=0;
//				//break;
//			}
//
//			if(p=='P'&&flag1!=0){
//				answer=0;
//				ansflag=0;
//				//break;
//			}
//			if(p=='T'&&flag2!=0){
//				answer=0;
//				ansflag=0;
//				//break;
//			}
//
//			if(p=='P'&&flag1==0)flag1=j;
//			if(p=='T'&&flag2==0)flag2=j;
//
//			if(p=='A'){
//				if(flag1==0&&flag2==0){
//					//a[ax]=p;
//					ax++;
//				}
//				if(flag1!=0&&flag2==0){
//					//b[bx]=p;
//					bx++;
//				}
//				if(flag1!=0&&flag2!=0){
//					//c[cx]=p;
//					cx++;
//				}
//			}
//		}
//		//Judge
//		if(ansflag==1){
//			if(bx==1){
//				if(ax==0&&cx==0)answer=1;
//				else if(ax==cx)answer=1;
//				else if(cx==2*ax)answer=1;
//				else answer=0;
//			}else if(bx==2){
//				if(ax==0&&cx==0)answer=1;
//				//else if(ax==cx)answer=1;
//				else if(cx==2*ax)answer=1;
//				else answer=0;
//			}else answer=0;
//			if(flag1==0||flag2==0)answer=0;
//			if(bx>2&&cx==bx*ax)answer=1;
//		}
//
//		if(answer==1)printf("YES\n");
//		else printf("NO\n");
//	}
//	scanf("%d",&i);
//	return 0;
//}