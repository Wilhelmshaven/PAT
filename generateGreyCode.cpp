////һ����ӡ������ĳ���
////ԭ����Ӧ�Ķ�����������λ�����Ϊ�����뵱ǰλ
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
//		//ʮ����ת������
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
//		for (int j = 1; j <= n; ++j)GreyCode[j - 1] = binary[j - 1] ^ binary[j];   //���
//		cout << i << ":";
//		for (int j = n - 1; j >= 0; --j)cout << GreyCode[j];                      //������
//		cout << endl;
//	}
//	
//	return 0;
//}