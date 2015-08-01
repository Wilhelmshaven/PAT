//#include <iostream>
//#include <string>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//
//static string nameIndex[175760];
//
//void print(int s)
//{
//	cout << nameIndex[s] << endl;
//};
//
//bool cmp(const int a, const int b)
//{
//	return a < b;
//};
//
//int main()
//{
//	int n, k;
//	cin >> n >> k;
//
//	string name;
//	int c, classNum;
//
//	vector<int> stuClassList[2501];
//
//	// Stu input
//	int temp;
//	for (int i = 0; i < n; ++i)
//	{
//		// Class input
//		cin >> name >> c;
//
//		temp = (name[0] - 65) * 26 * 26 + (name[1] - 65) * 26 + (name[2] - 65)
//			+ (name[3] - 48);
//		nameIndex[temp] = name;
//
//		for (int j = 0; j < c; ++j)
//		{
//			cin >> classNum;			
//			stuClassList[classNum].push_back(temp);
//		}
//	}
//
//	for (int i = 1; i <= k; ++i)
//	{
//		size_t len = stuClassList[i].size();
//
//		cout << i << " " << len << endl;
//
//		// Sort student list for each class
//		sort(stuClassList[i].begin(), stuClassList[i].end(), cmp);
//
//		// Then print student list
//		// for_each(stuClassList[i].begin(), stuClassList[i].end(), print); 
//		
//		for (size_t j = 0; j < len; ++j)
//		{
//			cout << nameIndex[stuClassList[i][j]] << endl;
//		}
//	}
//	
//	return 0;
//}
//
////0	答案正确	1	308	15 / 15
////1	答案正确	1	308	3 / 3
////2	答案正确	1	308	3 / 3
////3	运行超时			0 / 4