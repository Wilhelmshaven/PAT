//#include <stdio.h>
//#include <string.h>
////�ʸ���
//
//int main()
//{
//	int t;
//	scanf("%d", &t);
//
//	char str[1000];
//	long long sum = 0;
//
//	for (int i = 0; i < t; i++)
//	{
//		int len;
//		scanf("%s", &str);
//		len = strlen(str);
//
//		sum = 0;
//
//		// ����±�Ѱ������Ĵ�
//		// �������Σ�һ��������һ��ż��������ȫ��ͳ�����
//		for (int j = 0; j < len; j++)
//		{
//			for (int k = 0;; k++)
//			{
//				if (j - k<0 || j + k>len-1)break;
//				if (str[j - k] == str[j + k])sum++;
//			}
//			for (int k = 0;; k++)
//			{
//				if (j - k<0 || j + k + 1>len-1)break;
//				if (str[j - k] == str[j + k + 1])sum++;
//			}
//		}
//
//		printf("Case #%d: %ld\n", i + 1, sum);
//	}
//
//	return 0;
//}