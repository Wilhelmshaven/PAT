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
//				if (tmp - i > m) flag = false;  // A ������⡣����ǰ�������3��������7��Ҳ����˵����ջ�������װ��4��������������������ڵ���4
//				else max = min = tmp; // B1����������
//			}
//			else 
//			{
//				if (tmp > min) flag = false;  // B3�������С��֮������ǵݼ����У�Ҳ����˵����һ����һ��С������ִ��2
//				else min = tmp;      // B2��֮ǰ�Ѿ��������������ڼ����С��
//			}
//		}
//
//		if (flag) printf("YES\n");
//		else printf("NO\n");
//	}
//}
//
////0	����ȷ	1	308	15 / 15
////1	����ȷ	1	308	3 / 3
////2	����ȷ	1	308	2 / 2
////3	����ȷ	1	308	2 / 2
////4	����ȷ	1	180	1 / 1
////5	����ȷ	1	308	2 / 2