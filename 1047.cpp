//#include <stdio.h>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main(void)
//{
//	int n, k, c, index;
//	scanf("%d %d\n", &n, &k);
//
//	vector<vector<int>> myList(k + 1);
//
//	char name[5];
//	for (int i = 0; i < n; ++i)
//	{
//		scanf("%s %d", &name, &c);
//		for (int j = 0; j < c; ++j)
//		{
//			scanf("%d", &index);
//			myList[index].push_back((name[0] << 24) + (name[1] << 16) + (name[2] << 8) + name[3]);
//		}
//	}
//
//	size_t size = k + 1, sSize;
//
//	for (size_t i = 1; i < size; ++i)
//	{
//		sSize = myList[i].size();
//		printf("%d %d\n", i, sSize);
//
//		sort(myList[i].begin(), myList[i].end());
//
//		for (size_t j = 0; j < sSize;++j)
//		{
//			name[0] = myList[i][j] >> 24;
//			name[1] = myList[i][j] >> 16;
//			name[2] = myList[i][j] >> 8;
//			name[3] = myList[i][j];
//			printf("%s\n", name);
//		}
//	}
//
//	return 0;
//}
//
////倒排索引、内存压缩
////0	答案正确	1	308	15 / 15
////1	答案正确	1	256	3 / 3
////2	答案正确	1	268	3 / 3
////3	答案正确	140	9780	4 / 4