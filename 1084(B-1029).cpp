//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char line1[100], line2[100];
//	int result[38];
//	int n1, n2;
//
//	memset(&result, 0, 38);
//
//	gets(line1);
//	gets(line2);
//	n1 = strlen(line1);
//	n2 = strlen(line2);
//
//	for (int i = 0; i < n1; i++)
//	{
//		if (line1[i]>95)line1[i] = line1[i] - 32;
//	}
//	for (int i = 0; i < n2; i++)
//	{
//		if (line2[i]>95)line2[i] = line2[i] - 32;
//	}
//
//	int p1 = 0;
//	int p2 = 0;
//	int r = 0;
//	for (int i = 0;; i++)
//	{
//		if (p1>n1 || p2>n2)break;
//		if (line1[p1] != line2[p2])
//		{
//			int c = line1[p1];
//			int flag = 0;
//			for (int j = 0; j < r; j++)
//			{
//				if (result[j] == c)
//				{
//					flag = 1;
//					break;
//				}
//			}
//			if (flag == 0)
//			{
//				result[r] = c;
//				printf("%c", c);
//				r++;
//			}
//			p1++;
//		}
//		else
//		{
//			p1++;
//			p2++;
//		}
//	}
//
//	return 0;
//}