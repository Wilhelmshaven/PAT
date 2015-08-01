//#include <stdio.h>
//#include <map>
//
//using namespace std;
//
//int main()
//{	
//	map<int, int> node;
//	int input[100000][2];
//
//	int n, start;
//	scanf("%d%d", &n, &start);
//
//	int addr;
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &addr);
//		scanf("%d%d", &input[addr][0], &input[addr][1]);
//	}
//
//	// Find the specific linked list and insert the node into MAP
//	// Notice that given start addr maybe -1, means that the specific linked list unexists.
//	if (start != -1)
//	{
//		for (;;)
//		{
//			node.insert(make_pair(input[start][0], start));
//			if (input[start][1] == -1)break;
//			start = input[start][1];
//		}
//
//		// Output
//		map<int, int>::iterator currentNode = node.begin();
//		printf("%d %05d\n", node.size(), currentNode->second);
//		while (1)
//		{
//			printf("%05d %d", currentNode->second, currentNode->first);
//			++currentNode;
//
//			if (currentNode == node.end())
//			{
//				printf(" -1\n");
//				break;
//			}
//			printf(" %05d\n", currentNode->second);
//		}
//	}
//	else printf("0 -1\n");
//
//	return 0;
//}
//
////0	答案正确	1	308	15 / 15
////1	答案正确	1	308	3 / 3
////2	答案正确	1	180	3 / 3
////3	答案正确	72	7424	3 / 3
////4	答案正确	1	308	1 / 1