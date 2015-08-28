////#include <stdio.h>
//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//typedef struct PATScore
//{
//	string regNum;         //注册号
//	int finalRank;         //最终排名
//	int locNum;            //场编号
//	int locRank;           //场排名
//	int score;             //分数
//};
//
//bool cmpLoc(const PATScore a, const PATScore b)
//{
//	if (a.locNum != b.locNum)return a.locNum < b.locNum;
//	else if (a.score != b.score)return b.score < a.score;
//	else return a.regNum < b.regNum;
//}
//
//bool cmp(const PATScore a, const PATScore b)
//{
//	if (a.score != b.score)return b.score < a.score;
//	else return a.regNum < b.regNum;
//}
//
//int main()
//{
//	int n, k;
//	cin >> n;
//
//	vector<PATScore> ranking;
//	PATScore input;
//	for (int i = 0; i < n; ++i)
//	{
//		cin >> k;
//		input.locNum = i + 1;
//		for (int j = 0; j < k; ++j)
//		{
//			cin >> input.regNum >> input.score;
//			ranking.push_back(input);
//		}
//	}
//
//	//先分场排序写名次
//	sort(ranking.begin(), ranking.end(), cmpLoc);
//	int rank = 1;
//	int cnt = 1;
//	ranking[0].locRank = 1;
//	for (int i = 1; i < ranking.size(); ++i)
//	{
//		if (ranking[i].locNum != ranking[i - 1].locNum)
//		{
//			rank = 1; //换场，重新统计
//			cnt = 1;
//			ranking[i].locRank = 1;
//		}
//		else
//		{
//			++cnt;
//			if (ranking[i].score != ranking[i - 1].score)rank = cnt;
//			ranking[i].locRank = rank;
//		}
//	}
//
//
//	sort(ranking.begin(), ranking.end(), cmp);
//
//	//写名次并输出
//	cout << ranking.size() << endl;
//	
//	ranking[0].finalRank = 1;
//	ranking[0].locRank = 1;
//	cout << ranking[0].regNum << " " << ranking[0].finalRank << " " << ranking[0].locNum << " " << ranking[0].locRank << endl;
//
//	rank = 1;
//	for (int i = 1; i < ranking.size(); ++i)
//	{
//		if (ranking[i].score != ranking[i - 1].score)rank = i + 1;
//		ranking[i].finalRank = rank;
//
//		cout << ranking[i].regNum << " " << ranking[i].finalRank << " " << ranking[i].locNum << " " << ranking[i].locRank << endl;
//	}
//
//	return 0;
//}
//
////0	答案正确	1	180	13 / 13
////1	答案正确	1	308	6 / 6
////2	答案正确	1	308	3 / 3
////3	答案正确	138	3668	3 / 3