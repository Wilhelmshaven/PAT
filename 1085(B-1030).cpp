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
//	int result = 1; //��С��һ����
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
//	//�ҳ���ʼ�ٽ��,�����±�Ϊ0~pivot������Ϊpivot+1
//	//ע���ֹ�±�Խ��
//	min = seq[0] * p;
//	for (int i = n - 1; i > 0; i--)
//	{
//		if (seq[i] > min)continue;
//
//		pivot = i;
//		result = i + 1;
//		break;
//	}
//	//�α����Ѱ����󳤶�
//	for (int i = 1; i < n; i++)
//	{
//		if (pivot == n - 1)break;
//		min = seq[i] * p;
//		if (min <= seq[pivot])continue;
//
//		//min>seq[pivot],��ζ�Ŵ����α�Ҫ�������ƶ���
//		for (int j = pivot + 1; j < n; j++)
//		{		
//			if (seq[j] > min)break;
//			pivot = j;
//		}
//
//		//��������С����Ȩ���ˣ�����������г��ȣ��µĴ�����������j
//		if (pivot - i + 1 > result)result = pivot - i + 1;
//	}
//
//	printf("%d", result);
//
//	return 0;
//}