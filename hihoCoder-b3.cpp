//#include <stdio.h>
//#include <math.h>
////资格赛
//
//int main()
//{
//	int t;
//	scanf("%d", &t);
//
//	static int company[101][2] = { 0 };
//
//	for (int i = 0; i < t; i++)
//	{
//		int n, m, a, b;
//		scanf("%d %d %d %d", &n, &m, &a, &b);
//
//		//大数据的话，呵呵……呵呵啊呵呵……
//		//用户代价计算，采用数学化简；
//		//公司代价计算，直接算，因为其公式带有绝对值，无法化简；
//		long x, y, xx, yy;
//		x = y = xx = yy = 0;
//
//		for (int j = 0; j < a; j++)
//		{
//			int p, q;
//			scanf("%d%d", &p, &q);
//			x = x + p;
//			y = y + q;
//			xx = xx + p*p;
//			yy = yy + q*q;
//		}
//		for (int j = 1; j <= b; j++)
//		{
//			scanf("%d%d", &company[j][0], &company[j][1]);
//		}
//
//		long min = 1000000000; 
//		long cost = 0;
//		
//		for (int p = 1; p <= n; p++)
//		{
//			for (int q = 1; q <= m; q++)
//			{
//				cost = 0;
//				for (int k = 1; k <= b; k++)
//				{
//					cost = cost + abs(p - company[k][0]) + abs(q - company[k][1]);
//				}
//				cost = cost + a*(p*p) + a*(q*q) - 2 * p*x - 2 * q*y;
//				if (cost < min)min = cost;
//			}
//		}
//		min = min + xx + yy;
//
//		printf("Case #%d: %ld\n", i + 1, min);
//	}
//
//	return 0;
//}