//#include <iostream>
//#include <string>
//#include <stack>
//
//using namespace std;
//
//int main(void)
//{
//	int n;
//	cin >> n;
//	getchar();
//
//	std::string Jap[100];
//	for (int i = 0; i < n; ++i)
//	{
//		getline(cin, Jap[i]);
//	}
//
//	//Check
//	stack<char> commom;
//	bool flag = false;
//	char tmp;
//	int len = Jap[0].length();
//
//	for (int i = 0; i < len; ++i)
//	{
//		tmp = Jap[0][len - i - 1];
//		int sublen;
//
//		for (int j = 1; j < n; ++j)
//		{
//			sublen = Jap[j].length();
//			if (Jap[j][sublen - i - 1] != tmp)
//			{
//				flag = true;
//				break;
//			}
//		}
//
//		if (flag)break;
//		
//		commom.push(tmp);
//	}
//
//	//Output
//	if (commom.empty())cout << "nai" << endl;
//	else
//	{
//		while (!commom.empty())
//		{
//			cout << commom.top();
//			commom.pop();
//		}
//	}
//
//	return 0;
//}
//
////0	答案正确	1	180	10 / 10
////1	答案正确	1	308	1 / 1
////2	答案正确	1	180	3 / 3
////3	答案正确	2	308	3 / 3
////4	答案正确	1	308	3 / 3