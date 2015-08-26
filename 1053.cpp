//#include <stdio.h>
//#include <vector>
//#include <deque>
//#include <algorithm>
//
//using namespace std;
//
//typedef struct node
//{
//	int parent = 0;
//	long weight = 0;
//	bool isLeaf = true;
//	long weightSum = 0;
//};
//
//bool cmp(const deque<int> &a, const deque<int> &b)
//{
//	size_t size;
//	if (a.size() > b.size())size = b.size();
//	else size = a.size();
//
//	for (size_t i = 0; i < size; ++i)
//	{
//		if (a[i] != b[i])return b[i] < a[i];
//	}
//
//	return a.size() < b.size();
//}
//
//int main(void)
//{
//	int n, m;
//	long s;
//	scanf("%d %d %ld", &n, &m, &s);
//
//	vector<node> myTree;
//	myTree.resize(n);
//	myTree[0].parent = -1;
//
//	// Input & make tree
//	for (int i = 0; i < n; ++i)scanf("%ld", &myTree[i].weight);
//	int root, k, tmp;
//	for (int i = 0; i < m; ++i)
//	{
//		scanf("%d %d", &root, &k);
//		myTree[root].isLeaf = false;
//		for (int j = 0; j < k; ++j)
//		{
//			scanf("%d", &tmp);
//			myTree[tmp].parent = root;
//		}
//	}
//
//	// DFS
//	int pivot;
//	long sum;
//	myTree[0].weightSum = myTree[0].weight;
//	for (int i = 1; i < n; ++i)
//	{
//		pivot = i;
//		sum = myTree[i].weight;
//		while (myTree[pivot].weightSum == 0)
//		{		
//			pivot = myTree[pivot].parent;
//			sum += myTree[pivot].weightSum;
//		}
//		myTree[i].weightSum = sum;
//	}
//
//	// Check & Output
//	vector<deque<int>> myQueue;
//	deque<int> route;
//	for (int i = n - 1; i >=0; --i)
//	{
//		if (myTree[i].isLeaf)
//		{
//			pivot = i;
//			if (myTree[i].weightSum == s)
//			{
//				route.clear();
//				while (pivot >= 0)
//				{
//					route.push_front(myTree[pivot].weight);
//					pivot = myTree[pivot].parent;
//				}
//				myQueue.push_back(route);
//			}
//		}
//	}
//	
//	// Sort route
//	sort(myQueue.begin(), myQueue.end(), cmp);
//
//	// Output
//	size_t size = myQueue.size();
//	for (size_t i = 0; i < size; ++i)
//	{
//		while (myQueue[i].size() > 1)
//		{
//			printf("%d ", myQueue[i].front());
//			myQueue[i].pop_front();
//		}
//		printf("%d\n", myQueue[i].front());
//	}
//
//	return 0;
//}
//
////0	答案正确	1	308	18 / 18
////1	答案正确	1	308	3 / 3
////2	答案正确	1	308	2 / 2
////3	答案正确	1	308	2 / 2
////4	答案正确	1	252	2 / 2
////5	答案正确	1	264	3 / 3