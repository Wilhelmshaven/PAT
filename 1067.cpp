//#include <stdio.h>
//#include <vector>
//
//using namespace std;
//
////ÿ����һ������ֻ��ǲ�����
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
////�ο���https://github.com/biaobiaoqi/CPractice/blob/master/PAT/advancedlevel/APAT1067.cpp
////ԭ���������㳬ʱ����ʵ��ȻֻҪ��������Ϊʲô��Ҫ�����أ�ģ�⽻���ͺ��ˣ���Ƿ���
////0	����ȷ	1	308	15 / 15
////1	����ȷ	11	1076	3 / 3
////2	����ȷ	6	564	3 / 3
////3	����ȷ	1	308	2 / 2
////4	����ȷ	1	180	1 / 1
////5	����ȷ	1	308	1 / 1