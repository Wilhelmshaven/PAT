//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//bool cmp(const string &a, const string &b)
//{
//	return a + b < b + a;
//}
//
//int main(void)
//{
//	int n;
//	cin >> n;
//
//	vector<string> number;
//	string result;
//	for (int i = 0; i < n; ++i)
//	{
//		cin >> result;
//		number.push_back(result);
//	}
//	sort(number.begin(), number.end(), cmp);
//
//	result.clear();
//	for (int i = 0; i < n; ++i)result += number[i];
//
//	int pivot = 0;
//	while (result[pivot] == '0')++pivot;
//	if (pivot < result.size())cout << result.substr(pivot);
//	else cout << "0";
//
//	return 0;
//}
//
////0	����ȷ	1	180	16 / 16
////1	����ȷ	1	180	2 / 2
////2	����ȷ	1	308	2 / 2
////3	����ȷ	1	308	3 / 3
////4	����ȷ	1	256	2 / 2
////5	����ȷ	1	308	2 / 2
////6	����ȷ	33	1076	3 / 3