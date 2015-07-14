//#include <stdio.h>
//#include <memory.h>
//
//int jieCheng(int max)
//{
//	int result = 1;
//
//	for (int i = 0; i < max; i++)
//	{
//		result = result*(max - i);
//	}
//
//	return result;
//}
//
//int findMax(int count[], int n)
//{
//	int max = 0;
//	int pivot = 0;
//
//	for (int i = 1; i < n; i++)
//	{
//		if (count[i]>max)
//		{
//			max = count[i];
//			pivot = i;
//		}
//	}
//	count[pivot] = 0;
//
//	return max;
//}
//
//int main()
//{
//	int t;
//	scanf("%d", &t);
//
//	char card[13][2];
//	int count[14];
//
//	for (int i = 0; i < t; i++)
//	{
//		int n;
//		scanf("%d", &n);
//
//		memset(card, 0, sizeof(char) * 26);
//		memset(count, 0, sizeof(int) * 14);
//
//		for (int j = 0; j < n; j++)
//		{
//			getchar();
//			scanf("%c%c", &card[j][0], &card[j][1]);
//			if (card[j][0] < 60)count[card[j][0] - 48]++;
//			switch (card[j][0])
//			{
//			case 'T':
//				count[10]++;
//				break;
//			case 'J':
//				count[11]++;
//				break;
//			case 'Q':
//				count[12]++;
//				break;
//			case 'K':
//				count[13]++;
//				break;
//			case 'A':
//				count[1]++;
//				break;
//			default:
//				break;
//			}
//		}
//
//		int max = 0;
//		int pivot = 0;
//		int result = 0;
//
//		max = findMax(count, 14);
//
//		//n<=5
//		if (max == 4)
//		{
//			printf("Case #%d: %d\n", i + 1, 0);
//			continue;
//		}
//		if (max == 1)
//		{
//			printf("Case #%d: %d\n", i + 1, jieCheng(n));
//			continue;
//		}
//
//		if (max == 2)
//		{
//			max = findMax(count, 14);
//			if (max == 2)
//			{
//				max = findMax(count, 14);
//				if (max == 1)result = 48;
//				else result = 8;
//			}
//			else if (max == 1)result = jieCheng(n) - (n - 1) * 2 * jieCheng(n - 2);
//			else result = 0;
//			
//			printf("Case #%d: %d\n", i + 1, result);
//			continue;
//		}
//		if (max == 3)
//		{
//			if (n == 5)result = 12;
//			else result = 0;
//
//			printf("Case #%d: %d\n", i + 1, result);
//			continue;
//		}
//	}
//
//	return 0;
//}