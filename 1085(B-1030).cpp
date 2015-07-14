//#include <stdio.h>
//#include <stdlib.h>
//
//int cmp(const void*a, const void*b)
//{
//	return *(long*)a - *(long*)b;
//}
//
//int main()
//{
//	int n;
//	long p;
//	int seq[100000];
//	long long min;
//	int result = 1; //最小是一个数
//
//	//input
//	scanf("%d%ld", &n, &p);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &seq[i]);
//	}
//
//	//sort seq
//	qsort(seq, n, sizeof(int), cmp);
//
//	//find
//	int pivot = 0;
//	//找出初始临界点,数列下标为0~pivot，长度为pivot+1
//	//注意防止下标越界
//	min = seq[0] * p;
//	for (int i = n - 1; i > 0; i--)
//	{
//		if (seq[i] > min)continue;
//
//		pivot = i;
//		result = i + 1;
//		break;
//	}
//	//游标遍历寻找最大长度
//	for (int i = 1; i < n; i++)
//	{
//		if (pivot == n - 1)break;
//		min = seq[i] * p;
//		if (min <= seq[pivot])continue;
//
//		//min>seq[pivot],意味着大数游标要往后面移动了
//		for (int j = pivot + 1; j < n; j++)
//		{		
//			if (seq[j] > min)break;
//			pivot = j;
//		}
//
//		//大数大于小数乘权重了，则计算子数列长度，新的大数坐标则是j
//		if (pivot - i + 1 > result)result = pivot - i + 1;
//	}
//
//	printf("%d", result);
//
//	return 0;
//}