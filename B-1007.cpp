//#include <iostream>
//#include <cmath>
//#include <vector>
//
//using namespace std;
//
//vector<int> prime;
//int a = 0;
//bool chkPrime(int n)
//{
//	int size = prime.size();
//	int end = sqrt(n) + 1;
//
//	for (int i = 0; i < size; ++i)
//	{
//		++a;
//		if (prime[i] > end)break;
//		if (n % prime[i] == 0)return false;
//	}
//	prime.push_back(n);
//	return true;
//}
//
//int printPrime(int n)
//{
//	if (n < 5)return 0;
//
//	prime.push_back(2);
//	prime.push_back(3);
//	
//	int cnt = 1;
//	bool flag1, flag2;
//	for (int i = 6; i < n; i = i + 6)
//	{	
//		++a;
//		flag1 = chkPrime(i - 1);
//		flag2 = chkPrime(i + 1);
//		if (flag1 && flag2)++cnt;
//	}
//
//	return cnt;
//}
//
//int main(void)
//{
//	int n;
//	cin >> n;
//	cout << (printPrime(n)) << endl;
//	return 0;
//}

//0	答案正确	1	176	10 / 10
//1	答案正确	1	256	2 / 2
//2	答案正确	1	180	2 / 2
//3	答案正确	1	308	2 / 2
//4	答案正确	1	180	2 / 2
//5	答案正确	4	436	2 / 2