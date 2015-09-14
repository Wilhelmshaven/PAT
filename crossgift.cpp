//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//	
//	string first, second, list;
//	int pFirst, pSecond, pList;
//	int lenFirst, lenSecond, lenList;
//	bool flag;
//
//	for (int i = 0; i < n; ++i)
//	{
//		cin >> first >> second >> list;
//		pFirst = pSecond = pList = 0;
//		lenFirst = first.length();
//		lenSecond = second.length();
//		lenList = list.length();
//
//		if (lenList != lenFirst + lenSecond)
//		{
//			cout << "0" << endl;
//			continue;
//		}
//		
//		flag = true;
//		while (pList < lenList)
//		{
//			if (pFirst < lenFirst && first[pFirst] == list[pList])
//			{
//				++pFirst;
//				++pList;
//			}
//			else if (pSecond < lenSecond && second[pSecond] == list[pList])
//			{
//				++pSecond;
//				++pList;
//			}
//			else
//			{
//				cout << "0" << endl;
//				flag = false;
//				break;
//			}
//		}
//		if (flag)cout << "1" << endl;
//	}
//
//	return 0;
//}
//
////aaa aab aabaaa
////aab aac aacaab