//#include <stdio.h>
//#include <math.h>
//
//typedef struct rational
//{
//	long integer = 0;
//	long numerator = 0;
//	long denominator = 1;
//};
//
////շת���
//long gcd(long a, long b)
//{
//	if (b != 0)return(gcd(b, a%b));
//	else return a;
//}
//
////Լ��
//void defracment(rational *r)
//{
//	long yuShu;
//	long yueShu;
//	long a = r->numerator, b = r->denominator;
//
//	r->integer = r->numerator / r->denominator + r->integer;
//	r->numerator = r->numerator%r->denominator;
//
//	yueShu = gcd(r->numerator, r->denominator);
//
//	r->numerator = r->numerator / yueShu;
//	r->denominator = r->denominator / yueShu;
//}
//
//int main(void)
//{
//	int n;
//	scanf("%d", &n);
//
//	rational tmp, sum;
//
//	for (int i = 0; i < n; ++i)
//	{
//		scanf("%ld/%ld", &tmp.numerator, &tmp.denominator);
//
//		//ͨ�����
//		sum.numerator = sum.denominator*tmp.numerator + sum.numerator*tmp.denominator;
//		sum.denominator = sum.denominator*tmp.denominator;
//
//		//շת�������
//		defracment(&sum);
//	}
//
//	//�����ע�⴦�����
//	if (sum.numerator > 0 && sum.denominator < 0)
//	{
//		sum.numerator = -sum.numerator;
//		sum.denominator = -sum.denominator;
//	}
//
//	if (sum.integer != 0)
//	{
//		if (sum.numerator < 0)
//		{
//			--sum.integer;
//			sum.numerator = sum.numerator + sum.denominator;
//		}
//
//		printf("%ld", sum.integer);
//		if (sum.numerator != 0)printf(" %ld/%ld", sum.numerator, sum.denominator);
//	}
//	else
//	{
//		if (sum.numerator != 0)printf("%ld/%ld", sum.numerator, sum.denominator);
//		else printf("0");
//	}
//
//	return 0;
//}
//
////0	����ȷ	1	180	4 / 4
////1	����ȷ	1	308	4 / 4
////2	����ȷ	1	308	4 / 4
////3	����ȷ	1	308	4 / 4
////4	����ȷ	1	180	4 / 4