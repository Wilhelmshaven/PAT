//#include <stdio.h>
//#include <memory.h>
//
//int main()
//{
//	char fh;
//	char num[10002];//因为存了小数点和E，所以还是要比数据规模多开大一点点
//	int zhishu;
//	int dot, len;
//
//	memset(num, 48, sizeof(char)*10002);
//
//	fh = getchar();
//	for (int i = 0;; i++)
//	{
//		scanf("%c", &num[i]);
//		if (num[i] == '.')dot = i;
//		if (num[i] == 'E')
//		{
//			num[i] = '0';
//			len = i;
//			break;
//		}
//	};
//	scanf("%d", &zhishu);
//
//	dot = dot + zhishu;
//
//	//output
//	if (fh == '-')printf("-");
//
//	//左移的处理情况
//	if (dot < 1)
//	{
//		printf("0.");
//		for (int i = dot; i < len; i++)
//		{
//			if (i < 0)printf("0");
//			else if (num[i] != '.')printf("%c", num[i]);
//		}
//	}
//	//右移的处理情况
//	else
//	{
//		for (int i = 0; i < dot + 1; i++)
//		{
//			if (num[i] != '.')printf("%c", num[i]);
//		}
//		if (dot + 1< len)
//		{
//			printf(".");
//			for (int i = dot + 1; i < len; i++)printf("%c", num[i]);
//		}
//
//	}
//
//	return 0;
//}