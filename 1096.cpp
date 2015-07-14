//#include <stdio.h>
//#include <stdlib.h>
//
//int cmp(const void *a, const void *b)
//{
//	return *(long *)a - *(long *)b;
//}
//
//int main()
//{
//	long n;
//	long factor[100];
//
//	scanf("%ld", &n);
//
//	int pivot = 0;
//	for (int i = 2;; i++)
//	{
//		if (n%i == 0)
//		{
//			factor[pivot] = i;
//			pivot++;
//			n = n / i;
//
//		}
//		if (i > n)break;
//	}
//	if (n != 0)
//	{
//		factor[0] = factor[0] * n;
//		qsort(factor, pivot, sizeof(long), cmp);
//	}
//
//	int count = 1;
//	int max = 0;
//	int len = pivot;
//	for (int i = 0; i < len; i++)
//	{
//		if (factor[i + 1] == factor[i] + 1)
//		{
//			count++;
//		}
//		else
//		{
//			if (count > max)
//			{
//				max = count;
//				pivot = i - max + 1;
//			}
//			count = 1;
//		}
//	}
//
//	printf("%d\n", max);
//	for (int i = pivot;; i++)
//	{
//		printf("%ld", factor[i]);
//		max--;
//		if (max > 0)printf("*");
//		else break;
//	}
//
//
//	return 0;
//}