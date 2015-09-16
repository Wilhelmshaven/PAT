//#include <stdio.h>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main()
//{
//	long n;
//	scanf("%ld", &n);
//
//	vector<long> unSorted, result;
//	long input;
//	for (long i = 0; i < n; ++i)
//	{
//		scanf("%d", &input);
//		unSorted.push_back(input);
//	}
//
//	vector<long> mark(n);
//	size_t size = unSorted.size();
//
//	//First Time,find max;
//	long max = -1;
//	for (size_t i = 0; i < size; ++i)
//	{
//		if (unSorted[i] >= max)
//		{
//			max = unSorted[i];
//			++mark[i];
//		}
//	}
//
//	//Second Time,find min;
//	long min = 1000000001;
//	for (size_t i = 0; i < size; ++i)
//	{
//		if (unSorted[size - i - 1] <= min)
//		{
//			min = unSorted[size - i - 1];
//			++mark[size - i - 1];
//		}
//	}
//
//	//Count.
//	for (size_t i = 0; i < size; ++i)
//	{
//		if (mark[i] == 2)result.push_back(unSorted[i]);
//	}
//
//	sort(result.begin(), result.end());
//
//	size = result.size();
//	printf("%ld\n", size);
//	if (size > 0)
//	{
//		printf("%ld", result[0]);
//		if (size > 1)
//		{
//			for (size_t i = 1; i < size; ++i)printf(" %ld", result[i]);
//		}
//	}
//	printf("\n");
//
//	return 0;
//}
//
////0	答案正确	1	252	12 / 12
////1	答案正确	19	2984	2 / 2
////2	答案正确	8	1272	4 / 4
////3	答案正确	15	2164	3 / 3
////4	答案正确	14	1960	2 / 2
////5	答案正确	14	1908	2 / 2