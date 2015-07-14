//#include <stdio.h>
//
//int main(){
//	int n, i, j, pivot;
//	int num[100005];
//	int temp;
//	int count = 0;
//	int flag = 1;
//
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &num[i]);
//		if (num[i] == 0)pivot = i;
//	}
//
//	for (i = 0; i < n; i++)
//	{
//		flag = 1;
//		if (pivot == 0)
//		{
//			//If num[0]==0, swap with the nearest element.
//			for (j = 1; j < n; j++)
//			{
//				if (num[j] != j){
//					num[0] = num[j];
//					num[j] = 0;
//					pivot = j;
//					count++;
//					flag = 0;
//					break;
//				}
//			}
//		}
//		else
//		{
//			//If num[0]!=0, swap num[pivot](0) with pivot.
//			for (j = 0; j < n; j++){
//				if (num[j] == pivot)
//				{
//					num[pivot] = pivot;
//					num[j] = 0;
//					pivot = j;
//					count++;
//					flag = 0;
//					break;
//				}
//			}
//		}
//		if (flag == 1)break;
//	}
//
//	printf("%d", count);
//
//	return 0;
//}