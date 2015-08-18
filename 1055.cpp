//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <string>
//
//using namespace std;
//
//typedef struct billionare
//{
//	string name;
//	int age;
//	int worth;
//};
//
//bool cmp(const billionare &a, const billionare &b)
//{
//	if (a.worth != b.worth)return b.worth < a.worth;
//	else if(a.age != b.age)return a.age < b.age;
//	else return a.name < b.name;
//};
//
//int main(void)
//{
//	int n, k;
//	cin >> n >> k;
//
//	vector<billionare> bil;
//	bil.resize(200);
//
//	//input
//	billionare tmp;
//	for (int i = 0; i < n; ++i)
//	{
//		cin >> tmp.name >> tmp.age >> tmp.worth;
//		bil.push_back(tmp);
//	}
//
//	//sort
//	if (!bil.empty())sort(bil.begin(), bil.end(), cmp);
//
//	//Pick the richest in range
//	int ageMin, ageMax, m;
//	for (int i = 0; i < k; ++i)
//	{
//		cin >> m >> ageMin >> ageMax;
//		cout << "Case #" << i + 1 << ":" << endl;
//
//		size_t vSize = bil.size();
//		int pivot = 0, count = m;
//		while (count > 0 && pivot < vSize)
//		{
//			if (bil[pivot].age >= ageMin && bil[pivot].age <= ageMax)
//			{
//				cout << bil[pivot].name << " " << bil[pivot].age << " " << bil[pivot].worth << endl;			
//				--count;
//			}
//			++pivot;
//		}
//		if (count == m)cout << "None" << endl;
//	}
//
//	return 0;
//}
//
////0	答案正确	1	180	15 / 15
////1	答案正确	386	7216	4 / 4
////2	答案正确	295	8048	3 / 3
////3	答案正确	1	180	1 / 1
////4	答案正确	1	180	1 / 1
////5	答案正确	1	180	1 / 1