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
////0	����ȷ	1	256	12 / 12
////1	����ȷ	3	292	6 / 6
////2	����ȷ	1	252	1 / 1
////3	����ȷ	1	296	1 / 1