//#include <iostream>
//#include <vector>
//#include <stack>
//
//using namespace std;
//
//typedef struct member
//{
//	int father;
//	int level = 0;
//};
//
//int main(void)
//{
//	int n, m;
//	cin >> n >> m;
//
//	++n;
//	vector<member> familyMember;
//	familyMember.resize(n);
//
//	int tmp, k, pivot;
//	for (int i = 0; i < m; ++i)
//	{
//		cin >> pivot >> k;
//		for (int j = 0; j < k; ++j)
//		{
//			cin >> tmp;
//			familyMember[tmp].father = pivot;
//		}
//	}
//	familyMember[1].level = 1;
//	familyMember[1].father = 0;
//
//	// Begin DFS
//	stack<int> DFS;
//	for (int i = 1; i < n; ++i)
//	{
//		pivot = i;
//		while (familyMember[pivot].level == 0)
//		{
//			DFS.push(pivot);
//			pivot = familyMember[pivot].father;
//		}
//		while (!DFS.empty())
//		{
//			familyMember[DFS.top()].level = familyMember[familyMember[DFS.top()].father].level + 1;
//			DFS.pop();
//		}
//	}
//
//	// Search for lagest generation
//	int container = 0;
//	int count = 1;
//	for (int i = 1; i < n; ++i)
//	{
//		if (container != familyMember[i].level)
//		{
//			if (count == 1) container = familyMember[i].level;
//			else --count;
//		}
//		else ++count;
//	}
//	count = 0;
//	for (int i = 1; i < n; ++i)
//	{
//		if (familyMember[i].level == container)++count;
//	}
//
//	cout << count << " " << container << endl;
//
//	return 0;
//}
//
////0	答案正确	1	308	11 / 11
////1	答案正确	1	308	2 / 2
////2	答案正确	1	256	6 / 6
////3	答案正确	1	264	6 / 6