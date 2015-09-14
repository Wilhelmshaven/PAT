//#include <stdio.h>
//#include <vector>
//#include <queue>
//
//using namespace std;
//
//queue<int> myQueue;
//vector<int> mark;
//int cntMaxForwards(vector<vector<int>> &myMap, vector<int> cntFollowers, int level, int maxLevel)//层的统计有一点问题
//{
//	int nextLevel = level + 1;
//
//	queue<int> tmp;
//	int node, cnt = 0;
//	while (!myQueue.empty())
//	{
//		node = myQueue.front();    //取出队列中的所有节点（当前层），再推入所有下一层节点
//		myQueue.pop();
//		mark[node] = 1;
//		cnt += cntFollowers[node];
//		if(nextLevel<=maxLevel)for (int i = 1; i < cntFollowers.size(); ++i)if (myMap[node][i]>0 && mark[i] == 0)tmp.push(i);
//	}
//
//	myQueue = tmp;
//	if (nextLevel <= maxLevel)cnt += cntMaxForwards(myMap, cntFollowers, nextLevel, maxLevel);  //搜下一层
//
//	return cnt;
//}
//
//int main(void)
//{
//	int n, l;
//	scanf("%d %d", &n, &l);
//
//	vector<vector<int>> myMap(n + 1);
//	for (int i = 0; i <= n; ++i)myMap[i].resize(n + 1);  //每列的含义为列标的粉丝都是谁
//	vector<int> cntFollowers(n + 1), result(n + 1);                    //统计粉丝数
//	int m, input;
//	for (int i = 0; i < n; ++i)
//	{
//		scanf("%d", &m);
//		for (int j = 0; j < m; ++j)
//		{
//			scanf("%d", &input);
//			myMap[input][i + 1] = 1;
//			++cntFollowers[input];
//		}
//	}
//
//	int k;
//	scanf("%d", &k);
//	for (int i = 0; i < k; ++i)
//	{
//		scanf("%d", &input); 
//		mark.resize(n + 1);
//		myQueue.push(input);
//		printf("%d\n", cntMaxForwards(myMap, cntFollowers, 0, l));
//	}
//
//	return 0;
//}