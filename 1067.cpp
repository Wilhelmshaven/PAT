//#include <stdio.h>
//#include <vector>
//
//using namespace std;
//
//int myFind(vector<int> v, int k,int n)
//{
//	for (int i = k; i < n; ++i)
//	{
//		if (v[i] != i)return i;
//	}
//	return 0;
//}
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//
//	vector<int> seq;
//	int tmp;
//	for (int i = 0; i < n; ++i)
//	{
//		scanf("%d", &tmp);
//		seq.push_back(tmp);
//	}
//
//	int cnt = 0;
//	size_t size = seq.size();
//
//	int flag = myFind(seq, 1, n);
//	while (flag)
//	{
//		if (seq[0] == 0)
//		{
//			seq[0] = seq[flag];
//			seq[flag] = 0;
//			++cnt;
//		}
//
//		while (seq[0] != 0)
//		{
//			swap(seq[0], seq[seq[0]]);
//			++cnt;
//		}
//
//		flag = myFind(seq, flag, n);
//	}
//
//	printf("%d", cnt);
//
//	return 0;
//}
//
////0	����ȷ	1	252	15 / 15
////1	���г�ʱ			0 / 3
////2	���г�ʱ			0 / 3
////3	����ȷ	1	308	2 / 2
////4	����ȷ	1	256	1 / 1
////5	����ȷ	1	180	1 / 1