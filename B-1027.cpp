//#include <stdio.h>
//
//int main()
//{
//	int n, line, i, j, k, last;
//	char c;
//
//	scanf("%d %c", &n, &c);
//
//	for (i = 1; i < 23; i++)
//	{
//		if (i*i * 2 - 1 > n)break;
//	}
//	i--;
//	line = i;
//	last = n - (line*line * 2 - 1);
//	line = line * 2 - 1;
//	
//	for(i = line ; i >= 1; i = i - 2)
//	{
//		for (j = 1; j <= (line - i) / 2; j++)printf(" ");
//		for (k = 1; k <= i;k++)printf("%c", c);
//		//for (j = 1; j <= (line - i) / 2; j++)printf(" ");
//		printf("\n");
//	}
//	for (i = 3; i <= line; i = i + 2)
//	{
//		for (j = 1; j <= (line - i) / 2; j++)printf(" ");
//		for (k = 1; k <= i; k++)printf("%c", c);
//		//for (j = 1; j <= (line - i) / 2; j++)printf(" ");
//		printf("\n");
//	}
//	printf("%d", last);
//
//	return 0;
//}