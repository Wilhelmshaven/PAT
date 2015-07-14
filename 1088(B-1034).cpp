//#include <stdio.h>
//#include <memory.h>
//#include <cstdlib>
//
//struct ra
//{
//	long long integer;
//	long long son;
//	long long father;
//};
//
////辗转相除
//long long gcd(long long a, long long b)
//{
//	if (b != 0)return(gcd(b, a%b));
//	else return a;
//}
//
////约分
//void fraction(ra &r)
//{
//	if (r.son == 0 || r.father == 0)return;
//
//	int flag = 0;
//	if (r.son*r.father < 0)flag = 1;
//	
//	r.father = abs(r.father);
//	r.son = abs(r.son);
//
//	r.integer = r.son / r.father;
//	r.son = r.son%r.father;
//
//
//	//求最大公约数
//	if (r.son != 0)
//	{
//		long long temp = gcd(r.son, r.father);
//		r.son = r.son / temp;
//		r.father = r.father / temp;
//	}
//
//	if (flag != 0)
//	{
//		if (r.integer != 0)r.integer = -r.integer;
//		else r.son = -r.son;
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
//	while (1)
//	{
//		scanf("%lld/%lld %lld/%lld", &a.son, &a.father, &b.son, &b.father);
//		a.integer = 0;
//		b.integer = 0;
//		aa = a;
//		bb = b;
//
//		fraction(aa);
//		fraction(bb);
//
//		//应该是大整数样例没过了，longlong嘛，嗯好像也不是这个原因？
//		memset(&result, 0, sizeof(result));
//		add(a, b, result);
//		print(aa, bb, '+', result);
//
//		memset(&result, 0, sizeof(result));
//		minus(a, b, result);
//		print(aa, bb, '-', result);
//
//		memset(&result, 0, sizeof(result));
//		multi(a, b, result);
//		print(aa, bb, '*', result);
//
//		memset(&result, 0, sizeof(result));
//		div(a, b, result);
//		print(aa, bb, '/', result);
//	}
//	return 0;
//}