//#include <stdio.h>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//typedef struct player
//{
//	int arrTime;
//	int playTime;
//};
//
//typedef struct table
//{
//	int cnt = 0;
//	int finishTime;
//	bool isVIP = false;
//};
//
//bool cmp(const player &a, const player &b)
//{
//	return b.arrTime < a.arrTime;
//}
//
//int main(void)
//{
//	int n;
//	scanf("%d", &n);
//
//	vector<player> cus, VIP;
//	player input;
//	int hr, min, sec, t, v;
//	for (int i = 0; i < n; ++i)
//	{
//		scanf("%d:%d:%d %d %d", &hr, &min, &sec, &t, &v);
//		input.arrTime = sec + min * 60 + hr * 3600;
//		input.playTime = t * 60;
//		if (v)VIP.push_back(input);
//		else cus.push_back(input);
//	}
//
//	int k, m;
//	scanf("%d%d", &k, &m);
//	vector<table> myTable(k);
//	for (int i = 0; i < m; ++i)
//	{
//		scanf("%d", &v);
//		myTable[v].isVIP = true;
//	}
//
//	sort(cus.begin(), cus.end(), cmp);
//	sort(VIP.begin(), VIP.end(), cmp);
//
//	int clk = 28800;
//	int tableNum, min, index;
//	while (1)
//	{
//		index = 0;
//		min = 99999;
//		//Find the nearest customer arrive time
//		if (!cus.empty())
//			if (cus.back().arrTime < min)min = cus.back().arrTime;	
//		if (!VIP.empty())
//			if (VIP.back().arrTime < min)min = VIP.back().arrTime;			
//		if (cus.empty() && VIP.empty())break;
//
//		clk = min;
//		if (clk >= 75600)break;
//		//Find an empty table
//	}
//
//	return 0;
//}