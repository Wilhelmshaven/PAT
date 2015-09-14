////思路：顺序找出所有递增子序列并求其首位差，找出最大两个差
////是必须交易两次？以及应该默认了可以直接卖掉就买
//#include <stdio.h>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//
//	int myPrice[100001];
//	for (int i = 0; i < n; ++i)scanf("%d", &myPrice[i]);
//	
//	vector<int> sum;
//
//	int smallPivot = 0, bigPivot, tmp;
//
//	while (smallPivot < n - 1)
//	{
//		if (myPrice[smallPivot] >= myPrice[smallPivot + 1])++smallPivot;
//		else
//		{
//			bigPivot = smallPivot + 1;
//			while (1)
//			{
//				if (myPrice[bigPivot] <= myPrice[bigPivot + 1] && bigPivot<n - 1)++bigPivot;
//				else
//				{
//					//Find a smallest & biggest pair already
//					tmp = myPrice[bigPivot] - myPrice[smallPivot];
//
//					if (sum.size() < 2)sum.push_back(tmp);
//					else
//					{
//						if (tmp > sum[0] && sum[0] <= sum[1])sum[0] = tmp;
//						else if (tmp>sum[1] && sum[1] <= sum[0])sum[1] = tmp;
//					}
//
//					smallPivot = bigPivot;
//					break;
//				}
//			}
//		}
//	}
//
//	while (sum.size() < 2)
//	{
//		//如果进来了，说明整个序列的最大递增子序列只有一个
//		sum.push_back(0);
//	}
//	
//
//	printf("%d\n", sum[0] + sum[1]);
//
//	return 0;
//}
//
////5 4 3 1 2  :1
////5 4 3 2 1  :0
////1 2 3 5 4  :4
////1 2 3 4 5  :4
////1 2 3 5 5  :4
////1 3 3 2 2 4 4 9  :9