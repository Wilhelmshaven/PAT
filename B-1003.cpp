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
//		//ɨ������
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
//		// ��ʽ�����ڵ�һ������t-p=1�����ڵڶ�������t-p=1��size-t=p��
//		// ���ڵ�������������b�ĳ��ȼ��������������b-1����Ȼ����size-c-a=a*(b-1)����c=a*b��b>0
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
////0	����ȷ	1	176	11 / 11
////1	����ȷ	1	308	2 / 2
////2	����ȷ	1	180	2 / 2
////3	����ȷ	1	308	2 / 2
////4	����ȷ	1	308	2 / 2
////5	����ȷ	1	256	1 / 1