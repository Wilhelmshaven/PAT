//#include <stdio.h>
//#include <memory.h>
//
//struct ra
//{
//	long long integer;
//	long long son;
//	long long father;
//};
//
////շת���
//long long gcd(long long a, long long b)
//{
//	if (b != 0)return(gcd(b, a%b));
//	else return a;
//}
//
////Լ�֡��㲻����Ӧ����������ֵ������ˡ�
//void fraction(ra &r)
//{
//	//����ķ�����ĸΪ��
//	if (r.father == 0)
//	{
//		r.father = 1;
//		r.son = 0;
//	}
//	//��ĸС���㣬��������
//	else if (r.father < 0)
//	{
//		r.father = -r.father;
//		r.son = -r.son;
//	}
//
//	//����С����
//	if (r.son == 0)r.father = 1;
//	else
//	{
//		//���ӷ�ĸ����С�����˴�ʱ
//
//		// �����Լ��������
//		long long temp = gcd(r.son, r.father);
//		r.son = r.son / temp;
//		r.father = r.father / temp;
//
//		// ����ٷ��������
//		r.integer = r.integer + r.son / r.father;
//		r.son = r.son%r.father;
//	}
//}
//
//void add(ra &a, ra &b,ra &c)
//{
//	c.son = a.son*b.father + b.son*a.father;
//	c.father = a.father*b.father;
//	fraction(c);
//}
//
//void minus(ra &a, ra &b, ra &c)
//{
//	c.son = a.son*b.father - b.son*a.father;
//	c.father = a.father*b.father;
//	fraction(c);
//}
//
//void multi(ra &a, ra &b, ra &c)
//{
//	c.son = a.son*b.son;
//	c.father = a.father*b.father;
//	fraction(c);
//}
//
//void div(ra &a, ra &b, ra &c)
//{
//	c.son = a.son*b.father;
//	c.father = a.father*b.son;
//	fraction(c);
//}
//
//void output(ra r)
//{
//	//�ȴ������
//	if (r.father < 0)
//	{
//		r.father = -r.father;
//		r.son = -r.son;
//	}
//	if (r.son < 0 && r.integer != 0)
//	{
//		r.son = -r.son;
//	}
//
//	//���
//	if (r.integer > 0)
//	{
//		if (r.son != 0)printf("%lld %lld/%lld", r.integer, r.son, r.father);
//		else printf("%lld", r.integer);
//	}
//	if (r.integer == 0)
//	{
//		if (r.son > 0)printf("%lld/%lld", r.son, r.father);
//		if (r.son == 0)printf("0");
//		if (r.son < 0)printf("(%lld/%lld)", r.son, r.father);
//	}
//	if (r.integer < 0)
//	{
//		if (r.son != 0)printf("(%lld %lld/%lld)", r.integer, r.son, r.father);
//		else printf("(%lld)", r.integer);
//	}
//}
//
//void print(ra a, ra b, char c, ra result)
//{
//	output(a);
//	printf(" %c ", c);
//	output(b);
//	printf(" = ");
//	if (b.integer == 0 && b.son*b.father == 0 && c == '/')
//	{
//		printf("Inf");
//	}
//	else
//	{
//		output(result);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	ra a, b, aa, bb;
//	ra result;
//
//	scanf("%lld/%lld %lld/%lld", &a.son, &a.father, &b.son, &b.father);
//	a.integer = 0;
//	b.integer = 0;
//	aa = a;
//	bb = b;
//
//	fraction(aa);
//	fraction(bb);
//
//	memset(&result, 0, sizeof(result));
//	add(a, b, result);
//	print(aa, bb, '+', result);
//
//	memset(&result, 0, sizeof(result));
//	minus(a, b, result);
//	print(aa, bb, '-', result);
//
//	memset(&result, 0, sizeof(result));
//	multi(a, b, result);
//	print(aa, bb, '*', result);
//
//	memset(&result, 0, sizeof(result));
//	div(a, b, result);
//	print(aa, bb, '/', result);
//
//	return 0;
//}
//
////0	����ȷ	1	308	9 / 9
////1	����ȷ	1	308	5 / 5
////2	����ȷ	1	308	3 / 3
////3	����ȷ	1	308	3 / 3