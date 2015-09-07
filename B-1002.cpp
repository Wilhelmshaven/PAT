//#include <stdio.h>
//
//void output(int k)
//{
//	switch (k)
//	{
//	case 1:
//		printf("yi");
//		break;
//	case 2:
//		printf("er");
//		break;
//	case 3:
//		printf("san");
//		break;
//	case 4:
//		printf("si");
//		break;
//	case 5:
//		printf("wu");
//		break;
//	case 6:
//		printf("liu");
//		break;
//	case 7:
//		printf("qi");
//		break;
//	case 8:
//		printf("ba");
//		break;
//	case 9:
//		printf("jiu");
//		break;
//	default:
//		printf("ling");
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

////0	答案正确	1	308	12 / 12
////1	答案正确	1	308	1 / 1
////2	答案正确	1	256	1 / 1
////3	答案正确	1	308	2 / 2
////4	答案正确	1	180	2 / 2
////5	答案正确	1	256	2 / 2