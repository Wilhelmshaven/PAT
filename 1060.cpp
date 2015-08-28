//#include <iostream>
//#include <string>
//#include <memory>
//
//using namespace std;
//
//void output(string s, int length, int dot, int n)
//{
//	//前导零已经紧缩
//
//	bool zeroFlag = false;
//	int pivot = -1;
//
//	cout << "0.";
//	for (int i = 0; i < length; ++i)
//	{
//		if (s[i] != '0'&&s[i] != '.')
//		{
//			pivot = i;
//			break;
//		}
//	}
//
//	if (pivot != -1)
//	{
//		for (int i = pivot; i < n + pivot; ++i)
//		{
//			if (s[i] != '.')cout << s[i];
//			else ++n;
//		}
//		cout << "*10^";
//		if (pivot == 0)cout << dot - pivot;
//		else cout << dot - pivot + 1;
//	}
//	else
//	{
//		for (int i = 0; i < n; ++i)
//		{
//			if (s[i] != '.')cout << s[i];
//			else ++n;
//		}
//		cout << "*10^0";
//	}
//}
//
////找小数点位置（没有就是长度）
//int findDot(string s)
//{
//	for (int i = 0; i < s.length(); ++i)
//	{
//		if (s[i] == '.')return i;
//	}
//	return s.length();
//}
//
//int find1stNonZero(string s)
//{
//	for (int i = 0; i < s.length(); ++i)
//	{
//		if (s[i] != '0'&&s[i] != '.')return i;
//	}
//	return 0;
//}
//
//void erasePreZero(string *s, int *dot, int *len)
//{
//	int n = -1;
//	for (int i = 0; i < (*dot); ++i)
//	{
//		if ((*s)[i] != '0')
//		{
//			n = i;
//			break;
//		}
//	}
//	if (n != -1)
//	{
//		s->erase(0, n);
//		(*dot) -= n;
//		(*len) -= n;
//	}
//	else
//	{
//		s->erase(0, (*dot) - 1);
//		(*len) -= (*dot) - 1;
//		(*dot) = 1;
//	}
//}
//
//bool cmp(string a, string b, int n, int dot1, int dot2)
//{
//	//找第一个非零数
//	int p1 = find1stNonZero(a);
//	int p2 = find1stNonZero(b);
//
//	for (int i = 0; i < n; ++i)
//	{
//		if (p1 == dot1)++p1;
//		if (p2 == dot2)++p2;
//		if (a[p1] != b[p2])return false;
//		++p1;
//		++p2;
//	}
//	return true;
//}
//
//int main()
//{
//	int n;
//	string a, b;
//	cin >> n >> a >> b;
//
//	int len1 = a.length();
//	int len2 = b.length();
//
//	//Find where dot is
//	int dot1 = findDot(a);
//	int dot2 = findDot(b);
//
//	// 预处理，去掉多余前导零
//	erasePreZero(&a, &dot1, &len1);
//	erasePreZero(&b, &dot2, &len2);
//
//	// 末尾补零方便处理
//	a.resize(105);
//	b.resize(105);
//	for (int i = len1; i < 105; ++i)a[i] = '0';
//	for (int i = len2; i < 105; ++i)b[i] = '0';
//
//	bool equal = false;
//	if (dot1 == dot2)equal = cmp(a, b, n, dot1, dot2);
//
//	//输出
//	if (equal)cout << "YES ";
//	else cout << "NO ";
//	output(a, len1, dot1, n);
//	if (!equal)
//	{
//		cout << " ";
//		output(b, len2, dot2, n);
//	}
//
//	return 0;
//}
//
////0	答案正确	1	256	8 / 8
////1	答案正确	1	308	7 / 7
////2	答案正确	1	308	2 / 2
////3	答案正确	1	308	2 / 2
////4	答案正确	1	308	2 / 2
////5	答案正确	1	308	2 / 2
////6	答案正确	1	180	2 / 2