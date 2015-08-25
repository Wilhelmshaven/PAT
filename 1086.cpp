//#include <iostream>
//#include <vector>
//#include <string>
//#include <cmath>
//#include <stack>
//
//using namespace std;
//
//typedef struct node
//{
//	int lChild;
//	int rChild;
//};
//
//vector<node> myTree;
//vector<int> preOrder, inOrder, postOrder;
//
//int buildTree(vector<int>::iterator pre, vector<int>::iterator in, int n)
//{
//	if (n <= 0)return -1;
//	int root = pre[0];
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
//	myTree[root].lChild = buildTree(pre + 1, in, pivot);
//	myTree[root].rChild = buildTree(pre + pivot + 1, in + pivot + 1, n - pivot - 1);
//			
//	return root;
//}
//
//void printPostOrder(int root)
//{
//	postOrder.push_back(root);
//
//	int lChild = myTree[root].lChild;
//	int rChild = myTree[root].rChild;
//
//	if (lChild != -1)printPostOrder(lChild);
//	if (rChild != -1)printPostOrder(rChild);
//
//	cout << root;
//	postOrder.pop_back();
//	if (!postOrder.empty())cout << " ";
//}
//
//int main(void)
//{
//	int n;
//	cin >> n;
//	myTree.resize(n + 1);
//
//	stack<int> myStack;
//	string op;
//	int tmp;
//	for (int i = 0; i < n * 2;++i)
//	{
//		cin >> op;
//
//		if (op == "Push")
//		{
//			cin >> tmp;
//			myStack.push(tmp);
//			preOrder.push_back(tmp);
//		}
//		else
//		{
//			if (!myStack.empty())
//			{
//				inOrder.push_back(myStack.top());
//				myStack.pop();
//			}
//		}
//	}
//
//	int root = buildTree(preOrder.begin(), inOrder.begin(), n);
//	printPostOrder(root);
//
//	return 0;
//}
//
////0	答案正确	1	308	12 / 12
////1	答案正确	1	308	4 / 4
////2	答案正确	1	180	4 / 4
////3	答案正确	1	180	1 / 1
////4	答案正确	1	180	4 / 4