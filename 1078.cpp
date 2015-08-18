//#include <stdio.h>
//#include <vector>
//
//using namespace std;
//
//int prime[1230];  //MAX prime is 10007, No.1229
//
//int findPrime()
//{
//	prime[0] = 2;
//	prime[1] = 3;
//	int primeCount = 2;
//
//	bool flag = false;
//	for (int i = 6; i < 10010; i = i + 6)
//	{
//		flag = false;
//		for (int j = 0; j < primeCount; j++)
//		{
//			if ((i - 1) % prime[j] == 0)
//			{
//				flag = true;
//				break;
//			}
//		}
//		if (!flag)
//		{
//			prime[primeCount] = i - 1;
//			++primeCount;
//		}
//
//		flag = false;
//		for (int j = 0; j < primeCount; j++)
//		{
//			if ((i + 1) % prime[j] == 0)
//			{
//				flag = true;
//				break;
//			}
//		}
//		if (!flag)
//		{
//			prime[primeCount] = i + 1;
//			++primeCount;
//		}
//	}
//
//	return primeCount;
//}
//
//int main(void)
//{
//	int primeCount = findPrime();
//
//	int m, n;
//	scanf("%d%d", &m, &n);
//
//	vector<int> hash;
//	for (int i = 0; i < 1230; ++i)
//	{
//		if (prime[i] > m)
//		{
//			m = prime[i];
//			hash.resize(m);
//			break;
//		}
//	}
//
//	for (int i = 0; i < m; ++i)hash[i] = 0;
//
//	//Begin hashing
//	int input;
//	int hashKey;
//	bool isHash;
//	for (int i = 0; i < n; ++i)
//	{
//		scanf("%d", &input);
//		isHash = false;
//
//		for (int j = 0; j < m; ++j)
//		{
//			hashKey = (input + j*j) % m;
//			if (hash[hashKey] == 0)
//			{
//				isHash = true;
//				hash[hashKey] = input;
//				break;
//			}
//		}
//
//		if (isHash)printf("%d", hashKey);
//		else printf("-");
//		if (i < n - 1)printf(" ");
//	}
//
//	return 0;
//}
//
////0	答案正确	3	308	12 / 12
////1	答案正确	4	180	3 / 3
////2	答案正确	4	268	5 / 5
////3	答案正确	6	372	5 / 5