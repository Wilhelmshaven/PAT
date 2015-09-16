//#include <stdio.h>
//#include <vector>
//#include <cmath>
//
//using namespace std;
//
//int n, k, p, thisEnd;
//vector<int> powList, record;
//vector<vector<int>> result;
//
//void factorization(int pivot, int level, int sum)
//{
//	int i = pivot;
//	int thisSum;
//	while (i > 0)
//	{
//		if (level == 0 && i < thisEnd)break;
//		record.push_back(i);
//		thisSum = sum + powList[i];
//
//		//���������㼶��ȡ��Ӧ����
//		if (level < k - 1)
//		{
//			if (thisSum < n)factorization(i, level + 1, thisSum); //��С�ˣ��ͽ�����һ��
//			record.pop_back();                                  //�����Ƿ������һ������Ҫ������ǰ��¼
//		}
//		else
//		{
//			////��������Ż�Ч��
//			//for (int j = 0; j < k; ++j)printf("%d ", record[j]);
//			//printf("\n");
//
//			//���������һ����
//			if (thisSum != n)
//			{
//				record.pop_back();       //���������ھ�Ҫ����
//				if (thisSum < n)break;   //С�ڣ�����û�е����ˣ��ǾͲ��ü�����
//			}
//			else
//			{
//				//���ú��ʣ��Ǿ���һ���⣬��ȻҲ���ü�����
//				result.push_back(record);
//				record.pop_back();
//				break;
//			}
//		}
//
//		--i;
//	}
//}
//
//int main(void)
//{
//	int tmp;
//	scanf("%d %d %d", &n, &k, &p);
//
//	//��ӡ�ݱ�
//	for (int i = 0;;++i)
//	{
//		tmp = pow(i, p);
//		if (tmp > n)break;
//		powList.push_back(tmp);
//	}
//
//	size_t size = powList.size();
//	//��΢�Ż�һ���յ�
//	for (int i = size - 1; i >= 0; --i)
//	{
//		if (powList[i] * k < n)
//		{
//			thisEnd = i + 1;
//			break;
//		}
//	}
//	factorization(size - 1, 0, 0);
//
//	size = result.size();
//	if (size > 0)
//	{
//		//�����
//		int pivot, max = -1;
//		for (size_t i = 0; i < size; ++i)
//		{
//			tmp = 0;
//			for (int j = 0; j < k; ++j)tmp += result[i][j];
//			if (tmp > max)
//			{
//				max = tmp;
//				pivot = i;
//			}
//		}
//
//		//���
//		printf("%d = %d^%d", n, result[pivot][0], p);
//		for (int i = 1; i < k; ++i)printf(" + %d^%d", result[pivot][i], p);
//		printf("\n");
//	}
//	else printf("Impossible\n");
//
//	return 0;
//}
//
////0	����ȷ	1	308	15 / 15
////1	����ȷ	1	180	2 / 2
////2	����ȷ	1	256	5 / 5
////3	����ȷ	1	256	1 / 1
////4	����ȷ	1	252	1 / 1
////5	����ȷ	265	5428	3 / 3
////6	����ȷ	1	308	2 / 2
////7	����ȷ	1	308	1 / 1