//#include <iostream>
//#include <vector>
//#include <queue>
//#include <algorithm>
//
//using namespace std;
//
//typedef struct node
//{
//	int father;
//	vector<int> child;
//	int level;
//};
//vector<node> myTree;
//
//void markLevel(int node, int level)
//{
//	myTree[node].level = level;
//
//	size_t vSize = myTree[node].child.size();
//	for (size_t i = 0; i < vSize; ++i)
//	{
//		markLevel(myTree[node].child[i], level + 1);
//	}
//}
//
//bool cmp(const node &a, const node &b)
//{
//	return a.level < b.level;
//}
//
//int main(void)
//{
//	int n, m;
//	cin >> n >> m;
//	
//	myTree.resize(n + 1);
//
//	int tmp, k, pivot;
//	for (int i = 1; i <= m; ++i)
//	{
//		cin >> pivot >> k;
//		for (int j = 0; j < k; ++j)
//		{
//			cin >> tmp;
//			myTree[pivot].child.push_back(tmp);
//			myTree[tmp].father = i;
//		}
//	}
//
//	//虽然是按层算，但是感觉DFS更好一些
//	markLevel(1, 1);
//	
//	//统计叶节点数量
//	sort(myTree.begin() + 2, myTree.end(), cmp);
//	size_t vSize = myTree.size();
//	int nowLevel = 1;
//	vector<int> count;
//	tmp = 0;
//	for (size_t i = 1; i < vSize; ++i)
//	{
//		if (myTree[i].level == nowLevel)
//		{
//			if (myTree[i].child.empty())++tmp;
//		}
//		else
//		{
//			count.push_back(tmp);
//			tmp = 0;
//			if (myTree[i].child.empty())++tmp;
//			nowLevel = myTree[i].level;
//		}
//	}
//	count.push_back(tmp);
//
//	//输出
//	vSize = count.size();
//	cout << count[0];
//	for (size_t i = 1; i < vSize; ++i)cout << " " << count[i];
//
//	return 0;
//}
//
////23 13
////21 1 23
////01 4 03 02 04 05
////03 3 06 07 08
////06 2 12 13
////13 1 21
////08 2 15 16
////02 2 09 10
////11 2 19 20
////17 1 22
////05 1 11
////07 1 14
////09 1 17
////10 1 18
//
////0	答案正确	1	308	10 / 10
////1	答案正确	1	308	8 / 8
////2	答案正确	1	180	3 / 3
////3	答案正确	1	308	3 / 3
////4	答案正确	1	308	3 / 3
////5	答案正确	1	256	3 / 3