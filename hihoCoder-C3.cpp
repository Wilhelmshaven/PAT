//#include <stdio.h>
//#include <memory.h>
//#include <stdlib.h>
//
//static int prime[50000];        //enough
//static int matrix[1000][1000];
//
////快排函数
//int cmp(const void *a, const void *b)
//{
//	return *(int *)a - *(int *)b;
//}
//
////打印质数表
//int findPrime()
//{
//	prime[0] = 2;
//	prime[1] = 3;
//	int pivot = 2;
//	int flag = 1;
//
//	for (int i = 6; i < 500000; i = i + 6)
//	{
//		flag = 1;
//		for (int j = 0; j < pivot; j++)
//		{
//			if ((i - 1) % prime[j] == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			prime[pivot] = i-1;
//			pivot++;
//		}
//
//		flag = 1;
//		for (int j = 0; j < pivot; j++)
//		{
//			if ((i + 1) % prime[j] == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			prime[pivot] = i + 1;
//			pivot++;
//		}
//	}
//
//	return pivot;
//}
//
////判断是否是质数：查表法
//int isPrime(int num, int p)
//{
//	for (int i = 0; i < p; i++)
//	{
//		if (num == prime[i])
//		{
//			return 1;
//			break;
//		}
//		if (num < prime[i])
//		{
//			break;
//		}
//	}
//
//	return 0;
//}
//
////
//int main(void)
//{
//	int p = findPrime();
//
//	//
//	int t;
//	scanf("%d", &t);
//	
//	int num[1000];
//	int count[1000];
//	//
//	for (int i = 0; i < t; i++)
//	{
//		//
//		int n;
//		scanf("%d", &n);
//
//		//输入数组并排序
//		memset(num, 0, sizeof(int) * 1000);
//		for (int j = 0; j < n; j++)
//		{
//			scanf("%d", &num[j]);
//		}
//		qsort(num, n, sizeof(int), cmp);
//
//		memset(&matrix, 0, sizeof(int) * 1000000);
//
//		//如果有关系，则在矩阵相应位置打上1。同时统计矩阵每行1的个数
//		memset(count, 0, sizeof(int) * 1000);
//
//		for (int j = 0; j < n; j++)
//		{
//			for (int k = j + 1; k < n; k++)
//			{
//				if (num[k] % num[j] == 0)
//				{
//					if (isPrime(num[k] / num[j], p) == 1)
//					{
//						matrix[j][k] = matrix[k][j] = 1;
//						count[j]++;
//						count[k]++;
//					}
//				}
//			}
//		}
//
//		//从1最多的行开始，去掉这个数，同时把1改0，并刷新count数组。
//		//矩阵全为零，则此时为质数无关，输出
//		int result = 0;
//
//		for (int j = 0; j < n; j++)
//		{
//			//find max line
//			int max = 0;
//			int pivot = -1;
//			for (int k = 0; k < n; k++)
//			{
//				if (count[k]>max)
//				{
//					max = count[k];
//					pivot = k;
//				}
//			}
//
//			if (max == 0)
//			{
//				printf("Case #%d: %d\n", i + 1, n - result);
//				break;
//			}
//
//			//set zero
//			for (int k = 0; k < n; k++)
//			{
//				if (matrix[pivot][k] == 1)
//				{
//					matrix[pivot][k] = matrix[k][pivot] = 0;
//					count[pivot]--;
//					count[k]--;
//				}
//			}
//			result++;
//		}
//	}
//
//	return 0;
//}