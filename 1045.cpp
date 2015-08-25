//#include <iostream>
//#include <queue>
//#include <vector>
//
//using namespace std;
//
//typedef struct originColor
//{
//	int color;
//	int length = 1;
//};
//
//int main(void)
//{
//	int n, m, tmp, container = 0, pivot;
//	vector<int> favColor;
//	vector<originColor> oriColor;
//
//	cin >> n;	
//
//	cin >> m;
//	for (int i = 0; i < m; ++i)
//	{
//		cin >> tmp;
//		favColor.push_back(tmp);
//	}
//	
//	originColor input;
//	//输入并紧缩原始颜色串
//	cin >> m;
//	for (int i = 0; i < m; ++i)
//	{
//		cin >> tmp;
//
//		if (tmp <= n)
//		{
//			if (tmp == container)++oriColor[pivot].length;
//			else
//			{
//				pivot = oriColor.size();
//				container = tmp;
//				input.color = tmp;
//				oriColor.push_back(input);
//			}
//		}
//	}
//
//	//开始寻找最长串
//	//动态规划，每次都为以该点起的最长紫串，再检查是否在题目要求的规定子串内
//	vector<int> max;
//	max.resize(oriColor.size());
//	mark.resize(oriColor.size());
//
//	for (int i = 0; i < favColor.size(); ++i)
//	{
//
//	}
//
//
//	return 0;
//}