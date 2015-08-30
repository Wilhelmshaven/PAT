//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main(void)
//{
//	int n;
//	cin >> n;
//
//	string input;
//	int size;
//	for (int i = 0; i < n; ++i)
//	{
//		cin >> input;
//		size = input.size();
//
//		//扫描输入
//		bool pFlag = false, tFlag = false, error = false;
//		int pPivot = 0, tPivot = 0;
//		for (int j = 0; j < size; ++j)
//		{
//			if (pFlag && input[j] == 'P')error = true;
//			if (tFlag && input[j] == 'T')error = true;
//
//			if (input[j] != 'A')
//			{
//				if (input[j] == 'P')
//				{
//					pFlag = true;
//					pPivot = j;
//				}
//				else if (input[j] == 'T')
//				{
//					tFlag = true;
//					tPivot = j;
//				}
//				else error = true;
//			}
//			
//			if (error)break;
//		}
//
//		// 公式：对于第一条，有t-p=1；对于第二条，有t-p=1且size-t=p；
//		// 对于第三条，可以由b的长度计算出迭代次数（b-1），然后有size-c-a=a*(b-1)，即c=a*b且b>0
//		int a = pPivot;
//		int b = tPivot - pPivot - 1;
//		int c = size - tPivot - 1;
//		
//		error = true;
//		if (b == 1 && a == c)error = false;
//		if (a*b == c && b > 0)error = false;
//
//		if (!error) cout << "YES" << endl;
//		else cout << "NO" << endl; 
//	}
//
//	return 0;
//}
//
////0	答案正确	1	176	11 / 11
////1	答案正确	1	308	2 / 2
////2	答案正确	1	180	2 / 2
////3	答案正确	1	308	2 / 2
////4	答案正确	1	308	2 / 2
////5	答案正确	1	256	1 / 1