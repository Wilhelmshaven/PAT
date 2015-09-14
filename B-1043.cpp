//#include <stdio.h>
//
//void output(int p)
//{
//	switch (p)
//	{
//	case 0:
//		printf("P");
//		break;
//	case 1:
//		printf("A");
//		break;
//	case 2:
//		printf("T");
//		break;
//	case 3:
//		printf("e");
//		break;
//	case 4:
//		printf("s");
//		break;
//	case 5:
//		printf("t");
//		break;
//	default:
//		break;
//	}
//}
//
//int main()
//{
//	int cnt[6] = { 0, 0, 0, 0, 0, 0 };
//
//	char c;
//	while (1)
//	{
//		scanf("%c", &c);
//		if (c == '\n')break;
//
//		switch (c)
//		{
//		case 'P':
//			++cnt[0];
//			break;
//		case 'A':
//			++cnt[1];
//			break;
//		case 'T':
//			++cnt[2];
//			break;
//		case 'e':
//			++cnt[3];
//			break;
//		case 's':
//			++cnt[4];
//			break;
//		case 't':
//			++cnt[5];
//			break;
//		default:
//			break;
//		}
//	}
//
//	bool flag = true;
//	while (flag)
//	{
//		flag = false;
//		for (int i = 0; i < 6; ++i)
//		{
//			if (cnt[i] > 0)
//			{
//				--cnt[i];
//				output(i);
//				flag = true;
//			}
//		}
//	}
//
//	return 0;
//}
//
////0	答案正确	1	256	12 / 12
////1	答案正确	1	308	2 / 2
////2	答案正确	1	180	2 / 2
////3	答案正确	1	180	2 / 2
////4	答案正确	1	308	2 / 2