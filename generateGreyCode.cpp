////一个打印格雷码的程序
////原理：对应的二进制相邻两位异或作为格雷码当前位
//#include <iostream>
//#include <vector>
//#include <cmath>
//
//using namespace std;
//
//int main(void)
//{
//	int n, pivot, d;
//	cout << "Give me a N" << endl;
//	cin >> n;
//	
//	vector<int> GreyCode(n), binary(n+1);
//	for (int i = 0; i < pow(2, n); ++i)
//	{
//		//十进制转二进制
//		pivot = 0;
//		d = i;
//		while (d > 1)
//		{
//			binary[pivot] = d % 2;
//			d = d / 2;
//			++pivot;
//		}
//		binary[pivot] = d;
//  
//		for (int j = 1; j <= n; ++j)GreyCode[j - 1] = binary[j - 1] ^ binary[j];   //异或
//		cout << i << ":";
//		for (int j = n - 1; j >= 0; --j)cout << GreyCode[j];                      //输出结果
//		cout << endl;
//	}
//	
//	return 0;
//}