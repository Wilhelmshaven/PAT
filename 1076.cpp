//#include <stdio.h>
//#include <vector>
//#include <queue>
//
//using namespace std;
//
//queue<int> myQueue;
//vector<int> mark;
//int cntMaxForwards(vector<vector<int>> &myMap, vector<int> cntFollowers, int level, int maxLevel)//���ͳ����һ������
//{
//	int nextLevel = level + 1;
//
//	queue<int> tmp;
//	int node, cnt = 0;
//	while (!myQueue.empty())
//	{
//		node = myQueue.front();    //ȡ�������е����нڵ㣨��ǰ�㣩��������������һ��ڵ�
//		myQueue.pop();
//		mark[node] = 1;
//		cnt += cntFollowers[node];
//		if(nextLevel<=maxLevel)for (int i = 1; i < cntFollowers.size(); ++i)if (myMap[node][i]>0 && mark[i] == 0)tmp.push(i);
//	}
//
//	myQueue = tmp;
//	if (nextLevel <= maxLevel)cnt += cntMaxForwards(myMap, cntFollowers, nextLevel, maxLevel);  //����һ��
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
//	for (int i = 0; i <= n; ++i)myMap[i].resize(n + 1);  //ÿ�еĺ���Ϊ�б�ķ�˿����˭
//	vector<int> cntFollowers(n + 1), result(n + 1);                    //ͳ�Ʒ�˿��
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