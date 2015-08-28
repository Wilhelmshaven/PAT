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
//	string regNum;         //ע���
//	int finalRank;         //��������
//	int locNum;            //�����
//	int locRank;           //������
//	int score;             //����
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
//	//�ȷֳ�����д����
//	sort(ranking.begin(), ranking.end(), cmpLoc);
//	int rank = 1;
//	int cnt = 1;
//	ranking[0].locRank = 1;
//	for (int i = 1; i < ranking.size(); ++i)
//	{
//		if (ranking[i].locNum != ranking[i - 1].locNum)
//		{
//			rank = 1; //����������ͳ��
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
//	//д���β����
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
////0	����ȷ	1	180	13 / 13
////1	����ȷ	1	308	6 / 6
////2	����ȷ	1	308	3 / 3
////3	����ȷ	138	3668	3 / 3