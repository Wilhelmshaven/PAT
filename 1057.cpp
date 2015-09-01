//#include <iostream>
//#include <string>
//#include <vector>
//#include <stack>
//#include <set>
//#include <algorithm>
//
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//
//	stack<int> myStack;
//	set<int> moreSet, lessSet;
//
//	string op;
//	int num, median = -1;
//	set<int>::iterator iter;
//	for (int i = 0; i < n; ++i)
//	{
//		cin >> op;
//
//		if (op == "Pop")
//		{
//			if (myStack.empty())cout << "Invalid" << endl;
//			else
//			{
//				num = myStack.top();
//				cout << num << endl;
//				myStack.pop();
//
//				if (!myStack.empty())
//				{
//					if (num == median)
//					{
//						median = -1;
//						int a, b;
//						a = moreSet.size();
//						b = lessSet.size();
//						if (a>b)
//						{
//							iter = moreSet.begin();
//							median = *iter;
//							moreSet.erase(iter);
//						}
//						else
//						{
//							iter = lessSet.end();
//							median = *(--iter);
//							lessSet.erase(iter);
//						}
//					}
//					else
//					{
//						iter = moreSet.find(num);
//						if (iter != moreSet.end())
//						{
//							moreSet.erase(iter);
//						}
//						else
//						{
//							iter = lessSet.find(num);
//							lessSet.erase(iter);
//						}
//					}
//				}
//			}
//			continue;
//		}
//
//		if (op == "PeekMedian")
//		{
//			if(!myStack.empty())cout << median << endl;
//			else cout << "Invalid" << endl;
//			continue;
//		}
//		
//		if (op == "Push")
//		{
//			scanf("%d", &num);
//			myStack.push(num);
//
//			if (median == -1)
//			{
//				median = num;
//				continue;
//			}
//
//			if (num > median)
//			{
//				moreSet.insert(num);
//			}
//			else
//			{
//				lessSet.insert(num);
//			}
//
//			//Adjust
//			int a, b;
//			a = moreSet.size();
//			b = lessSet.size();
//			if (a-b > 1)
//			{
//				lessSet.insert(median);
//
//				iter = moreSet.begin();
//				median = *iter;
//				moreSet.erase(iter);
//			}
//			if (b-a > 0)
//			{
//				moreSet.insert(median);
//
//				iter = lessSet.end();
//				median = *(--iter);
//				lessSet.erase(iter);
//			}
//
//			continue;
//		}
//	}
//
//	return 0;
//}
//
////0	答案正确	1	180	15 / 15
////1	运行超时			0 / 5
////2	运行超时			0 / 5
////3	异常退出	71	1844	0 / 3
////4	异常退出	1	304	0 / 2