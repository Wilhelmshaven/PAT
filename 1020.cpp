//#include <iostream>
//#include <vector>
//#include <queue>
//
//using namespace std;
//
//typedef struct node
//{
//	int lChild;
//	int rChild;
//};
//
//vector<int> postOrder, inOrder;
//queue<int> levelOrder;
//vector<node> myTree;
//
//int buildTree(vector<int>::iterator post, vector<int>::iterator in,  int n)
//{
//	if (n <= 0)return -1;
//	int root = post[n - 1];
//
//	int pivot;
//	for (int i = 0; i < n; ++i)
//	{
//		if (in[i] == root)
//		{
//			pivot = i;
//			break;
//		}
//	}
//
//	myTree[root].lChild = buildTree(post, in, pivot);
//	myTree[root].rChild = buildTree(post + pivot, in + pivot + 1, n - 1 - pivot);
//			
//	return root;
//}
//
//void printLevelOrder(int root)
//{
//	int lChild = myTree[root].lChild;
//	int rChild = myTree[root].rChild;
//
//	if(lChild!=-1)levelOrder.push(lChild);
//	if(rChild!=-1)levelOrder.push(rChild);	
//
//	cout << levelOrder.front();
//	levelOrder.pop();
//	if (!levelOrder.empty())
//	{
//		cout << " ";
//		printLevelOrder(levelOrder.front());
//	}
//}
//
//int main(void)
//{
//	int n;
//	cin >> n;
//	myTree.resize(31);
//
//	int tmp;
//	for (int i = 0; i < n; ++i)
//	{
//		cin >> tmp;
//		postOrder.push_back(tmp);
//	}
//	for (int i = 0; i < n; ++i)
//	{
//		cin >> tmp;
//		inOrder.push_back(tmp);
//	}
//
//	int root = buildTree(postOrder.begin(), inOrder.begin(), n);
//
//	levelOrder.push(root);
//	printLevelOrder(levelOrder.front());
//
//	return 0;
//}
//
////0	答案正确	1	308	15 / 15
////1	答案正确	1	308	1 / 1
////2	答案正确	1	308	2 / 2
////3	答案正确	1	308	2 / 2
////4	答案正确	1	308	2 / 2
////5	答案正确	1	308	3 / 3