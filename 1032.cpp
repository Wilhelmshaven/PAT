//#include <stdio.h>
//
//struct Node{
//	int address;
//	char data;
//	int next;
//	int flag;
//};
//
//int main(){
//	int n,start1,start2;
//	static struct Node nd[100000];
//	int i;
//	int pivot=0;
//	int mark=-1;
//
//	scanf("%d%d%d",&start1,&start2,&n);
//
//	for(i=0;i<n;i++){
//		scanf("%d %c %d",&nd[i].address,&nd[i].data,&nd[i].next);
//		nd[i].flag=0;
//	}
//
//	//for(;;){
//	//	for(i=0;i<n;i++){
//	//		if(nd[i].address==start1){
//	//			start1=nd[i].next;
//	//			nd[i].flag=1;
//	//			break;
//	//		}
//	//	}
//	//	if(start1==-1)break;
//	//}
//
//	int count=1;
//	int temp;
//	for(;;){
//		for(i=0;i<n+1-count;i++){
//			if(nd[i].address==start1){
//				start1=nd[i].next;
//				
//				//swap to the end;
//				temp=nd[n-count].address;
//				nd[n-count].address=nd[i].address;
//				nd[i].address=temp;
//				temp=nd[n-count].next;
//				nd[n-count].next=nd[i].next;
//				nd[i].next=temp;
//
//				//nd[n-count].flag=1;
//				count++;
//				break;
//			}
//		}
//		if(start1==-1)break;
//	}
//
//	//for(;;){
//	//	for(i=0;i<n;i++){
//	//		if(nd[i].address==start2){
//	//			if(nd[i].flag==1){
//	//				pivot=nd[i].address;
//	//				mark=1;
//	//				break;
//	//			}else{
//	//				start2=nd[i].next;
//	//				break;
//	//			}
//	//		}
//	//	}
//	//	if(start2==-1||mark==1)break;
//	//}
//	int c=0;
//	for(;;){
//		mark=-1;
//		for(i=c;i<n+1-count;i++){
//			if(nd[i].address==start2){
//				mark=0;//diff
//				start2=nd[i].next;
//
//				//swap to the top
//				temp=nd[c].address;
//				nd[c].address=nd[i].address;
//				nd[i].address=temp;
//				temp=nd[c].next;
//				nd[c].next=nd[i].next;
//				nd[i].next=temp;
//				c++;
//
//				break;
//			}
//		}
//		if(mark==-1){
//			for(i=n-count;i<n;i++){
//				if(nd[i].address==start2){
//					mark=1;
//					pivot=start2;
//					break;
//				}
//			}
//		}
//		if(start2==-1||mark==1)break;
//	}
//
//	if(mark==1)printf("%05d",pivot);
//	else printf("-1");
//
//	scanf("%d",&i);
//
//	return 0;
//}