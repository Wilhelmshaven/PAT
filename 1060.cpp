//#include <iostream>
//#include <string>
//#include <memory>
//
//using namespace std;
//
//void output(string s, int length, int dot, int n)
//{
//	bool zeroFlag = false;
//
//	if (length > 1 || (length == 1 && s[0] != '0'))
//	{
//		cout << "0.";
//		if (s[0] == '0' && s[1] == '.')
//		{
//			--dot;
//			for (int i = 2; i < n + 2; ++i)
//			{
//				if (!zeroFlag&&s[i] == '0')
//				{
//					++n;
//					continue;
//				}
//				else zeroFlag = true;
//				if (i >= length)cout << "0";
//				else cout << s[i];
//			}
//		}
//		else
//		{
//			for (int i = 0; i < n; ++i)
//			{
//				if (i == dot)
//				{
//					++n;
//					continue;
//				}
//				if (i >= length)cout << "0";
//				else cout << s[i];
//			}
//		}
//		cout << "*10^" << dot;
//	}
//	else
//	{
//		cout << "0" << "*10^" << dot;
//	}
//}
//
//int main()
//{
//	int n;
//	string a, b;
//
//	cin >> n >> a >> b;
//
//	int len1, len2;
//	len1 = a.length();
//	len2 = b.length();
//
//	int dot1 = len1, dot2 = len2;
//
//	//Find where dot is
//	for (int i = 0; i < len1; ++i)
//	{
//		if (a[i] == '.')
//		{
//			dot1 = i;
//			break;
//		}
//	}
//	for (int i = 0; i < len2; ++i)
//	{
//		if (b[i] == '.')
//		{
//			dot2 = i;
//			break;
//		}
//	}
//
//	a.resize(200);
//	b.resize(200);
//	for (int i = len1; i < 200; ++i)a[i] = '0';
//	for (int i = len2; i < 200; ++i)b[i] = '0';
//
//	bool equal = true;
//	//先判断整数位是否足够，再处理
//	int p1 = 0, p2 = 0;
//	if (a[0] == '0')p1 = 2;
//	if (b[0] == '0')p2 = 2;
//
//	for (int i = 0; i < n; ++i)
//	{
//		if (p1 == dot1)++p1;
//		if (p2 == dot2)++p2;
//		if (a[p1] != b[p2])
//		{
//			equal = false;
//			break;
//		}
//		++p1;
//		++p2;
//	}
//
//
//	//输出
//	if (equal)
//	{
//		cout << "YES ";
//		output(a, len1, dot1, n);
//	}
//	else
//	{
//		cout << "NO ";
//		output(a, len1, dot1, n);
//		cout << " ";
//		output(b, len2, dot2, n);
//	}
//
//	return 0;
//}
//
////0	答案正确	1	180	8 / 8
////1	答案正确	1	308	7 / 7
////2	答案错误	1	180	0 / 2
////3	答案错误	1	308	0 / 2
////4	答案错误	1	180	0 / 2
////5	答案正确	1	256	2 / 2
////6	答案正确	1	308	2 / 2
//
////0	答案正确	1	180	8 / 8
////1	答案正确	1	308	7 / 7
////2	答案正确	1	180	2 / 2
////3	答案错误	1	180	0 / 2
////4	答案错误	1	256	0 / 2
////5	答案正确	1	308	2 / 2
////6	答案错误	1	308	0 / 2
//
////关键：要考虑所给输入数据的多种情况，比如 0 ， 0.0，0.0123，05.032，00.020等这种比较特殊的情况。
////尼玛啊后面四个是什么玩意……