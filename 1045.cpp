//#include <iostream>
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
//	
//	cin >> n >> m;
//	vector<int> favColor(m);
//	for (int i = 0; i < m; ++i)cin >> favColor[i];
//	
//	//输入并紧缩原始颜色串
//	cin >> m;
//	vector<originColor> oriColor;
//	originColor input;
//	for (int i = 0; i < m; ++i)
//	{
//		cin >> tmp;
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
//	//开始寻找最长串，动态规划
//	int maxWeight, result = 0;
//	size_t size = oriColor.size();
//	size_t favSize = favColor.size();
//
//	vector<vector<int>> max(size + 1);
//	for (size_t i = 0; i < size + 1; ++i)max[i].resize(favSize + 1);
//
//	//以原始颜色串为行，最喜欢颜色串为列，构造一个矩阵
//	//矩阵值的意义为：以当前原始颜色串该颜色为结尾、以当前子列为指定颜色顺序的最长子串长度
//	for (size_t i = 1; i <= favSize; ++i)
//	{		
//		for (size_t j = 1; j <= size; ++j)
//		{
//			//左，左上，上，找最大
//			maxWeight = max[j - 1][i - 1];
//			if (maxWeight < max[j][i - 1])maxWeight = max[j][i - 1];
//			if (maxWeight < max[j - 1][i])maxWeight = max[j - 1][i];
//
//			//如果正好是当前元素，加上权值
//			if (oriColor[j - 1].color == favColor[i - 1])maxWeight += oriColor[j - 1].length;
//
//			max[j][i] = maxWeight;
//			if (maxWeight > result)result = maxWeight;     //统计最大
//		}
//	}
//
//	cout << result;
//
//	return 0;
//}
//
////0	答案正确	1	180	15 / 15
////1	答案正确	1	308	3 / 3
////2	答案正确	1	180	6 / 6
////3	答案正确	18	8628	3 / 3
////4	答案正确	18	8500	3 / 3