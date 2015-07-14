//#include <stdio.h>
//#include <string.h>
////×Ê¸ñÈü
//
//typedef struct date
//{
//	char month[10];
//	int day;
//	long year;
//};
//
//int main()
//{
//	date start, end;
//
//	int n;
//	scanf("%d", &n);
//
//	char *Jan = "January";
//	char *Feb = "February";
//
//	for (int i = 0; i < n; i++)
//	{
//		long count = 0;
//
//		scanf("%s %d, %ld", &start.month, &start.day, &start.year);
//		scanf("%s %d, %ld", &end.month, &end.day, &end.year);
//
//		if (strcmp(start.month, Feb) == 0 && start.day == 29)
//		{
//			count++;
//			start.year++;
//		}
//		if (strcmp(end.month, Feb) == 0 && end.day == 29)
//		{
//			count++;
//			end.year--;
//		}
//
//		if (strcmp(end.month, Jan) == 0 || strcmp(end.month, Feb) == 0)end.year--;
//		if (strcmp(start.month, Jan) != 0 && strcmp(start.month, Feb) != 0)start.year++;
//
//		// This algorithm isn't designed for big data, obviously...
//		for (int j = start.year; j <= end.year; j++)
//		{
//			if ((j % 4 == 0 && j % 100 !=0) || (j % 400 == 0))count++;
//		}
//
//		printf("Case #%d: %ld\n", i + 1, count);
//
//	}
//
//	return 0;
//}