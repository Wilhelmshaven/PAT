//#include <stdio.h>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	int np, ng;
//	scanf("%d%d", &np, &ng);
//
//	vector<int> weight(np), rank(np), group(np), tmp;
//	for (int i = 0; i < np; ++i)scanf("%d", &weight[i]);
//	for (int i = 0; i < np; ++i)scanf("%d", &group[i]);
//
//	//��Ŀ��֤��Ng>1�������û�취�鲢�����
//	int pivot, size = group.size(), max, maxPivot, nowRank, playerNum;
//	while (size > 1)
//	{
//		tmp.clear();
//		pivot = max = 0;
//
//		nowRank = size / ng + 1;
//		if (size%ng != 0)++nowRank;
//
//		while (pivot < size)
//		{
//			playerNum = group[pivot];
//			rank[playerNum] = nowRank;     //д��������
//
//			if (weight[playerNum]>max)
//			{
//				max = weight[playerNum];
//				maxPivot = playerNum;
//			}
//
//			++pivot;
//
//			if (pivot % ng == 0 || pivot == size)            //ÿN������λ�����������
//			{
//				max = 0;
//				tmp.push_back(maxPivot);
//			}
//		}
//		group = tmp;
//		size = group.size();
//	}
//	rank[group[0]] = 1;
//
//	printf("%d", rank[0]);
//	for (int i = 1; i < np; ++i)printf(" %d", rank[i]);
//
//	return 0;
//}
//
////0	����ȷ	1	256	13 / 13
////1	����ȷ	1	180	3 / 3
////2	����ȷ	1	252	2 / 2
////3	����ȷ	1	308	3 / 3
////4	����ȷ	1	180	2 / 2
////5	����ȷ	1	180	2 / 2