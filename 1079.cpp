//#include <stdio.h>
//#include <vector>
//#include <map>
//#include <stack>
//#include <cmath>
//
//using namespace std;
//
//int main(void)
//{
//	int n;
//	double p, r;
//	scanf("%d %lf %lf", &n, &p, &r);
//
//	vector<int> list;
//	list.resize(n);
//	map<int, int> supplier;
//
//	int input, k;
//	for (int i = 0; i < n; ++i)
//	{
//		scanf("%d", &k);
//
//		for (int j = 0; j < k; ++j)
//		{
//			scanf("%d", &input);
//			list[input] = i;
//		}
//
//		if (k == 0)
//		{
//			scanf("%d", &input);
//			supplier.insert(make_pair(i, input));
//		}
//	}
//
//	//����Ӧ��������Ϊ����һ��������飬�京��Ϊ�õ��Ժ��м��㹩Ӧ������ȣ�
//	vector<int> chainCount;
//	chainCount.resize(n);
//	for (size_t i = 0; i < n; ++i)chainCount[i] = 0;
//	
//	int pivot, count;
//	int maxChain = 0;  //˳���ҳ����Ӧ������
//	stack<int> myStack;
//	
//	for (int i = 1; i < n; ++i)
//	{
//		pivot = i;
//		count = 0;
//	
//		//����Ҫ�Ż�������ÿ����ֻ��һ��ǰ��������������·��Ҫ����
//		while (chainCount[pivot] == 0)
//		{
//			myStack.push(pivot);
//	
//			if (list[pivot] == 0)break;
//			pivot = list[pivot];	
//		}
//	
//		count = myStack.size() + chainCount[pivot] + 1;
//		for (size_t j = myStack.size(); j > 0; --j)
//		{
//			chainCount[myStack.top()] = count - j;
//			myStack.pop();
//		}
//			
//	
//		if (chainCount[i] > maxChain)maxChain = chainCount[i];  //˳���ҳ����Ӧ������
//	}
//
//	//��ʼ���ܵļ�Ǯ
//	double sum = 0;
//	map<int, int>::iterator iter;
//	r = r / 100 + 1;
//	for (iter = supplier.begin(); iter != supplier.end(); ++iter)
//	{
//		sum = sum + p*pow(r, chainCount[iter->first])*iter->second;
//	}
//
//	printf("%.1lf", sum);
//
//	return 0;
//}
//
////0	����ȷ	1	180	12 / 12
////1	����ȷ	1	308	1 / 1
////2	����ȷ	48	5632	2 / 2
////3	����ȷ	19	1056	2 / 2
////4	����ȷ	1	256	3 / 3
////5	����ȷ	36	3380	2 / 2
////6	����ȷ	35	3320	3 / 3