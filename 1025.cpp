//#include <stdio.h>
////#include <memory.h>
//#include <stdlib.h>
//
//typedef struct PATScore
//{
//	long long regNum;      //注册号
//	int finalRank;         //最终排名
//	int locNum;            //场编号
//	int locRank;           //场排名
//	int score;             //分数
//};
//
//int cmp(const void *a, const void *b)
//{
//	PATScore *c = (PATScore *)a;
//	PATScore *d = (PATScore *)b;
//
//	if (c->score != d->score)return d->score - c->score;
//	else return c->regNum - d->regNum;
//}
//
//int main()
//{
//	PATScore ps[300];
//	static PATScore psFinal[30000];
//
//	int n;
//	scanf("%d", &n);
//
//	int stuCount = 0;  //学生计数，兼做指针
//
//	for (int i = 0; i < n; i++)
//	{
//		int k;
//		scanf("%d", &k);
//		//memset(ps, 0, sizeof(PATScore));
//
//		if (k > 0)
//		{
//			//input
//			for (int j = 0; j < k; j++)
//			{
//				scanf("%lld %d", &ps[j].regNum, &ps[j].score);
//				ps[j].locNum = i + 1;          // Write location number
//			}
//
//			//SORT
//			qsort(ps, k, sizeof(PATScore), cmp);
//
//			//location RANK
//			int rank = 1;
//			ps[0].locRank = 1;
//			psFinal[stuCount] = ps[0];
//			++stuCount;
//
//			for (int j = 1; j < k; j++)
//			{
//				if (ps[j].score != ps[j - 1].score)
//				{
//					rank++;
//					if (rank < j + 1)rank = j + 1;
//				}
//				ps[j].locRank = rank;
//
//				psFinal[stuCount] = ps[j];
//				++stuCount;
//			}
//		}
//	}
//
//	qsort(psFinal, stuCount, sizeof(PATScore), cmp);   //优化：本来就场均有序，其实可以归并。另，一开始就可以合起来读然后分段sort
//
//	//PRINT
//	printf("%d\n", stuCount);
//	if (stuCount != 0)
//	{
//		int rank = 1;
//		psFinal[0].finalRank = 1;
//		printf("%lld %d %d %d\n", psFinal[0].regNum, psFinal[0].finalRank, psFinal[0].locNum, psFinal[0].locRank);
//
//		for (int i = 1; i < stuCount; i++)
//		{
//			if (psFinal[i].score != psFinal[i - 1].score)rank = i + 1;
//			psFinal[i].finalRank = rank;
//
//			printf("%lld %d %d %d\n", psFinal[i].regNum, psFinal[i].finalRank, psFinal[i].locNum, psFinal[i].locRank);
//		}
//	}
//
//	return 0;
//}
//
////0	答案正确	1	364	13 / 13
////1	答案错误	1	236	0 / 6
////2	答案正确	1	244	3 / 3
////3	答案错误	22	1720	0 / 3