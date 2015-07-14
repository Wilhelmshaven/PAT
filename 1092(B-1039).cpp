//#include <stdio.h>
//
//int main()
//{
//	int jewelry[128] = { 0 };
//	int wanted[128] = { 0 };
//
//	//input
//	char temp;
//	for (int i = 0;; i++)
//	{
//		temp = getchar();
//		if (temp != '\n')
//		{
//			jewelry[temp]++;
//		}
//		else break;
//	}
//	for (int i = 0;; i++)
//	{
//		temp = getchar();
//		if (temp != '\n')
//		{
//			wanted[temp]++;
//		}
//		else break;
//	}
//
//	//judge
//	int flag = 0;
//	for (int i = 0; i < 128; i++)
//	{
//		if (wanted[i]>jewelry[i])
//		{
//			flag = 1;
//			break;
//		}
//	}
//
//	//count
//	int less = 0;
//	int sum = 0;
//	if (flag == 1)
//	{
//		for (int i = 0; i < 128; i++)
//		{
//			wanted[i] = wanted[i] - jewelry[i];
//			if (wanted[i]>0)less = less + wanted[i];
//		}
//		printf("No %d", less);
//	}
//	else
//	{
//		for (int i = 0; i < 128; i++)
//		{
//			jewelry[i] = jewelry[i] - wanted[i];
//			sum = sum + jewelry[i];
//		}
//		printf("Yes %d", sum);
//	}
//
//	return 0;
//}