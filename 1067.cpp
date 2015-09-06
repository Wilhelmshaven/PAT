//#include <stdio.h>
//#include <vector>
//
//using namespace std;
//
////每次跑一个环，只标记不交换
//int runCycle(vector<int> &seq, vector<int> &mark, int m)
//{
//	int cnt = 0;
//	while (!mark[m])
//	{
//		mark[m] = 1;
//		++cnt;
//		m = seq[m];
//	}
//	return cnt;
//}
//
//int main(void)
//{
//	int n;
//	scanf("%d", &n);
//
//	vector<int> seq(n), mark(n);
//	for (int i = 0; i < n; ++i)scanf("%d", &seq[i]);
//		
//	int cnt = 0, times;
//	for (int i = 0; i < n; ++i)
//	{
//		times = runCycle(seq, mark, i);
//		if (times > 1)cnt += times + 1;
//	}
//
//	if (seq[0] != 0)cnt -= 2;
//
//	printf("%d", cnt);
//
//	return 0;
//}
//
//
////参考：https://github.com/biaobiaoqi/CPractice/blob/master/PAT/advancedlevel/APAT1067.cpp
////原先有两个点超时，其实既然只要次数，那为什么还要交换呢，模拟交换就好了，标记法嘛
////0	答案正确	1	308	15 / 15
////1	答案正确	11	1076	3 / 3
////2	答案正确	6	564	3 / 3
////3	答案正确	1	308	2 / 2
////4	答案正确	1	180	1 / 1
////5	答案正确	1	308	1 / 1