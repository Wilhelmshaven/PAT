//#include <iostream>
//#include <vector>
//#include <queue>
//
//using namespace std;
//
////统一一下，所有的向量，下标就是城市编号！
//int main(void)
//{
//	int n, m, c1, c2;
//	cin >> n >> m >> c1 >> c2;
//
//	vector<int> teamInCities(n);
//	for (int i = 0; i < n; ++i)cin >> teamInCities[i];
//
//	vector<vector<int>> myMap(n);
//	for (int i = 0; i < n; ++i)myMap[i].resize(n);
//	int begin, end;
//	for (int i = 0; i < m; ++i)
//	{
//		cin >> begin >> end;
//		cin >> myMap[begin][end];
//		myMap[end][begin] = myMap[begin][end];
//	}
//
//	//存储已经处理过的节点，最优花销，基于最短路径的最优救护队数量，到该点的不同最短路径数
//	//特殊情况：起点不是0，起点和终点一样
//	//目前的最短路径数目统计不正确。下次拟修改：不用累加的方式存储路径数目了，数组只存储当前父节点数目，全部标定后再爬一次
//	vector<int> citySet(n), cost(n), cntTeam(n), cntPath(n);
//	queue<int> waitToDeal;
//
//	for (int i = 0; i < n; ++i)cost[i] = 99999;
//	//设置起点信息
//	cntTeam[c1] = teamInCities[c1];
//	cntPath[c1] = 1;
//	cost[c1] = 0;
//
//	//推起点入待处理队列
//	waitToDeal.push(c1);
//
//	int nowCity;
//	while (!waitToDeal.empty())
//	{
//		nowCity = waitToDeal.front();
//		waitToDeal.pop();
//		if (citySet[nowCity] == 1)continue;
//		citySet[nowCity] = 1;
//
//		//首先在已处理点里面选择修正自己的路径值，然后根据新的修正同步修正路径数和救护队数
//		bool modify = false;
//		for (int i = 0; i < n; ++i)
//		{
//			if (citySet[i] == 1 && myMap[i][nowCity]>0)
//			{
//				if (cost[i] + myMap[i][nowCity] < cost[nowCity] && i != c1)
//				{
//					cost[nowCity] = cost[i] + myMap[i][nowCity];
//					cntTeam[nowCity] = cntTeam[i] + teamInCities[nowCity];
//					//cntPath[nowCity] = cntPath[i];
//					modify = true;
//				}
//			}
//		}
//
//		//遍历邻接矩阵中当前城市的那一行，i代表与当前城市邻接的下一个城市
//		for (int i = 0; i < n; ++i)
//		{
//			if (myMap[nowCity][i] == 0 || nowCity == i)continue;   //确认从本城到下一城是否连通
//			
//			//更新下一个城市的最短路径
//			if (cost[i] > cost[nowCity] + myMap[nowCity][i] && i != c1) //若从当前点过去更短（预设值是无限）
//			{
//				cost[i] = cost[nowCity] + myMap[nowCity][i];      //更新最短路径
//				cntTeam[i] = cntTeam[nowCity] + teamInCities[i];  //更新救护队数目为当前聚集的加下一个城市的
//				cntPath[i] = cntPath[nowCity];
//			}
//			else if (cost[i] == cost[nowCity] + myMap[nowCity][i])
//			{
//				//相同长度的最短路径
//				if (cntTeam[i] < cntTeam[nowCity] + teamInCities[i])cntTeam[i] = cntTeam[nowCity] + teamInCities[i]; //找一个最大救护队数目
//				cntPath[i] += cntPath[nowCity];
//			}
//
//			if (citySet[i] == 0)waitToDeal.push(i);
//		}
//	}
//
//	int sum = 0;
//	for (int i = 0; i < n; ++i)if (myMap[i][c2]>0 && cost[c2] - cost[i] == myMap[i][c2])sum += cntPath[i];
//	if (sum > cntPath[c2])cntPath[c2] = sum;
//
//	cout << cntPath[c2] << " " << cntTeam[c2] << endl;
//
//	return 0;
//}

//0	答案正确	1	308	10 / 10
//1	答案正确	1	308	3 / 3
//2	答案错误	1	180	0 / 3
//3	答案正确	2	1332	3 / 3
//4	答案错误	3	1272	0 / 3
//5	答案错误	3	1280	0 / 3

//9 16 0 8
//1 1 1 1 1 1 1 1 1 
//0 1 1
//0 2 5
//1 3 7
//1 4 5
//1 2 3
//3 4 2
//3 6 3
//2 4 1
//2 5 7
//4 6 6
//4 7 9
//4 5 3
//5 7 5
//6 8 7
//6 7 2
//7 8 4

//2 1 0 1
//1 1 
//1 0 2

//5 6 0 2
//1 2 1 5 3
//1 0 1
//2 0 2
//3 0 1
//2 1 1
//4 2 1
//4 3 1

//5 8 0 4
//1 1 1 1 1
//0 1 5
//0 2 2
//0 3 3
//1 2 3
//1 4 1
//2 3 1
//2 4 4
//3 4 3