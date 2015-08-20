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
//	int pivot = node * 2 + 1; //左子节点下标
//
//	if (pivot < n)
//	{
//		//左子节点存在，则继续深入左子节点（树）
//		if (tree[pivot] == -1)makeTree(pivot, n);
//		
//		//检查右子节点
//		//无论有没有右子树，都要先写当前节点（右子树都比当前大）
//		tree[node] = input[input.size() - 1];
//		input.pop_back();
//
//		if (pivot + 1 < n)
//		{
//			//存在，则深入右子节点（树）
//			makeTree(pivot + 1, n);
//		}
//	}
//	else
//	{
//		//无左子节点，到头了
//		tree[node] = input[input.size() - 1];
//		input.pop_back();
//
//		//完全树，无左子就无右子，不需要检查
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
////0	答案正确	1	308	18 / 18
////1	答案正确	1	308	3 / 3
////2	答案正确	1	180	2 / 2
////3	答案正确	1	308	2 / 2
////4	答案正确	1	308	3 / 3
////5	答案正确	1	256	2 / 2