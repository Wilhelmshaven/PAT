//#include <stdio.h>
//#include <math.h>
//
//int main(void)
//{
//	int n;
//	scanf("%d", &n);
//
//	int pivot = n, count = 0;
//	int start = n, max = 0, tmp = n;
//	int m = sqrt((double)n) + 1;
//
//	//直接试除即可
//	for (int i = 2; i <= m; ++i)
//	{
//		if (i > n)break;
//
//		if (n%i == 0)
//		{
//			pivot = i;
//			count = 0;
//			tmp = n;
//			while (tmp%pivot == 0)
//			{
//				tmp = tmp / pivot;
//				++pivot;
//				++count;
//			}
//			if (count > max)
//			{
//				max = count;
//				start = i;
//			}
//		}
//
//	}
//
//	//输出
//	if (max == 0)printf("1\n%d\n", n);
//	else
//	{
//		printf("%d\n", max);
//		for (int i = 0; i < max - 1; ++i)
//		{
//			printf("%d*", start + i);
//		}
//		printf("%d", start + max - 1);
//	}
//
//	return 0;
//}
//
////0	答案正确	1	308	10 / 10
////1	答案正确	1	308	2 / 2
////2	答案正确	1	180	2 / 2
////3	答案正确	1	308	2 / 2
////4	答案正确	1	308	2 / 2
////5	答案正确	1	256	1 / 1
////6	答案正确	1	308	1 / 1