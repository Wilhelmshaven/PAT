//#include <iostream>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//
//typedef struct node
//{
//	int value;
//	int lChild;
//	int rChild;
//};
//vector<node> myTree;
//
//bool cmpMax(const int &a, const int &b)
//{
//	return b < a;
//}
//bool cmpMin(const int &a, const int &b)
//{
//	return a < b;
//}
////5 5 6 7
//int makeTree(vector<int>::iterator pre, vector<int>::iterator in, int n, int flag)
//{
//	if (n <= 0)return -1;
//
//	int root = pre[0];
//	int pivot = -1;
//	node myNode;
//
//	for (int i = 0; i < n; ++i)
//	{
//		if (in[i] == root)
//		{
//			//���������IF�ҽ���һ�¡���
//			//������������������������ͬ����Ҫȡ�ڶ�����Ϊ�����ָ����򡭡�
//			//����Ŀ�ڶ������룬ȡ��һ��8��ȻҲ������һ������Ķ�����������Ȼ��������������Ŀ�����
//			//Ҳ����Ҫ����ƽ��ɣ������ˡ���
//			if (i < n - 1 && !flag)
//				if (in[i + 1] == root)++i; 
//			
//			pivot = i;
//			break;
//		}
//	}
//
//	if (pivot != -1)
//	{
//		myNode.value = root;
//		myNode.lChild = makeTree(pre + 1, in, pivot, flag);
//		myNode.rChild = makeTree(pre + pivot + 1, in + pivot + 1, n - pivot - 1, flag);
//		myTree.push_back(myNode);
//		return root;
//	}
//	else return -1;
//}
//
//int main(void)
//{
//	int n, root;
//	cin >> n;
//	
//	vector<int> preOrder(n), inOrderMax, inOrderMin;
//	for (int i = 0; i < n; ++i)cin >> preOrder[i];
//	inOrderMax = preOrder;
//	inOrderMin = preOrder;
//	sort(inOrderMax.begin(), inOrderMax.end(), cmpMax);
//	sort(inOrderMin.begin(), inOrderMin.end(), cmpMin);
//
//	root = preOrder[0];
//	if (n > 1)
//	{
//		if (preOrder[1] > preOrder[0])makeTree(preOrder.begin(), inOrderMax.begin(), n, 0);
//		else makeTree(preOrder.begin(), inOrderMin.begin(), n, 1);
//
//		//����Ƿ�BST����ʱvector��ʵ�Ѿ�������洢
//		if (myTree.size() == n)
//		{
//			cout << "YES" << endl << myTree[0].value;
//			for (int i = 1; i < myTree.size(); ++i)cout << " " << myTree[i].value;
//		}
//		else cout << "NO" << endl;
//
//	}
//	else cout << "YES" << endl << root << endl;  //ֻ��һ����
//
//	return 0;
//}
//
////0	����ȷ	1	180	6 / 6
////1	����ȷ	1	308	6 / 6
////2	����ȷ	1	180	2 / 2
////3	����ȷ	1	308	3 / 3
////4	����ȷ	1	308	3 / 3
////5	����ȷ	2	436	2 / 2
////6	����ȷ	1	308	2 / 2
////7	����ȷ	1	180	1 / 1