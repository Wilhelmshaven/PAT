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
//	//������һ����
//	bool exist = false;
//	for (int i = 0; i < n; ++i)
//	{
//		myList[start1].flag = true;
//		start1 = myList[start1].next;
//		if (start1 == -1)break;
//	}
//	//�����ڶ�����
//	for (int i = 0; i < n; ++i)
//	{
//		//�ҵ��������ֿ�ͷ��
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
////0	����ȷ	1	948	10 / 10
////1	����ȷ	1	1076	1 / 1
////2	����ȷ	1	948	8 / 8
////3	����ȷ	1	1076	1 / 1
////4	����ȷ	1	944	2 / 2
////5	����ȷ	23	1076	3 / 3