//#include <stdio.h>
//
//void output(int k)
//{
//	switch (k)
//	{
//	case 1:
//		printf("one");
//		break;
//	case 2:
//		printf("two");
//		break;
//	case 3:
//		printf("three");
//		break;
//	case 4:
//		printf("four");
//		break;
//	case 5:
//		printf("five");
//		break;
//	case 6:
//		printf("six");
//		break;
//	case 7:
//		printf("seven");
//		break;
//	case 8:
//		printf("eight");
//		break;
//	case 9:
//		printf("nine");
//		break;
//	default:
//		printf("zero");
//		break;
//	}
//}
//
//int main()
//{
//	char c;
//	int sum = 0;
//
//	while (1)
//	{
//		scanf("%c", &c);
//		if (c == '\n')break;
//		sum = sum + c - 48;
//	}
//
//	int result[4];
//	result[0] = sum % 10;
//	result[1] = sum / 10 % 10;
//	result[2] = sum / 100 % 10;
//	result[3] = sum / 1000 % 10;
//
//	for (c = 3; c >= 0; --c)if (result[c] != 0)break;
//	for (int i = c; i > 0; --i)
//	{
//		output(result[i]);
//		printf(" ");
//	}
//	output(result[0]);
//
//	return 0;
//}
//
//0	答案正确	1	180	1 / 1
//1	答案正确	1	308	2 / 2
//2	答案正确	1	308	3 / 3
//3	答案正确	1	256	3 / 3
//4	答案正确	1	308	3 / 3
//5	答案正确	1	180	3 / 3
//6	答案正确	1	180	3 / 3
//7	答案正确	1	308	2 / 2