//#include <iostream>
//#include <cmath>
//#include <stack>
//#include <vector>
//
//using namespace std;
//
//vector<int> prime;
//int cnt = 0;
//
//bool chkPrime(int n, int end)
//{
//	size_t size = prime.size();
//	for (size_t i = 2; i < size; ++i)
//	{
//		if (prime[i] > end)break;
//		if (n % prime[i] == 0)return false;
//	}
//	prime.push_back(n);
//	return true;
//}
//
//void printPrime(int n)
//{
//	prime.push_back(2);
//	prime.push_back(3);
//	int end;
//	for (int i = 6; i < n; i = i + 6)
//	{
//		end = sqrt(i + 1);
//		chkPrime(i - 1, end);
//		chkPrime(i + 1, end);
//	}
//}
//
//bool isPrime(int n)
//{
//	if (n < 2)return false;
//
//	size_t size = prime.size();
//	int end = sqrt(n);
//	for (size_t i = 0; i < size; ++i)
//	{
//		if (prime[i] > end)break;
//		if (n % prime[i] == 0)return false;
//	}
//	return true;
//}
//
//int main()
//{
//	printPrime(100000);
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
////0	答案正确	3	384	12 / 12
////1	答案正确	4	308	2 / 2
////2	答案正确	3	308	4 / 4
////3	答案正确	3	308	2 / 2