//#include <stdio.h>
////#include <Windows.h>
//#include <stdlib.h>
//
//typedef struct ListGrade
//{
//	char name[11];
//	char ID[11];
//	int grade;
//	int print;
//};
//
//int cmp(const void *p1, const void *p2)
//{
//	ListGrade *a = (ListGrade *)p1;
//	ListGrade *b = (ListGrade *)p2;
//	return -(a->grade - b->grade);
//}
//
//int main()
//{
//	int n;
//	ListGrade *lg = new ListGrade[101];
//	int min, max;
//
//	//ZeroMemory(lg, sizeof(ListGrade));
//
//	scanf("%d", &n);
//
//	char c;
//	for (int i = 0; i < n; i++)
//	{
//		getchar();
//		for (int j = 0;; j++)
//		{
//			c = getchar();
//			if (c != ' ')
//			{
//				lg[i].name[j] = c;
//			}
//			else
//			{
//				lg[i].name[j] = '\0';
//				break;
//			}
//		}
//		for (int j = 0;; j++)
//		{
//			c = getchar();
//			if (c != ' ')
//			{
//				lg[i].ID[j] = c;
//			}
//			else
//			{
//				lg[i].ID[j] = '\0';
//				break;
//			}
//		}
//		scanf("%d", &lg[i].grade);
//		lg[i].print = 0;
//	}
//
//	scanf("%d %d", &min, &max);
//
//	qsort(lg, n, sizeof(ListGrade), cmp);
//
//	int count = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (lg[i].grade >= min && lg[i].grade <= max)
//		{
//			count++;
//			lg[i].print = 1;
//		}
//	}
//
//	if (count > 0)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			if (lg[i].print == 1)
//			{
//				printf("%s %s\n", lg[i].name, lg[i].ID);
//			}
//		}
//	}
//	else printf("NONE\n");
//	
//	return 0;
//}