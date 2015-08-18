//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <queue>
//
//using namespace std;
//
//typedef struct node
//{
//	int leftChild;
//	int rightChild;
//	int father;
//	int value;
//};
//
//vector<node> bst;
//vector<int> inOrderVector;
//vector<int> levelOrderVector;
//queue<int> myQueue;
//
//void inOrder(int node)
//{
//	if (bst[node].leftChild != -1)inOrder(bst[node].leftChild);
//	inOrderVector.push_back(node);
//	if (bst[node].rightChild != -1)inOrder(bst[node].rightChild);	
//}
//
//void levelOrder(int node)
//{
//	myQueue.pop();
//
//	if (bst[node].leftChild != -1)
//	{
//		levelOrderVector.push_back(bst[node].leftChild);
//		myQueue.push(bst[node].leftChild);
//	}
//	if (bst[node].rightChild != -1)
//	{
//		levelOrderVector.push_back(bst[node].rightChild);
//		myQueue.push(bst[node].rightChild);
//	}
//
//	if (!myQueue.empty())levelOrder(myQueue.front());
//}
//
//int main(void)
//{
//	int n;
//	cin >> n;
//
//	bst.resize(n);
//
//	for (int i = 0; i < n; ++i)
//	{
//		cin >> bst[i].leftChild >> bst[i].rightChild;
//		if (bst[i].leftChild != -1)bst[bst[i].leftChild].father = i;
//		if (bst[i].rightChild != -1)bst[bst[i].rightChild].father = i;
//	}
//
//	vector<int> value;
//	value.resize(n);
//	for (int i = 0; i < n; ++i)cin >> value[i];
//	sort(value.begin(), value.end());
//
//	
//	inOrder(0);// 中序遍历节点
//	for (int i = 0; i < n; ++i)bst[inOrderVector[i]].value = value[i]; //填充树
//
//	levelOrderVector.push_back(0);
//	myQueue.push(0);
//	levelOrder(myQueue.front()); // 层序遍历节点
//
//	//输出
//	for (int i = 0; i < n - 1; ++i)cout << bst[levelOrderVector[i]].value << " ";
//	cout << bst[levelOrderVector[n - 1]].value;
//
//	return 0;
//}
//
////0	答案正确	1	252	18 / 18
////1	答案正确	1	180	3 / 3
////2	答案正确	1	180	3 / 3
////3	答案正确	1	256	1 / 1
////4	答案正确	1	308	5 / 5