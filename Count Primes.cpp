//#include <iostream>
//#include <string>
//#include <memory>
//#include <math.h>
//
//using namespace std;
//
//static int prime[1000000];        //enough
//
////打印质数表
//int findPrime(int n)
//{
//	prime[0] = 2;
//	prime[1] = 3;
//	int pivot = 2;
//	int flag = 1;
//	int s;
//
//	for (int i = 6; i <= n; i = i + 6)
//	{
//		flag = 1;
//		s = sqrt(i) + 1;
//
//		for (int j = 0; j < pivot; j++)
//		{
//			if (prime[j]>s)break;
//			if ((i - 1) % prime[j] == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//
//		if (flag == 1)
//		{
//			prime[pivot] = i-1;
//			pivot++;
//		}
//
//		//
//		flag = 1;
//		for (int j = 0; j < pivot; j++)
//		{
//			if (prime[j]>s)break;
//			if ((i + 1) % prime[j] == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//
//		if (flag == 1)
//		{
//			prime[pivot] = i + 1;
//			pivot++;
//		}
//	}
//
//	if (prime[pivot - 1] >= n)pivot--;
//
//	if (n > 3)return pivot;
//	if (n < 3)return 0;
//	if (n == 3)return 1;
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//
//	int count = findPrime(n);
//
//	cout << count;
//
//	return 0;
//}