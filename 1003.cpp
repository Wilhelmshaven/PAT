//#include <iostream>
//#include <vector>
//#include <queue>
//
//using namespace std;
//
////ͳһһ�£����е��������±���ǳ��б�ţ�
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
//	//�洢�Ѿ�������Ľڵ㣬���Ż������������·�������žȻ������������õ�Ĳ�ͬ���·����
//	//�����������㲻��0�������յ�һ��
//	//Ŀǰ�����·����Ŀͳ�Ʋ���ȷ���´����޸ģ������ۼӵķ�ʽ�洢·����Ŀ�ˣ�����ֻ�洢��ǰ���ڵ���Ŀ��ȫ���궨������һ��
//	vector<int> citySet(n), cost(n), cntTeam(n), cntPath(n);
//	queue<int> waitToDeal;
//
//	for (int i = 0; i < n; ++i)cost[i] = 99999;
//	//���������Ϣ
//	cntTeam[c1] = teamInCities[c1];
//	cntPath[c1] = 1;
//	cost[c1] = 0;
//
//	//���������������
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
//		//�������Ѵ��������ѡ�������Լ���·��ֵ��Ȼ������µ�����ͬ������·�����;Ȼ�����
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
//		//�����ڽӾ����е�ǰ���е���һ�У�i�����뵱ǰ�����ڽӵ���һ������
//		for (int i = 0; i < n; ++i)
//		{
//			if (myMap[nowCity][i] == 0 || nowCity == i)continue;   //ȷ�ϴӱ��ǵ���һ���Ƿ���ͨ
//			
//			//������һ�����е����·��
//			if (cost[i] > cost[nowCity] + myMap[nowCity][i] && i != c1) //���ӵ�ǰ���ȥ���̣�Ԥ��ֵ�����ޣ�
//			{
//				cost[i] = cost[nowCity] + myMap[nowCity][i];      //�������·��
//				cntTeam[i] = cntTeam[nowCity] + teamInCities[i];  //���¾Ȼ�����ĿΪ��ǰ�ۼ��ļ���һ�����е�
//				cntPath[i] = cntPath[nowCity];
//			}
//			else if (cost[i] == cost[nowCity] + myMap[nowCity][i])
//			{
//				//��ͬ���ȵ����·��
//				if (cntTeam[i] < cntTeam[nowCity] + teamInCities[i])cntTeam[i] = cntTeam[nowCity] + teamInCities[i]; //��һ�����Ȼ�����Ŀ
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

//0	����ȷ	1	308	10 / 10
//1	����ȷ	1	308	3 / 3
//2	�𰸴���	1	180	0 / 3
//3	����ȷ	2	1332	3 / 3
//4	�𰸴���	3	1272	0 / 3
//5	�𰸴���	3	1280	0 / 3

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