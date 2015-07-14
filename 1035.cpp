//#include <stdio.h>
//
//int main(){
//    int n;
//    char record[1000][23];
//    char temp;
//    int length,blank;
//    int i,j,count,flag;
//    count=0;
//    
//    //initialize
//    for(i=0;i<1000;i++)record[i][21]=0;
//    
//    scanf("%d",&n);
//    getchar();
//    for(i=0;i<n;i++){
//        length=0;
//        for(j=0;;j++){
//            temp=getchar();
//            if(temp=='\n')break;
//            if(temp==' ')blank=j;
//            record[i][length]=temp;
//            length++;
//        }
//        //check
//        flag=0;
//        for(j=blank;j<length;j++){
//            if(record[i][j]=='1'){
//                flag=1;
//                record[i][j]='@';
//            }
//            if(record[i][j]=='0'){
//                flag=1;
//                record[i][j]='%';
//            }
//            if(record[i][j]=='O'){
//                flag=1;
//                record[i][j]='o';
//            }
//            if(record[i][j]=='l'){
//                flag=1;
//                record[i][j]='L';
//            }
//        }
//        if(flag==1){
//            count++;
//            record[i][21]=1;
//        }
//        record[i][22]=length;
//    }
//
//    if(count!=0){
//        printf("%d\n",count);
//        for(i=0;i<n;i++){
//            if(record[i][21]==1){
//                for(j=0;j<record[i][22];j++){
//                    printf("%c",record[i][j]);
//                }
//                printf("\n");
//            }
//        }
//    }else if(n!=1)printf("There are %d accounts and no account is modified\n",n);
//    else printf("There is 1 account and no account is modified\n");
//    
//    return 0;
// }
