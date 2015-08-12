//#include <stdio.h>
//#include <stack>
//
//using namespace std;
//
//typedef struct node
//{
//	int addr;
//	int value;
//	int next;
//};
//
//int main(void)
//{
//	int begin, n, k;
//	stack<node> reverse;
//	static node myList[100000];
//	static node newList[100000];
//	
//	scanf("%d %d %d", &begin, &n, &k);
//
//	// input
//	int tmp;
//	for (int i = 0; i < n; ++i)
//	{
//		scanf("%d", &tmp);
//		myList[tmp].addr = tmp;
//		scanf("%d %d", &myList[tmp].value, &myList[tmp].next);
//	}
//
//	// Count nodes in this chain
//	tmp = begin;
//	int pivot = 1;
//	for (;;)
//	{
//		tmp = myList[tmp].next;
//		if (tmp != -1)
//		{
//			++pivot;
//		}
//		else break;
//	}
//	n = pivot;
//
//	// Using stack to reverse
//	pivot = 0;
//	while (n - pivot >= k)
//	{
//		for (int i = 0; i < k; ++i)
//		{
//			reverse.push(myList[begin]);
//			begin = myList[begin].next;
//		}
//		for (int i = 0; i < k; ++i)
//		{
//			newList[pivot] = reverse.top();
//			reverse.pop();
//			++pivot;
//			if (reverse.empty())break;
//		}
//	}
//	for (int i = pivot; i < n; ++i)
//	{
//		newList[i] = myList[begin];
//		begin = myList[begin].next;
//	}
//
//	// Output
//	for (int i = 0; i < n - 1; ++i)
//	{
//		newList[i].next = newList[i + 1].addr;
//		printf("%05d %d %05d\n", newList[i].addr, newList[i].value, newList[i].next);
//	}
//	printf("%05d %d -1\n", newList[n - 1].addr, newList[n - 1].value);
//
//	return 0;
//}
//
////0	����ȷ	1	308	12 / 12
////1	����ȷ	1	308	3 / 3
////2	����ȷ	1	308	2 / 2
////3	����ȷ	1	308	2 / 2
////4	����ȷ	1	308	2 / 2
////5	����ȷ	51	4404	3 / 3
////6	����ȷ	1	308	1 / 1