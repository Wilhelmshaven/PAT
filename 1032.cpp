//#include <stdio.h>
//
//typedef struct node
//{
//	int next;
//	bool flag = false;
//};
//
//int main(void)
//{
//	int start1, start2, n;
//	scanf("%d%d%d", &start1, &start2, &n);
//
//	//input
//	static node myList[100000];
//	int addr;
//	char tmp;
//	for (int i = 0; i < n; ++i)
//	{
//		scanf("%d %c", &addr, &tmp);
//		scanf("%d", &myList[addr].next);
//	}
//
//	//先爬第一个链
//	bool exist = false;
//	for (int i = 0; i < n; ++i)
//	{
//		myList[start1].flag = true;
//		start1 = myList[start1].next;
//		if (start1 == -1)break;
//	}
//	//再爬第二个链
//	for (int i = 0; i < n; ++i)
//	{
//		//找到公共部分开头了
//		if (myList[start2].flag)
//		{
//			exist = true;
//			printf("%05d\n", start2);
//			break;
//		}
//
//		start2 = myList[start2].next;
//		if (start2 == -1)break;
//	}
//	if (!exist)printf("-1\n");
//
//	return 0;
//}
//
////0	答案正确	1	948	10 / 10
////1	答案正确	1	1076	1 / 1
////2	答案正确	1	948	8 / 8
////3	答案正确	1	1076	1 / 1
////4	答案正确	1	944	2 / 2
////5	答案正确	23	1076	3 / 3