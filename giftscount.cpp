//#include <stdio.h>
//#include <set>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//
//	set<int> giftSet;
//	long input;
//	for (int i = 0; i < n; ++i)
//	{
//		scanf("%ld", &input);
//		giftSet.insert(input);
//	}
//	getchar();
//
//	int CC[20000];
//	char c;
//	int pivot = 0;
//	while (1)
//	{
//		scanf("%c", &c);
//		if (c == '\n')break;
//		CC[pivot] = c - 48;
//		++pivot;
//	}
//	int CCLength = pivot;
//
//	pivot = 0;
//	int cnt = 0, start = 0;
//	long record;
//	while (start < CCLength)
//	{
//		if (giftSet.find(CC[start]) != giftSet.end())
//		{
//			//Single num find
//			++cnt;
//			++start;
//			continue;
//		}
//		else
//		{
//			pivot = start + 1;
//			record = CC[start];
//			//找非一位数的组合
//			int mark = 1;
//			while (1)
//			{
//				if (pivot > CCLength - 1 || mark > 10)break;
//				
//				record = record * 10 + CC[pivot];
//				if (giftSet.find(record) != giftSet.end())
//				{
//					++cnt;
//					break;
//				}
//
//				++pivot;
//				++mark;
//			}
//		}
//		++start;
//	}
//
//	printf("%d", cnt);
//
//	return 0;
//}