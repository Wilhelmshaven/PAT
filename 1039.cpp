//#include <stdio.h>
//#include <vector>
//#include <map>
//#include <algorithm>
//
//using namespace std;
//
//int main(void)
//{
//	int n, k, index, m;
//	scanf("%d %d", &n, &k);
//
//	map<int, vector<int>> myList;
//	map<int, vector<int>>::iterator iter;
//	vector<int> course;
//
//	char name[5];
//	int nameInt;
//	for (int i = 0; i < k; ++i)
//	{
//		scanf("%d %d", &index, &m);
//		course.clear();
//		course.push_back(index);
//		for (int j = 0; j < m; ++j)
//		{
//			scanf("%s", &name);
//			nameInt = (name[0] << 24) + (name[1] << 16) + (name[2] << 8) + name[3];
//			iter = myList.find(nameInt);
//			if (iter == myList.end())myList.insert(make_pair(nameInt, course));
//			else iter->second.push_back(index);
//		}
//	}
//
//	size_t size;
//	for (int i = 0; i < n; ++i)
//	{
//		scanf("%s", &name);
//		nameInt = (name[0] << 24) + (name[1] << 16) + (name[2] << 8) + name[3];
//		iter = myList.find(nameInt);
//
//		if (iter != myList.end())
//		{
//			size = iter->second.size();
//			printf("%s %d", name, size);
//
//			sort(iter->second.begin(), iter->second.end());
//			for (size_t j = 0; j < size; ++j)printf(" %d", iter->second[j]);
//		}
//		else printf("%s 0", name);
//		printf("\n");
//	}
//
//	return 0;
//}
//
////0	答案正确	1	180	15 / 15
////1	答案正确	1	308	2 / 2
////2	答案正确	1	248	2 / 2
////3	答案正确	1	180	2 / 2
////4	答案正确	1	256	2 / 2
////5	答案正确	158	19984	2 / 2