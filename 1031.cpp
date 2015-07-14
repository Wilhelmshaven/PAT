//#include <stdio.h>
//
//int main(){
//    char c[80];
//    int height,begin,end,size,bottom;
//    int i,j;
//    
//    char temp;
//    size=0;
//    for(i=0;;i++){
//        temp=getchar();
//        if(temp!='\n'){
//            c[size]=temp;
//            size++;
//        }else break;
//    }
//    
//    height=size/3+1;
//    bottom=size-height*2;
//    if(bottom==0||bottom<height-2){
//        bottom=bottom+2;
//        height--;
//    }
//    
//    begin=0;
//    end=size-1;
//    for(i=0;i<height-1;i++){
//        printf("%c",c[begin]);
//        for(j=0;j<bottom;j++)printf(" ");
//        printf("%c\n",c[end]);
//        begin++;
//        end--;
//    }
//    for(i=begin;i<=end;i++)printf("%c",c[i]);
//    printf("\n");
//    
//    return 0;
// }
