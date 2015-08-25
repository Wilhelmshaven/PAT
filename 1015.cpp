//#include <iostream>
//#include <cmath>
//#include <stack>
//
//using namespace std;
//
//int prime[9593];
//
//void printPrime()
//{
//	prime[0] = 2;
//	prime[1] = 3;
//
//	int pivot = 2;
//	bool flag = true;
//	for (int i = 6; i < 100010; i = i + 6)
//	{
//		for (int j = 0; j < pivot; ++j)
//		{
//			flag = true;
//			if ((i - 1) % prime[j] == 0)
//			{
//				flag = false;
//				break;
//			}
//		}
//		if (flag)
//		{
//			prime[pivot] = i - 1;
//			++pivot;
//		}
//
//		for (int j = 0; j < pivot; ++j)
//		{
//			flag = true;
//			if ((i + 1) % prime[j] == 0)
//			{
//				flag = false;
//				break;
//			}
//		}
//		if (flag)
//		{
//			prime[pivot] = i + 1;
//			++pivot;
//		}
//	}
//}
//
//bool isPrime(int n)
//{
//	if (n == 1)return false;
//
//	for (int i = 0; i < 9593; ++i)
//	{
//		if (prime[i] >= n)break;
//		if (n%prime[i] == 0)return false;
//	}
//	return true;
//}
//
//int main()
//{
//	printPrime();
//
//	int n, radix, powCnt;
//	stack<int> reverse;
//	while (1)
//	{
//		cin >> n;
//		if (n < 0)break;
//
//		cin >> radix;
//		//N不是质数
//		if (!isPrime(n))
//		{
//			cout << "No" << endl;
//			continue;
//		}
//
//		//反转		
//		while (n > 0)
//		{
//			reverse.push(n%radix);
//			n = n / radix;
//		}
//		
//		powCnt = 0;
//		while (!reverse.empty())
//		{
//			n = n + reverse.top() * pow(radix, powCnt);
//			reverse.pop();
//			++powCnt;
//		}
//
//		if (isPrime(n))cout << "Yes" << endl;
//		else cout << "No" << endl;
//	}
//
//	return 0;
//}
//
////0	答案正确	151	392	12 / 12
////1	答案正确	151	316	2 / 2
////2	答案正确	151	320	4 / 4
////3	答案正确	151	312	2 / 2