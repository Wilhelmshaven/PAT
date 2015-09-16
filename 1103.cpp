//#include <stdio.h>
//#include <vector>
//#include <cmath>
//
//using namespace std;
//
//int n, k, p, thisEnd;
//vector<int> powList, record;
//vector<vector<int>> result;
//
//void factorization(int pivot, int level, int sum)
//{
//	int i = pivot;
//	int thisSum;
//	while (i > 0)
//	{
//		if (level == 0 && i < thisEnd)break;
//		record.push_back(i);
//		thisSum = sum + powList[i];
//
//		//根据所处层级采取对应策略
//		if (level < k - 1)
//		{
//			if (thisSum < n)factorization(i, level + 1, thisSum); //和小了，就进入下一级
//			record.pop_back();                                  //不论是否进入下一级，都要弹出当前记录
//		}
//		else
//		{
//			////打个表看看优化效果
//			//for (int j = 0; j < k; ++j)printf("%d ", record[j]);
//			//printf("\n");
//
//			//这里是最后一级了
//			if (thisSum != n)
//			{
//				record.pop_back();       //反正不等于就要弹出
//				if (thisSum < n)break;   //小于，就是没有等于了，那就不用继续了
//			}
//			else
//			{
//				//正好合适，那就是一个解，当然也不用继续了
//				result.push_back(record);
//				record.pop_back();
//				break;
//			}
//		}
//
//		--i;
//	}
//}
//
//int main(void)
//{
//	int tmp;
//	scanf("%d %d %d", &n, &k, &p);
//
//	//打印幂表
//	for (int i = 0;;++i)
//	{
//		tmp = pow(i, p);
//		if (tmp > n)break;
//		powList.push_back(tmp);
//	}
//
//	size_t size = powList.size();
//	//稍微优化一下终点
//	for (int i = size - 1; i >= 0; --i)
//	{
//		if (powList[i] * k < n)
//		{
//			thisEnd = i + 1;
//			break;
//		}
//	}
//	factorization(size - 1, 0, 0);
//
//	size = result.size();
//	if (size > 0)
//	{
//		//找最大
//		int pivot, max = -1;
//		for (size_t i = 0; i < size; ++i)
//		{
//			tmp = 0;
//			for (int j = 0; j < k; ++j)tmp += result[i][j];
//			if (tmp > max)
//			{
//				max = tmp;
//				pivot = i;
//			}
//		}
//
//		//输出
//		printf("%d = %d^%d", n, result[pivot][0], p);
//		for (int i = 1; i < k; ++i)printf(" + %d^%d", result[pivot][i], p);
//		printf("\n");
//	}
//	else printf("Impossible\n");
//
//	return 0;
//}
//
////0	答案正确	1	308	15 / 15
////1	答案正确	1	180	2 / 2
////2	答案正确	1	256	5 / 5
////3	答案正确	1	256	1 / 1
////4	答案正确	1	252	1 / 1
////5	答案正确	265	5428	3 / 3
////6	答案正确	1	308	2 / 2
////7	答案正确	1	308	1 / 1