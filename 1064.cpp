//#include <stdio.h>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//vector<int> tree;
//vector<int> input;
//
//void makeTree(int node, int n)
//{
//	int pivot = node * 2 + 1; //���ӽڵ��±�
//
//	if (pivot < n)
//	{
//		//���ӽڵ���ڣ�������������ӽڵ㣨����
//		if (tree[pivot] == -1)makeTree(pivot, n);
//		
//		//������ӽڵ�
//		//������û������������Ҫ��д��ǰ�ڵ㣨���������ȵ�ǰ��
//		tree[node] = input[input.size() - 1];
//		input.pop_back();
//
//		if (pivot + 1 < n)
//		{
//			//���ڣ����������ӽڵ㣨����
//			makeTree(pivot + 1, n);
//		}
//	}
//	else
//	{
//		//�����ӽڵ㣬��ͷ��
//		tree[node] = input[input.size() - 1];
//		input.pop_back();
//
//		//��ȫ���������Ӿ������ӣ�����Ҫ���
//	}
//}
//
//bool cmp(const int &a, const int &b)
//{
//	return b < a;
//}
//
//int main(void)
//{
//	int n;
//	scanf("%d", &n);
//
//	int tmp;
//	input.resize(n);
//	tree = input;
//	for (int i = 0; i < n; ++i)
//	{
//		scanf("%d", &input[i]);
//		tree[i] = -1;
//	}
//	sort(input.begin(), input.end(), cmp);
//
//	makeTree(0, n);
//
//	printf("%d", tree[0]);
//	for (int i = 1; i < n; ++i)printf(" %d", tree[i]);
//
//	return 0;
//}
//
////0	����ȷ	1	308	18 / 18
////1	����ȷ	1	308	3 / 3
////2	����ȷ	1	180	2 / 2
////3	����ȷ	1	308	2 / 2
////4	����ȷ	1	308	3 / 3
////5	����ȷ	1	256	2 / 2