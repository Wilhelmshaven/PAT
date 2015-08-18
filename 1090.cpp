//#include <stdio.h>
//#include <vector>
//#include <math.h>
//#include <stack>
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
//	int input;
//	for (int i = 0; i < n; ++i)
//	{
//		scanf("%d", &input);
//		list.push_back(input);
//	}
//
//	//����Ӧ��������Ϊ����һ��������飬�京��Ϊ�õ��Ժ��м��㹩Ӧ
//	size_t vSize = list.size();
//	vector<int> chainCount;
//	chainCount.resize(vSize);
//	for (size_t i = 0; i < vSize; ++i)chainCount[i] = 0;
//
//	int pivot, count;
//	int maxChain = 0;  //˳���ҳ����Ӧ������
//	stack<int> myStack;
//
//	for (int i = 0; i < n; ++i)
//	{
//		pivot = i;
//		count = 0;
//
//		//����Ҫ�Ż�������ÿ����ֻ��һ��ǰ��������������·��Ҫ����
//		while (chainCount[pivot] == 0)
//		{
//			myStack.push(pivot);
//
//			if (list[pivot] == -1)break;
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
//	count = 0;
//	for (int i = 0; i < n; ++i)
//	{
//		if (chainCount[i] == maxChain)++count;
//	}
//
//	p = p*pow((1 + r / 100), maxChain - 1);
//
//	printf("%.2f %d\n", p, count);
//
//	return 0;
//}
//
////0	����ȷ	1	180	12 / 12
////1	����ȷ	12	1196	3 / 3
////2	����ȷ	12	1400	3 / 3
////3	����ȷ	1	180	1 / 1
////4	����ȷ	12	1172	1 / 1
////5	����ȷ	1	176	2 / 2
////6	����ȷ	12	1204	3 / 3