//#include <stdio.h>
////������

//int main()
//{
//	int n;
//	long long t;
//	long long sum;
//
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%lld", &t);
//		sum = 0;
//
//		//����ÿһ������
//		for (int j = 1; j <= t; j++)
//		{
//			for (int k = 1; k <= t; k++)
//			{
//				for (int l = 1; l <= t; l++)
//				{
//					if ((j == k && k != l) || (j != k&&k == l) || (j == l&&l != k))
//					{
//						//�Ƿ������
//					}
//					else sum = sum + (t + 1 - j)*(t + 1 - k)*(t + 1 - l);
//					sum = sum % (1000000007);
//				}
//			}
//		}
//		printf("Case %d: %lld\n", i + 1, sum);
//	}
//
//	return 0;
//}