//#include <stdio.h>
//#include <memory.h>
//
//int main()
//{
//	int t;
//	scanf("%d", &t);
//
//	int sex[101];
//	int matrix[101][101];
//
//	for (int i = 0; i < t; i++)
//	{
//		printf("Case #%d:\n", i + 1);
//
//		int n, m, q;
//		scanf("%d%d%d", &n, &m, &q);
//
//		memset(sex, 0, sizeof(int) * 101);
//		memset(matrix, 0, sizeof(int) * 10201);
//
//		for (int j = 0; j < n; j++)
//		{
//			scanf("%d", &sex[j+1]);
//		}
//		for (int j = 0; j < m; j++)
//		{
//			int x, y, z;
//			scanf("%d%d%d", &x, &y, &z);
//			matrix[x][y] = matrix[y][x] = z;
//		}
//		for (int j = 0; j < q; j++)
//		{
//			int op;
//			scanf("%d", &op);
//
//			switch (op)
//			{
//			case 1:
//			{
//				int tmp;
//				scanf("%d", &tmp);
//				if (sex[tmp] == 1)sex[tmp] = 0;
//				else sex[tmp] = 1;
//				break;
//			}
//			case 2:
//			{
//				int x, y, z;
//				scanf("%d%d%d", &x, &y, &z);
//				matrix[x][y] = matrix[y][x] = z;
//				break;
//			}
//			default:
//			{
//				int bagua = 0;
//				for (int k = 1; k < n; k++)
//				{
//					for (int l = k + 1; l <= n; l++)
//					{
//						if (sex[k] != sex[l])bagua = bagua + matrix[k][l];
//					}
//				}
//				printf("%d\n", bagua);
//				break;
//			}
//			}
//		}
//	
//	}
//
//	return 0;
//}