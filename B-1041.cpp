//#include <iostream>
//#include <map>
//#include <string>
//
//using namespace std;
//
//typedef struct record
//{
//	string ID;
//	int examLoc;
//};
//
//int main()
//{
//	int n, m;
//	cin >> n;
//
//	map<int, record> PAT;
//	record input;
//	int testLoc;
//	for (int i = 0; i < n; ++i)
//	{
//		cin >> input.ID >> testLoc >> input.examLoc;
//		PAT.insert(make_pair(testLoc, input));
//	}
//
//	cin >> m;
//	map<int, record>::iterator iter;
//	for (int i = 0; i < m; ++i)
//	{
//		cin >> testLoc;
//		iter = PAT.find(testLoc);
//		cout << iter->second.ID << " " << iter->second.examLoc << endl;
//	}
//
//	return 0;
//}
//
////0	����ȷ	1	256	9 / 9
////1	����ȷ	5	380	2 / 2
////2	����ȷ	5	436	2 / 2
////3	����ȷ	1	180	2 / 2