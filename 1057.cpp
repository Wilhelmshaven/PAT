//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//
//	string cmd;
//	vector<int> stack;
//	vector<int> sortList;
//	vector<int>::iterator iter;
//	int value, pivot;
//
//	for (int i = 0; i < n; ++i)
//	{
//		cin >> cmd;
//
//		if (cmd == "Pop")
//		{
//			if (stack.size() == 0)cout << "Invalid" << endl;
//			else
//			{
//				value = stack.back();
//				cout << value << endl;
//				stack.pop_back();
//
//				// Deal with sorted list
//				iter = find(sortList.begin(), sortList.end(), value);
//				sortList.erase(iter);
//			}
//			continue;
//		}
//
//		// the median value is defined to be the (N/2)-th smallest element if N is even, or ((N+1)/2)-th if N is odd.
//		if (cmd == "PeekMedian")
//		{
//			pivot = stack.size();
//			if (pivot == 0)cout << "Invalid" << endl;
//			else
//			{
//				pivot = (pivot - 1) / 2;
//
//				// Get the value from the sorted list
//				cout << sortList[pivot] << endl;
//			}
//			continue;
//		}
//
//		if (cmd == "Push")
//		{
//			cin >> value;
//			stack.push_back(value);
//
//			// Also insert in the sorted list
//			pivot = sortList.size();
//			if (pivot == 0)sortList.push_back(value);
//			else
//			{
//				while (1)
//				{
//					if (sortList[pivot - 1] <= value)
//					{
//						iter = sortList.begin() + pivot - 1;
//						sortList.insert(iter, value);
//						break;
//					}
//					else
//					{
//						--pivot;
//					}
//
//					if (pivot < 1)
//					{
//						iter = sortList.begin();
//						sortList.insert(iter, value);
//						break;
//					}
//				}
//			}
//		}
//	}
//
//	return 0;
//}
//
////0	答案正确	1	180	15 / 15
////1	运行超时			0 / 5
////2	运行超时			0 / 5
////3	运行超时			0 / 3
////4	答案错误	1	256	0 / 2