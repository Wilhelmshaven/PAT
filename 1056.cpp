#include <stdio.h>
#include <vector>
#include <queue>

using namespace std;

int main()
{
	int np, ng;
	scanf("%d%d", &np, &ng);

	vector<int> weight;
	int w;
	for (int i = 0; i < np; ++i)
	{
		scanf("%d", &w);
		weight.push_back(w);
	}

	queue<int> group;
	for (int i = 0; i < np; ++i)
	{
		scanf("%d", &w);
		group.push(w);
	}

	int count;
	int rank;
	int max = -1;
	int front;
	while (1)
	{
		if (np == 1)
		{
			weight[max] = 1;
			break;
		}

		count = np;
		rank = (np + ng) / ng + 1;

		while (count > ng)
		{
			max = group.front();
			group.pop();

			for (int i = 1; i < ng; i++)
			{
				front = group.front();
				group.pop();
				if (weight[max] < weight[front])
				{
					weight[max] = rank;
					max = front;
				}
				else weight[front] = rank;
			}
			count = count - ng;
			group.push(max);
		}

		max = group.front();
		group.pop();
		for (int i = 1; i < count; i++)
		{
			front = group.front();
			group.pop();
			if (weight[max] < weight[front])
			{
				weight[max] = rank;
				max = front;
			}
			else weight[front] = rank;
		}
		group.push(max);

		if (np % ng == 0)np = np / ng;
		else np = np / ng + 1;
	}

	int pivot = 0;
	for (int pivot = 0; pivot < weight.size() - 1; ++pivot)
	{
		printf("%d ", weight[pivot]);
	}
	printf("%d", weight[pivot]);

	return 0;
}

//0	答案正确	1	256	13 / 13
//1	答案错误	1	308	0 / 3
//2	异常退出	1	248	0 / 2
//3	答案正确	1	308	3 / 3
//4	答案正确	1	256	2 / 2
//5	答案错误	1	180	0 / 2