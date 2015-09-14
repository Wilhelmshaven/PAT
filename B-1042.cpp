//#include <stdio.h>
//
//int main()
//{
//	int Record[26];
//	for (int i = 0; i < 26; ++i)Record[i] = 0;
//
//	char c;
//	while (1)
//	{
//		scanf("%c", &c);
//		if (c == '\n')break;
//		if (c >= 'A'&&c <= 'Z')c += 32;
//		++Record[c - 97];
//	}
//
//	int pivot = -1, max = 0;
//	for (int i = 0; i < 26; ++i)
//	{
//		if (Record[i] > max)
//		{
//			max = Record[i];
//			pivot = i;
//		}
//	}
//
//	printf("%c %d", pivot + 97, max);
//
//	return 0;
//}
//
////0	答案正确	1	180	12 / 12
////1	答案正确	1	180	2 / 2
////2	答案正确	1	308	3 / 3
////3	答案正确	1	308	3 / 3