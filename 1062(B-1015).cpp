//#include <stdio.h>
//#include <stdlib.h>
//
//struct Score
//{
//	int ID;
//	int virtue;
//	int talent;
//	int total;
//};
//
//int cmp(const void *a,const void *b)
//{
//	Score *c = (Score *)a;
//	Score *d = (Score *)b;
//	if (c->total != d->total)return d->total - c->total;
//	else if (c->virtue != d->virtue)return d->virtue - c->virtue;
//	else return c->ID - d->ID;
//}
//
//int main(){
//	int i, j;
//	int n, l, h;
//	static Score score[4][100000];//type num {name s1,s2,total}
//	int s[4] = { 0 };
//	int temp[3];
//	int count = 0;
//	int p[3];
//
//	scanf("%d%d%d", &n, &l, &h);
//
//	//input and distinguish
//	int type;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d%d%d", &temp[0], &temp[1], &temp[2]);
//		if (temp[1] >= l&&temp[2] >= l)
//		{
//			count++;
//			if (temp[1] >= h)
//			{
//				if (temp[2] >= h)
//				{
//					type = 0;
//				}
//				else
//				{
//					type = 1;
//				}
//			}
//			else
//			{
//				if (temp[1] >= temp[2])
//				{
//					type = 2;
//				}
//				else
//				{
//					type = 3;
//				}
//			}
//			score[type][s[type]].ID = temp[0];
//			score[type][s[type]].virtue = temp[1];
//			score[type][s[type]].talent = temp[2];
//			score[type][s[type]].total = temp[2] + temp[1];
//			s[type]++;
//		}
//	}
//
//	//Sorting, Virtue First，结构体三级排序
//	qsort(score[0], s[0], sizeof(int) * 4, cmp);
//	qsort(score[1], s[1], sizeof(int) * 4, cmp);
//	qsort(score[2], s[2], sizeof(int) * 4, cmp);
//	qsort(score[3], s[3], sizeof(int) * 4, cmp);
//	
//	//output
//	printf("%d\n", count);
//	for (j = 0; j < s[0]; j++)
//	{
//		printf("%d %d %d\n", score[0][j].ID, score[0][j].virtue, score[0][j].talent);
//	}
//	for (j = 0; j < s[1]; j++)
//	{
//		printf("%d %d %d\n", score[1][j].ID, score[1][j].virtue, score[1][j].talent);
//	}
//	for (j = 0; j < s[2]; j++)
//	{
//		printf("%d %d %d\n", score[2][j].ID, score[2][j].virtue, score[2][j].talent);
//	}
//	for (j = 0; j < s[3]; j++)
//	{
//		printf("%d %d %d\n", score[3][j].ID, score[3][j].virtue, score[3][j].talent);
//	}
//	
//	return 0;
//}