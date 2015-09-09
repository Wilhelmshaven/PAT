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
//	//扫描第一个多项式并存储
//	scanf("%d", &k);
//	for (int i = 0; i < k; ++i)
//	{
//		scanf("%d %lf", &n, &num);
//		a[n] = num;
//		if (n > max)max = n;
//	}
//	//扫描第二个多项式并直接加到第一个多项式上
//	scanf("%d", &k);
//	for (int i = 0; i < k; ++i)
//	{
//		scanf("%d %lf", &n, &num);
//		a[n] += num;
//		if (n > max)max = n;
//	}
//
//	int cnt = 0;
//	for (int i = max; i >= 0; --i)if (a[i] != 0)++cnt;      //注意和可能是负数，所以是不等于而不是大于
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
//0	答案正确	1	308	13 / 13
//1	答案正确	1	308	2 / 2
//2	答案正确	1	180	2 / 2
//3	答案正确	1	308	2 / 2
//4	答案正确	1	308	2 / 2
//5	答案正确	1	308	2 / 2
//6	答案正确	1	256	2 / 2