//#include <iostream>
//#include <string>
//
//using namespace std;
//
//string MarsLow[13] = { "tret", "jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec" };
//string MarsHigh[13] = { "tret", "tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou" };
//
//int main()
//{
//	int n;
//	cin >> n;
//	getchar();
//
//	string input;
//	for (int i = 0; i < n; ++i)
//	{
//		getline(cin, input);
//
//		if (input[0] < 60)
//		{
//			int num = 0;
//			for (int i = 0; i < input.length(); ++i)num = num * 10 + input[i] - 48;
//
//			int high = num / 13;
//			int low = num % 13;
//
//			if (high != 0)
//			{
//				cout << MarsHigh[high];
//				if (low != 0)cout << " " << MarsLow[low];
//			}
//			else cout << MarsLow[low];		
//		}
//		else
//		{
//			string high, low;
//			int pivot = -1, num = 0;
//
//			for (int i = 0; i < input.length(); ++i)
//			{
//				if (input[i] == ' ')
//				{
//					pivot = i;
//					break;
//				}
//			}
//
//			if (pivot > -1)
//			{
//				high = input.substr(0, pivot);
//				low = input.substr(pivot + 1, input.length() - 1);
//			}
//			else
//			{
//				high = input;
//				low = input;
//			}
//
//			for (int i = 0; i < 13; ++i)
//			{
//				if (high == MarsHigh[i])num += i * 13;
//				if (low == MarsLow[i])num += i;
//			}
//
//			cout << num;
//		}
//
//		cout << endl;
//	}
//
//	return 0;
//}
//
////0	答案正确	1	308	12 / 12
////1	答案正确	1	308	2 / 2
////2	答案正确	1	308	2 / 2
////3	答案正确	1	308	2 / 2
////4	答案正确	1	180	2 / 2