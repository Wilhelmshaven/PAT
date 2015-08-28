//#include <iostream>
//#include <vector>
//#include <string>
//#include <stack>
//
//using namespace std;
//
//typedef struct node
//{
//	int lChild;
//	int rChild;
//};
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
//	//原本写了专门的打印函数，现在发现直接输出就可以了
//	cout << root;
//	if (root != preOrder[0])cout << " ";
//
//	return root;
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
//	buildTree(preOrder.begin(), inOrder.begin(), n);
//
//	return 0;
//}
//
////0	答案正确	1	308	12 / 12
////1	答案正确	1	308	4 / 4
////2	答案正确	1	180	4 / 4
////3	答案正确	1	180	1 / 1
////4	答案正确	1	180	4 / 4