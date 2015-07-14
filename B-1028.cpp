//#include <stdio.h>
//
//char youngest[6], oldest[6];
//int min[3] = { 0, 0, 0 };
//int max[3] = { 9999, 99, 99 };
//
//void SaveYoung(int y, int m, int d, char *name)
//{
//	for (int i = 0; i < 5; i++)
//	{
//		youngest[i] = name[i];
//	}
//	min[0] = y;
//	min[1] = m;
//	min[2] = d;
//}
//
//void SaveOld(int y, int m, int d, char *name)
//{
//	for (int i = 0; i < 5; i++)
//	{
//		oldest[i] = name[i];
//	}
//	max[0] = y;
//	max[1] = m;
//	max[2] = d;
//}
//
//int main()
//{
//	int n;
//	int save;
//	int y, m, d;
//	int count = 0;
//	scanf("%d", &n);
//
//	char temp[20];
//
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%s %d/%d/%d", &temp, &y, &m, &d);
//
//		//Unborn
//		if (y > 2014)continue;
//		else if (y == 2014)
//		{
//			if (m > 9)continue;
//			else if (m == 9 && d > 6)continue;
//			else count++;
//			
//		}
//		else if (y < 1814)continue;
//		else if (y == 1814)
//		{
//			if (m < 9)continue;
//			else if (m == 9 && d < 6)continue;
//			else count++;
//		}
//		else count++;
//
//		//Youngest
//		save = 0;
//		if (y > min[0])
//		{
//			save = 1;
//		}
//		else if (y == min[0])
//		{
//			if (m > min[1])
//			{
//				save = 1;
//			}
//			else if (m == min[1] && d > min[2])
//			{
//				save = 1;
//			}
//		}
//		if (save == 1)SaveYoung(y, m, d, temp);
//
//		//Oldest
//		save = 0;
//		if (y < max[0])
//		{
//			save = 1;
//		}
//		else if (y == max[0])
//		{
//			if (m < max[1])
//			{
//				save = 1;
//			}
//			else if (m == max[1] && d < max[2])
//			{
//				save = 1;
//			}
//		}
//		if (save == 1)SaveOld(y, m, d, temp);
//	}
//
//	if(count!=0)printf("%d %s %s\n", count, oldest, youngest);
//	else printf("0\n");
//
//	return 0;
//}