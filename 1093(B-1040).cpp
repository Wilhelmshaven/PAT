//#include <stdio.h>
//
//int main()
//{
//	static int p[100001] = { 0 }, a[100001] = { 0 }, t[100001] = { 0 };
//	int pp = 0, aa = 0, tt = 0;
//	int pivot[3] = { 0 };
//	char c;
//	long count = 0;
//	
//	int flag = 0;
//	for (int i = 0;; i++)
//	{
//		c = getchar();
//		switch (c)
//		{
//		case 'P':
//		{
//			p[pp] = i;
//			pp++;
//			break;
//		}
//		case 'A':
//		{
//			a[aa] = i;
//			aa++;
//			break;
//		}
//		case 'T':
//		{
//			t[tt] = i;
//			tt++;
//			break;
//		}
//		default:
//		{
//			flag = 1;
//			break;
//		}
//		}
//		if (flag == 1)break;
//	}
//
//	//����ÿ��a,�ҳ��ж��ٸ�p��aС����ǰ�棩���ж��ٸ�t��a���ں��棩
//	for (int i = 0; i < aa; i++)
//	{
//		for (int j = 0;; j++)
//		{
//			if (pivot[0] == pp)break;
//			if (p[pivot[0]] < a[i])pivot[0]++;
//			else break;
//		}
//		for (int j = 0;; j++)
//		{
//			if (pivot[2] == tt)break;
//			if (t[pivot[2]] < a[i])pivot[2]++;
//			else break;
//		}
//		count = pivot[0] * (tt - pivot[2]) + count;
//		if (count > 1000000007)count = count % 1000000007;
//	}
//
//	printf("%ld", count);
//	return 0;
//}