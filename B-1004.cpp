//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//typedef struct student
//{
//	string name;
//	string subject;
//	int score;
//};
//
//bool cmp(const student &a, const student &b)
//{
//	return b.score < a.score;
//}
//
//int main(void)
//{
//	int n;
//	cin >> n;
//
//	vector<student> myList(n);
//	for (int i = 0; i < n; ++i)cin >> myList[i].name >> myList[i].subject >> myList[i].score;
//
//	sort(myList.begin(), myList.end(), cmp);
//
//	cout << myList[0].name << " " << myList[0].subject << endl;
//	cout << myList[n - 1].name << " " << myList[n - 1].subject << endl;
//
//	return 0;
//}
//
////0	答案正确	1	256	12 / 12
////1	答案正确	1	308	2 / 2
////2	答案正确	1	308	6 / 6