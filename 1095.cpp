//#include <stdio.h>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//typedef struct record
//{
//	char plate[8];
//	int hr, min, sec;
//	bool type;
//};
//
//bool cmpByCar(const record &a, const record &b)
//{
//	for (int i = 0; i < 8; ++i)
//	{
//		if (a.plate[i] != b.plate[i])return a.plate[i] < b.plate[i];
//	}
//
//	if (a.hr != b.hr)return a.hr < b.hr;
//	else if (a.min != b.min)return a.min < b.min;
//	else return a.sec < b.sec;
//}
//
//bool cmpByTime(const record &a, const record &b)
//{
//	if (a.hr != b.hr)return a.hr < b.hr;
//	else if (a.min != b.min)return a.min < b.min;
//	else return a.sec < b.sec;
//}
//
////ɾ�����Ϸ���¼��ͬʱ��ÿ��������ܼƲ���ʱ��
////!!!!!!!!!!!!!!ɸѡ�ĺ����߼�����Ȼ�����⣬��Ҫ�����N��in����ǰN��out�Ĵ���������
//vector<record> parkTime;
//void chkRecord(vector<record> &myList)
//{
//	int size = myList.size();   //��Ŀ��֤������һ����¼
//	char plate[8];
//	vector<record>::iterator iter;
//
//	//��ȥ��ǰ����out
//	for (int i = 0; i < size; ++i)
//	{
//		iter = myList.begin();
//		if (iter->type)break;
//		myList.erase(iter);
//	}
//	if (myList.empty())return;
//	//��ȥ���󵼵�in
//	iter = myList.end();
//	for (int i = size - 1; i >=0; --i)
//	{		
//		--iter;
//		if (!iter->type)break;
//		myList.erase(iter);
//	}
//
//	for (int i = 0; i < 8; ++i)plate[i] = myList[0].plate[i];
//	int cntTime = 0;
//
//	
//	record p;
//	p.hr = p.min = p.sec = 0;
//	for (int i = 1; i < size; ++i)
//	{
//		bool match = true;
//		for (int j = 0; j < 8; ++j)
//			if (plate[j] != myList[i].plate[j])
//			{
//				match = false;
//				plate[j] = myList[i].plate[j];//������Ǹɴ��ֱ�Ӹ�����
//			}
//
//		if (match)      //������ͬ�������Ƿ�ƥ��
//		{
//			if (!(myList[i].type^myList[i - 1].type))           //��򣬲���ͬ
//			{
//				iter = myList.begin();
//				if (myList[i].type)myList.erase(iter + i - 1);  //in,in,delete early one
//				else myList.erase(iter + i);                    //out,out,delete late one
//				--size;
//				--i;
//			}
//			else
//			{
//				if (myList[i - 1].type)
//				{
//					p.hr += myList[i].hr - myList[i - 1].hr;
//					p.min += myList[i].min - myList[i - 1].min;
//					p.sec += myList[i].sec - myList[i - 1].sec;
//				}
//			}
//		}
//		else
//		{
//			//��ͬ�Ͱ���һ������ͣ��ʱ���¼һ��
//			for (int j = 0; j < 8; ++j)p.plate[j] = myList[i - 1].plate[j];
//			parkTime.push_back(p);
//			p.hr = p.min = p.sec = 0;
//
//			//˳�㣬�����˵��������һ��ֱ����out��ɾ�����Լ���һ����in��Ҳֱ��ɾ��
//			if (!myList[i].type)
//			{
//				iter = myList.begin();
//				myList.erase(iter + i);
//				--size;
//				--i;
//			}
//			if (myList[i - 1].type)
//			{
//				iter = myList.begin();
//				myList.erase(iter + i - 1);
//				--size;
//				--i;
//			}
//		}
//
//	}
//	for (int j = 0; j < 8; ++j)p.plate[j] = myList[size - 1].plate[j];
//	parkTime.push_back(p);
//	p.hr = p.min = p.sec = 0;
//}
//
//int main(void)
//{
//	int n, k;
//	scanf("%d %d", &n, &k);
//
//	char type[4];
//	vector<record> myList;
//	record input;
//	for (int i = 0; i < n; ++i)
//	{
//		scanf("%s %d:%d:%d %s", &input.plate, &input.hr, &input.min, &input.sec, &type);
//		if (type[0] == 'i')input.type = true;
//		else input.type = false;
//		myList.push_back(input);
//	}
//	sort(myList.begin(), myList.end(), cmpByCar);
//
//	chkRecord(myList);
//
//	sort(myList.begin(), myList.end(), cmpByTime);
//
//	//ͳ��
//	int cntCar = 0, hr, min, sec, pivot = 0;
//	for (int i = 0; i < k; ++i)
//	{
//		scanf("%d:%d:%d", &hr, &min, &sec);		
//		while (pivot < myList.size())
//		{
//			if (hr < myList[pivot].hr)break;
//			else if (hr == myList[pivot].hr)
//			{
//				if (min < myList[pivot].min)break;
//				else if (min == myList[pivot].min)
//				{
//					if (sec < myList[pivot].sec)break;
//				}
//			}
//
//			if (myList[pivot].type)++cntCar;
//			else --cntCar;
//
//			++pivot;
//		}
//		printf("%d\n", cntCar);
//	}
//
//	//�������ͣ��ʱ��
//	int maxHr, maxMin, maxSec;
//	hr = min = sec = 0;
//	maxHr = maxMin = maxSec = 0;
//	bool isRemove;
//	vector<record>::iterator iter;
//	for (int i = 0; i < parkTime.size(); ++i)
//	{
//		isRemove = false;
//		if (parkTime[i].sec < 0)
//		{
//			parkTime[i].sec += 60;
//			--parkTime[i].min;
//		}
//		if (parkTime[i].min < 0)
//		{
//			parkTime[i].min += 60;
//			--parkTime[i].hr;
//		}
//
//		if (parkTime[i].hr < maxHr)isRemove = true;
//		else if (parkTime[i].hr == maxHr)
//		{
//			if (parkTime[i].min < maxMin)isRemove = true;
//			else if (parkTime[i].min == maxHr)
//			{
//				if (parkTime[i].sec < maxSec)isRemove = true;
//			}
//		}
//
//		if (isRemove)
//		{
//			iter = parkTime.begin() + i;
//			parkTime.erase(iter);
//			--i;
//		}
//		else
//		{
//			maxHr = parkTime[i].hr;
//			maxMin = parkTime[i].min;
//			maxSec = parkTime[i].sec;
//		}
//	}
//	for (int i = 0; i < parkTime.size(); ++i)
//	{
//		if (parkTime[i].hr == maxHr&&parkTime[i].min == maxMin&&parkTime[i].sec == maxSec)
//		{
//			for (int j = 0; j < 7; ++j)printf("%c", parkTime[i].plate[j]);
//			printf(" ");
//		}
//	}
//	if (parkTime.size() > 0)printf("%02d:%02d:%02d\n", maxHr, maxMin, maxSec);
//
//	return 0;
//}
//
////0	����ȷ	1	180	18/18
////1	����ȷ	10	816	3/3
////2	�𰸴���	21	816	0/3
////3	����ȷ	1	308	1/1
////4	�𰸴���	51	816	0/3
////5	����ȷ	8	816	2/2
//
////1 7
////JH007BD 18:07:01 out
////05:10:00
////06:30:50
////11:00:00
////12:23:42
////14:00:00
////18:00:00
////23:59:00