//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//typedef struct Record
//{
//	int num;
//	char name[10];
//	int score;
//};
//
//static Record rec[100000];
//
//int compByNum(const void *a, const void *b)
//{
//	Record *c = (Record *)a;
//	Record *d = (Record *)b;
//
//	return c->num - d->num;
//}
//
//int compByName(const void *a, const void *b)
//{
//	Record *c = (Record *)a;
//	Record *d = (Record *)b;
//
//	if (strcmp(c->name,d->name)==0)
//	{
//		return c->num - d->num;
//	}
//	else
//	{
//		for (int i = 0; i < 10; i++)
//		{
//			if (c->name[i] != d->name[i])
//			{
//				return c->name[i] - d->name[i];
//			}
//		}
//	}
//}
//
//int compByScore(const void *a, const void *b)
//{
//	Record *c = (Record *)a;
//	Record *d = (Record *)b;
//
//	if (c->score == d->score)
//	{
//		return c->num - d->num;
//	}
//	else
//	{
//		return c->score - d->score;
//	}
//}
//
//int main()
//{
//	int n,c;
//	scanf("%d%d", &n, &c);
//
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d %s %d", &rec[i].num, &rec[i].name, &rec[i].score);
//	}
//
//	//Simulate sorting
//	switch (c)
//	{
//	case 1:
//	{
//		qsort(rec, n, sizeof(Record), compByNum);
//		break;
//	}
//	case 2:
//	{
//		qsort(rec, n, sizeof(Record), compByName);
//		break;
//	}
//	case 3:
//	{
//		qsort(rec, n, sizeof(Record), compByScore);
//		break;
//	}
//	default:
//		break;
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		printf("%06d %s %d\n", rec[i].num, rec[i].name, rec[i].score);
//	}
//
//	return 0;
//}