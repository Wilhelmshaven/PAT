//#include <stdio.h>
//#include <vector>
//
//using namespace std;
//
//int main(void)
//{
//	vector<double> a(1002);
//	double num;
//	int k, n, max = 0;
//
//	//ɨ���һ������ʽ���洢
//	scanf("%d", &k);
//	for (int i = 0; i < k; ++i)
//	{
//		scanf("%d %lf", &n, &num);
//		a[n] = num;
//		if (n > max)max = n;
//	}
//	//ɨ��ڶ�������ʽ��ֱ�Ӽӵ���һ������ʽ��
//	scanf("%d", &k);
//	for (int i = 0; i < k; ++i)
//	{
//		scanf("%d %lf", &n, &num);
//		a[n] += num;
//		if (n > max)max = n;
//	}
//
//	int cnt = 0;
//	for (int i = max; i >= 0; --i)if (a[i] != 0)++cnt;      //ע��Ϳ����Ǹ����������ǲ����ڶ����Ǵ���
//	printf("%d", cnt);
//	while (max >= 0)
//	{
//		if (a[max] != 0)printf(" %d %.1lf", max, a[max]);
//		--max;
//	}
//
//	return 0;
//}
//
//0	����ȷ	1	308	13 / 13
//1	����ȷ	1	308	2 / 2
//2	����ȷ	1	180	2 / 2
//3	����ȷ	1	308	2 / 2
//4	����ȷ	1	308	2 / 2
//5	����ȷ	1	308	2 / 2
//6	����ȷ	1	256	2 / 2