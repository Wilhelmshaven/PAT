//#include <stdio.h>
//#include <string.h>
//
//char num[11];
//int space;
//
//void output(char num)
//{
//	if (space == 1)printf(" ");
//	else space = 1;
//
//	switch (num)
//	{
//	case '1':
//		printf("yi");
//		break;
//	case '2':
//		printf("er");
//		break;
//	case '3':
//		printf("san");
//		break;
//	case '4':
//		printf("si");
//		break;
//	case '5':
//		printf("wu");
//		break;
//	case '6':
//		printf("liu");
//		break;
//	case '7':
//		printf("qi");
//		break;
//	case '8':
//		printf("ba");
//		break;
//	case '9':
//		printf("jiu");
//		break;
//	case '0':
//		printf("ling");
//		break;
//	default:
//		break;
//	}
//}
//
//int ParseNum()
//{
//	int count;
//	bool Wan, Ge;
//	
//	count = 0;
//	for (int i = 2; i < 6; i++)
//	{
//		count = num[i] + count;
//	}
//	if (count == 192)Wan = false;
//	else Wan = true;
//	
//	count = 0;
//	for (int i = 6; i < 10; i++)
//	{
//		count = num[i] + count;
//	}
//	if (count == 192)Ge = false;
//	else Ge = true;
//
//	if ((Wan || Ge) == false)
//	{
//		output(num[2]);
//		return 0;
//	}
//
//	if (Wan)
//	{
//		if (num[2] != '0')
//		{
//			output(num[2]);
//			printf(" Qian");
//		}
//		else if (num[1] != '0')output(num[2]);
//
//		if (num[3] != '0')
//		{
//			output(num[3]);
//			printf(" Bai");
//		}
//		else if (num[2] != '0' && num[4] != '0')output(num[3]);
//
//		if (num[4] != '0')
//		{
//			output(num[4]);
//			printf(" Shi");
//		}
//		else if (num[3] != '0' && num[5] != '0')output(num[4]);
//
//		if (num[5] != '0')
//		{
//			output(num[5]);
//		}
//
//		printf(" Wan");
//	}
//
//	if (Ge)
//	{
//		if (num[6] != '0')
//		{
//			output(num[6]);
//			printf(" Qian");
//		}
//		else if (Wan)
//		{
//			output(num[6]);
//		}
//
//		if (num[7] != '0')
//		{
//			output(num[7]);
//			printf(" Bai");
//		}
//		else if (num[6] != '0'  && num[8] != '0')output(num[7]);
//
//		if (num[8] != '0')
//		{
//			output(num[8]);
//			printf(" Shi");
//		}
//		else if (num[7] != '0' && num[9] != '0')output(num[8]);
//
//		if (num[9] != '0')
//		{
//			output(num[9]);
//		}
//	}
//
//}
//
//int main()
//{
//	char n[11];
//	int len;
//	space = 0;
//
//	gets(n);
//	len = strlen(n);
//	memset(num, '0', 11);
//
//	for (int i = 0; i < 11; i++)
//	{
//		if (len - i >= 0 && n[len - i] != '-')num[10 - i] = n[len - i];
//	}
//
//	if (n[0] == '-')
//	{
//		printf("Fu");
//		space = 1;
//	}
//
//	if (num[1] != '0')
//	{
//		output(num[1]);
//		printf(" Yi");
//	}
//
//	ParseNum();
//
//	return 0;
//}