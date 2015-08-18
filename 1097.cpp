//#include <stdio.h>
//#include <vector>
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
//	static node myList[100000];
//	static int valueMark[10001] = { 0 };
//	vector<node> newList;
//	vector<node> removedList;
//
//	int start, n;
//	scanf("%d %d", &start, &n);
//	for (int i = 0; i < 100000; ++i)myList[i].addr = i;
//
//	//input
//	int pivot;
//	for (int i = 0; i < n; ++i)
//	{
//		scanf("%d", &pivot);
//		scanf("%d %d", &myList[pivot].value, &myList[pivot].next);
//	}
//
//	//deduplication
//	pivot = start;
//	int valueTmp;
//	for (int i = 0; i < n; ++i)
//	{
//		//ABS
//		valueTmp = myList[pivot].value;
//		if (valueTmp < 0)valueTmp = -valueTmp;
//
//		//Just check & mark
//		if (valueMark[valueTmp] == 0)
//		{
//			valueMark[valueTmp] = 1;
//			newList.push_back(myList[pivot]);
//		}
//		else
//		{
//			removedList.push_back(myList[pivot]);
//		}
//
//		pivot = myList[pivot].next;		
//
//		if (pivot == -1)break;
//	}
//
//	//Output
//
//	//First output valid nodes
//	size_t len = newList.size();
//	if (len != 0)
//	{
//		for (size_t i = 0; i < len - 1; ++i)
//		{
//			printf("%05d %d %05d\n", newList[i].addr, newList[i].value, newList[i + 1].addr);
//		}
//		printf("%05d %d -1\n", newList[len - 1].addr, newList[len - 1].value);
//	}
//
//	//Then output unvalid nodes
//	len = removedList.size();
//	if (len != 0)
//	{
//		for (size_t i = 0; i < len - 1; ++i)
//		{
//			printf("%05d %d %05d\n", removedList[i].addr, removedList[i].value, removedList[i + 1].addr);
//		}
//		printf("%05d %d -1\n", removedList[len - 1].addr, removedList[len - 1].value);
//	}
//
//	return 0;
//}
//
////0	答案正确	1	1460	13 / 13
////1	答案正确	2	1460	3 / 3
////2	答案正确	2	1460	2 / 2
////3	答案正确	50	4436	4 / 4
////4	答案正确	51	4532	3 / 3