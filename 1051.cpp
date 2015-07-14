//#include<stdio.h>
//
//int main(void)
//{
//	int m, n, k;
//	int max, min, tmp;
//	bool flag;
//
//	scanf("%d %d %d", &m, &n, &k);
//
//	for (int i = 0; i < k;i++)
//	{
//		flag = true;
//		max = 0;
//		min = 1001;
//
//		for (int i = 0; i < n; i++)
//		{
//			scanf("%d", &tmp);
//
//			if (tmp > max) 
//			{
//				if (tmp - i > m) flag = false;  // A 容量检测。例：前面最大是3，现在是7，也就是说后面栈里必须能装下4个数，所以容量必须大于等于4
//				else max = min = tmp; // B1、标记最大数
//			}
//			else 
//			{
//				if (tmp > min) flag = false;  // B3、最大最小数之间必须是递减数列，也就是说必须一个比一个小，依次执行2
//				else min = tmp;      // B2、之前已经检出最大数，现在检出最小数
//			}
//		}
//
//		if (flag) printf("YES\n");
//		else printf("NO\n");
//	}
//}
//
////0	答案正确	1	308	15 / 15
////1	答案正确	1	308	3 / 3
////2	答案正确	1	308	2 / 2
////3	答案正确	1	308	2 / 2
////4	答案正确	1	180	1 / 1
////5	答案正确	1	308	2 / 2