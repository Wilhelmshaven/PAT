//#include <stdio.h>
//#include <memory.h>
//#include <stdlib.h>
//
//static int prime[50000];        //enough
//static int matrix[1000][1000];
//
////���ź���
//int cmp(const void *a, const void *b)
//{
//	return *(int *)a - *(int *)b;
//}
//
////��ӡ������
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
////�ж��Ƿ������������
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
//		//�������鲢����
//		memset(num, 0, sizeof(int) * 1000);
//		for (int j = 0; j < n; j++)
//		{
//			scanf("%d", &num[j]);
//		}
//		qsort(num, n, sizeof(int), cmp);
//
//		memset(&matrix, 0, sizeof(int) * 1000000);
//
//		//����й�ϵ�����ھ�����Ӧλ�ô���1��ͬʱͳ�ƾ���ÿ��1�ĸ���
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
//		//��1�����п�ʼ��ȥ���������ͬʱ��1��0����ˢ��count���顣
//		//����ȫΪ�㣬���ʱΪ�����޹أ����
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