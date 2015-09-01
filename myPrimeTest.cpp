//#include <iostream>
//#include <cmath>
//#include <vector>
//
//using namespace std;
//
//vector<int> prime;
//int cnt = 0;
//int size = 2;
//
//bool chkPrime(int n, int end)
//{
//	for (int i = 2; i < size; ++i)
//	{
//		++cnt;
//		if (prime[i] > end)break;
//		if (n % prime[i] == 0)return false;
//	}
//	prime.push_back(n);
//	++size;
//
//	return true;
//}
//
//int printPrime(int n)
//{
//	prime.push_back(2);
//	prime.push_back(3);
//
//	int end;
//	for (int i = 6; i < n; i = i + 6)
//	{
//		++cnt;
//		end = sqrt(i+1);
//		chkPrime(i - 1, end);
//		chkPrime(i + 1, end);
//	}
//
//	return cnt;
//}
//
//int main(void)
//{
//	int n;
//	cin >> n;
//	cout << "循环次数为：" << (printPrime(n)) << endl;
//	return 0;
//}