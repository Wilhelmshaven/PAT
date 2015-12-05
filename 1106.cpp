//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//typedef struct tree
//{
//	int father;
//	vector<int> son;
//};
//
//int main()
//{
//	int n;
//	double price, percent;
//	cin >> n >> price >> percent;
//
//	vector<tree> chain(n);
//
//	int k, input;
//	for (int i = 0; i < n; ++i)
//	{
//		cin >> k;
//		for (int j = 0; j < k; ++j)
//		{
//			cin >> input;
//			chain[i].son.push_back(input);
//			chain[input].father = i;
//		}
//	}
//
//	int root = 0;
//	int level = 1;
//	int cntSon;
//	while (1)
//	{
//		cntSon = chain[root].son.size();
//
//		if (cntSon)
//	}
//
//	return 0;
//}