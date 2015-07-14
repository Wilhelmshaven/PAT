//#include <stdio.h>
// 
//int main(){
//
//    char cc,g[7],s[2],kk[2];
//    int a,b,c,i,j,k;
//    int num;
//    int r1,r2,r3;
//    
//    r1=0;
//    r2=0;
//    r3=0;
//
//    for(j=0;j<2;j++){
//        for(i=0;;i++){
//            cc=getchar();
//            //printf("%c\n",cc);
//            if(cc=='.')break;
//            g[i]=cc;
//            a=i;
//        }
//        num=0;
//        for(k=0;k<a+1;k++){
//            num=num*10+g[k]-48;
//            //printf("$$%d%d\n",g[k],num);
//        }
//        r1=r1+num;
//        //printf("%d",r1);
//        
//        for(i=0;;i++){
//            cc=getchar();
//            //printf("%c\n",cc);
//            if(cc=='.')break;
//            s[i]=cc;
//            b=i;
//        }
//        num=0;
//        for(k=0;k<b+1;k++){
//            num=num*10+s[k]-48;
//        }
//        r2=r2+num;
//        
//        for(i=0;;i++){
//            cc=getchar();
//            //printf("%c\n",cc);
//            if(cc==' '||cc=='\n')break;
//            kk[i]=cc;
//            c=i;
//        }
//        num=0;
//        for(k=0;k<c+1;k++){
//            num=num*10+kk[k]-48;
//        }
//        r3=r3+num;
//    }
//    
//    if(r3>28){
//        r3=r3-29;
//        r2++;
//    }
//    if(r2>16){
//        r2=r2-17;
//        r1++;
//    }
//    
//    printf("%d.%d.%d\n",r1,r2,r3);
//   return 0;
// }
//
//    
