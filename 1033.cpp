//#include <stdio.h>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//typedef struct gasStation
//{
//	double price;
//	double pos;
//};
//
//bool cmp(const gasStation &a, const gasStation &b)
//{
//	if (a.pos != b.pos)return a.pos < b.pos;
//	else return a.price < b.price;
//}
//
//int main(void)
//{
//	int cMax, distance, dAvg, n;
//	scanf("%d%d%d%d", &cMax, &distance, &dAvg, &n);
//	
//	//输入
//	vector<gasStation> station;
//	gasStation tmp;
//	for (int i = 0; i < n; ++i)
//	{
//		scanf("%lf %lf", &tmp.price, &tmp.pos);
//		station.push_back(tmp);
//	}
//	//推入终点
//	tmp.pos = distance;
//	tmp.price = 0;
//	station.push_back(tmp);
//	//排序
//	sort(station.begin(), station.end(), cmp);
//
//	//Begin
//	double sum = 0, tank = 0, minPrice;
//	int maxDistance = cMax*dAvg;
//	int pivot = 0, nowStation = 0, nextStation;
//	int nearest;
//
//	if (station[0].pos == 0)
//	{
//		while (1)
//		{
//			minPrice = 999999;  //当前价格
//			pivot = nowStation + 1;
//			nearest = -1;
//
//			if (pivot == n)nextStation = pivot;
//
//			while (pivot < n)
//			{
//				//寻找最大距离内的加油站
//				if (station[pivot].pos - station[nowStation].pos <= maxDistance)
//				{
//					//寻找比当前加油站价格更低的加油站（终点价格最小，这样就必然会选中终点作为下一站了）
//					if (station[pivot].price < minPrice)
//					{
//						if (nearest == -1 && station[pivot].price < station[nowStation].price)nearest = pivot;
//
//						minPrice = station[pivot].price;
//						nextStation = pivot;
//					}
//				}
//				else break;
//
//				++pivot;
//			}
//			
//			if (nearest != -1)nextStation = nearest;
//
//			//加油
//			double fill;
//			if (nextStation > nowStation && station[nextStation].pos-station[nowStation].pos<=maxDistance)
//			{
//				if (station[nextStation].price < station[nowStation].price)
//				{
//					fill = (station[nextStation].pos - station[nowStation].pos) / dAvg - tank;
//					if (fill < 0)fill = 0;
//				}
//				else
//				{
//					fill = cMax - tank;
//				}
//
//				tank = tank + fill;
//				sum = sum + station[nowStation].price * fill;
//
//				//车开过去了，耗油
//				tank = tank - (station[nextStation].pos - station[nowStation].pos) / dAvg;
//				nowStation = nextStation;
//
//				if (nextStation == n)
//				{
//					printf("%.2lf", sum);
//					break;
//				}
//			}
//			else
//			{
//				printf("The maximum travel distance = %.2lf\n", station[nowStation].pos + (cMax - tank)*dAvg);
//				break;
//			}			
//		}
//	}
//	else printf("The maximum travel distance = 0.00\n");
//
//	return 0;
//}
//
////0	答案正确	1	308	12 / 12
////1	答案正确	1	308	3 / 3
////2	答案正确	1	308	2 / 2
////3	答案正确	1	308	2 / 2
////4	答案正确	1	256	2 / 2
////5	答案正确	1	308	3 / 3
////6	答案正确	1	308	1 / 1