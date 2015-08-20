//#include <iostream>
//#include <vector>
//#include <string>
//#include <cmath>
//#include <stack>
//
//using namespace std;
//
//void preOrder(vector<int> *v, int node, int n)
//{
//	(*v).push_back(node);
//	if (2 * node < n)preOrder(v, 2 * node, n);
//	if (2 * node + 1 < n)preOrder(v, 2 * node + 1, n);
//}
//
//void inOrder(vector<int> *v, int node, int n)
//{
//	if (2 * node < n)inOrder(v, 2 * node, n);
//	(*v).push_back(node);
//	if (2 * node + 1 < n)inOrder(v, 2 * node + 1, n);
//}
//
//void postOrder(vector<int> *v, int node, int n)
//{
//	if (2 * node < n)postOrder(v, 2 * node, n);	
//	if (2 * node + 1 < n)postOrder(v, 2 * node + 1, n);
//	(*v).push_back(node);
//}
//
//
//int main(void)
//{
//	int n;
//	cin >> n;
//
//	int maxNode;
//
//	vector<int> tree;
//	vector<int> pOrder, iOrder, poOrder;
//	for (int i = 0;; ++i)
//	{
//		if (pow(2, i) - 1>= n)
//		{
//			maxNode = pow(2, i);
//			tree.resize(maxNode);
//			preOrder(&pOrder, 1, maxNode);
//			inOrder(&iOrder, 1, maxNode);
//			postOrder(&poOrder, 1, maxNode);
//			break;
//		}
//	}
//
//	//Get inOrder
//	stack<int> s;
//	string input;
//	vector<int> inputVec, preVec;
//	int num;
//	for (int i = 0; i < n; ++i)
//	{
//		cin >> input;
//		if (input == "Push")
//		{
//			cin >> num;
//			s.push(num);
//			preVec.push_back(num);
//		}
//		else
//		{
//			inputVec.push_back(s.top());
//			s.pop();
//			--i;
//		}
//	}
//	while (!s.empty())
//	{
//		cin >> input;
//		inputVec.push_back(s.top());
//		s.pop();
//	}
//	
//	//Check
//	int pivot;
//	int cnt = 0, i;
//	while (cnt < n)
//	{
//		pivot = -1;
//
//		i = preVec[cnt];
//
//		for (int j = 0; j < maxNode; ++j)
//		{
//			if (iOrder[j] == pOrder[cnt])
//			{
//				pivot = j;
//				break;
//			}
//		}
//
//		if (pivot != -1)
//		{
//			if (i == inputVec[pivot])
//			{
//				for (int j = 0; j < maxNode; ++j)
//				{
//					if (poOrder[j] == pOrder[cnt])
//					{
//						tree[j] = i;
//						break;
//					}
//				}
//			}
//		}
//
//		++cnt;
//	}
//
//	for (int i = 0; i < maxNode; ++i)
//	{
//		if (tree[i] != 0)
//		{
//			cout << tree[i];
//			--n;
//			if (n > 0)cout << " ";
//			else cout << endl;
//		}
//	}
//
//	return 0;
//}
//
////算啦算啦，完全不应该这么写，还是要老老实实构造树
////0	答案正确	1	264	12 / 12
////1	答案错误	1	308	0 / 4
////2	答案错误	1	308	0 / 4
////3	答案正确	1	308	1 / 1
////4	答案错误	1	264	0 / 4