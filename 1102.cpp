//#include <stdio.h>
//#include <vector>
//#include <queue>
//
//using namespace std;
//
//typedef struct node
//{
//	int left;
//	int right;
//};
//
//queue<int> myQueue;
//void inOrder(vector<node> &myTree, int n)
//{
//	if (myTree[n].left != -1)inOrder(myTree, myTree[n].left);	
//	myQueue.push(n);
//	if (myTree[n].right != -1)inOrder(myTree, myTree[n].right);
//	
//}
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//
//	//Initialize
//	vector<int> Parent(n);
//	vector<node> myTree(n);
//	for (int i = 0; i < n; ++i)Parent[i] = -1;
//
//	//Input & Swap
//	char input;
//	for (int i = 0; i < n; ++i)
//	{
//		getchar();
//
//		scanf("%c ", &input);
//		if (input == '-')myTree[i].right = -1;
//		else
//		{
//			myTree[i].right = input - 48;
//			Parent[input - 48] = i;
//		}
//
//		scanf("%c", &input);
//		if (input == '-')myTree[i].left = -1;
//		else
//		{
//			myTree[i].left = input - 48;
//			Parent[input - 48] = i;
//		}
//	}
//
//	// Find the tree root
//	int root;
//	for (int i = 0; i < n; ++i)
//	{
//		if (Parent[i] == -1)
//		{
//			root = i;
//			break;
//		}
//	}
//	
//	myQueue.push(root);
//	int output;
//	while (!myQueue.empty())
//	{
//		output = myQueue.front();
//		printf("%d", output);
//		myQueue.pop();
//
//		if (myTree[output].left != -1)myQueue.push(myTree[output].left);
//		if (myTree[output].right != -1)myQueue.push(myTree[output].right);
//
//		if (!myQueue.empty())printf(" ");
//	}
//	printf("\n");
//
//	inOrder(myTree, root);
//
//	while (!myQueue.empty())
//	{
//		output = myQueue.front();
//		printf("%d", output);
//		myQueue.pop();
//		if (!myQueue.empty())printf(" ");
//	}
//	printf("\n");
//
//	return 0;
//}
//
////0	答案正确	1	308	13 / 13
////1	答案正确	1	308	5 / 5
////2	答案正确	1	180	5 / 5
////3	答案正确	1	180	2 / 2