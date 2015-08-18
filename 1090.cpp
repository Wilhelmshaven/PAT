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
//	//整理供应链，方法为再做一个标记数组，其含义为该点以后有几层供应
//	size_t vSize = list.size();
//	vector<int> chainCount;
//	chainCount.resize(vSize);
//	for (size_t i = 0; i < vSize; ++i)chainCount[i] = 0;
//
//	int pivot, count;
//	int maxChain = 0;  //顺便找出最大供应链数量
//	stack<int> myStack;
//
//	for (int i = 0; i < n; ++i)
//	{
//		pivot = i;
//		count = 0;
//
//		//这里要优化，由于每个点只有一个前驱，所以爬过的路不要再爬
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
//		if (chainCount[i] > maxChain)maxChain = chainCount[i];  //顺便找出最大供应链数量
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
////0	答案正确	1	180	12 / 12
////1	答案正确	12	1196	3 / 3
////2	答案正确	12	1400	3 / 3
////3	答案正确	1	180	1 / 1
////4	答案正确	12	1172	1 / 1
////5	答案正确	1	176	2 / 2
////6	答案正确	12	1204	3 / 3