//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct Profile
//{
//	int userID;
//	int totalScore = 0;
//	int score[6];
//	int perfectProblem = 0;
//	bool isSubmit = false;
//};
//
//int cmp(const void *a, const void *b)
//{
//	Profile c = *(Profile *)a;
//	Profile d = *(Profile *)b;
//
//	if (c.totalScore == d.totalScore)
//	{
//		if (c.perfectProblem == d.perfectProblem)
//		{
//			return c.userID - d.userID;
//		}
//		else return d.perfectProblem - c.perfectProblem;
//	}
//	else return d.totalScore - c.totalScore;
//}
//
//int main()
//{
//	Profile user[10001];
//
//	int n, k, m;
//	scanf("%d%d%d", &n, &k, &m);
//
//	//DAMN initialize
//	for (int i = 0; i <= n; ++i)
//	{
//		user[i].userID = i;
//		for (int j = 1; j < 6; ++j)user[i].score[j] = -1;
//	}
//
//	int fullMark[6];
//	for (int i = 1; i < k + 1; ++i)scanf("%d", &fullMark[i]);
//
//	int id, problem, score;
//	for (int i = 0; i < m; ++i)
//	{
//		scanf("%d%d%d", &id, &problem, &score);
//
//		// Once submit, no more -1.
//		if (user[id].score[problem] == -1)
//		{
//			user[id].score[problem] = 0;
//			user[id].isSubmit = true;
//		}
//
//		// Deal with input, record the score.
//		if (user[id].score[problem] < score)
//		{	
//			user[id].totalScore = user[id].totalScore + (score - user[id].score[problem]);
//
//			user[id].score[problem] = score;
//				
//			if (score == fullMark[problem])++user[id].perfectProblem;
//		}
//	}
//
//	//sort
//	qsort(user, n + 1, sizeof(Profile), cmp);
//
//	//Output & RANK
//	int nowRank = 1;
//
//	printf("1 %05d %d", user[0].userID, user[0].totalScore);
//	for (int j = 1; j <= k; ++j)
//	{
//		if (user[0].score[j] == -1)printf(" -");
//		else printf(" %d", user[0].score[j]);
//	}
//	printf("\n");
//
//	for (int i = 1; i < n; ++i)
//	{
//		if (user[i].isSubmit == false)continue;
//
//		//Deal with RANK
//		if (user[i].totalScore != user[i - 1].totalScore)nowRank = i + 1;
//
//		printf("%d %05d %d", nowRank, user[i].userID, user[i].totalScore);
//		for (int j = 1; j <= k; ++j)
//		{
//			if (user[i].score[j] == -1)printf(" -");
//			else printf(" %d", user[i].score[j]);
//		}
//		printf("\n");
//	}	
//	
//	return 0;
//}
//
////0	答案正确	1	564	13 / 13
////1	答案正确	1	692	3 / 3
////2	答案错误	1	692	0 / 3
////3	答案正确	2	692	3 / 3
////4	答案错误	29	916	0 / 3