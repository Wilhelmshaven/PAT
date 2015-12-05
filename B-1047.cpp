//#include <stdio.h>
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//
//	int tmp, score, team;
//	int cnt[1001] = { 0 };
//	int max = -1, maxTeam;
//	for (int i = 0; i < n; ++i)
//	{
//		scanf("%d-%d %d", &team, &tmp, &score);
//		cnt[team] += score;
//		if (cnt[team] > max)
//		{
//			max = cnt[team];
//			maxTeam = team;
//		}
//	}
//
//	printf("%d %d\n", maxTeam, cnt[maxTeam]);
//
//	return 0;
//}
//
////0	答案正确	1	256	12 / 12
////1	答案正确	3	292	6 / 6
////2	答案正确	1	252	1 / 1
////3	答案正确	1	296	1 / 1