//#include <stdio.h>
//
//int main()
//{
//	int broken[128] = { 0 };
//	static char type[100001];
//
//	char c;
//	for (int i = 0;; i++)
//	{
//		c = getchar();
//		if (c != '\n')broken[c]++;
//		else break;
//	}
//	gets(type);
//	
//	for (int i = 97; i < 123; i++)
//	{
//		if (broken[i] != 0)broken[i - 32]++;
//	}
//	for (int i = 65; i < 91; i++)
//	{
//		if (broken[i] != 0)broken[i + 32]++;
//	}
//	if (broken[43] != 0)
//	{
//		for (int i = 65; i < 91; i++)
//		{
//			broken[i]++;
//		}
//	}
//
//	for (int i = 0;; i++)
//	{
//		if (type[i] != '\0')
//		{
//			if (broken[type[i]] == 0)printf("%c", type[i]);
//		}
//		else break;
//	}
//
//	return 0;
//}