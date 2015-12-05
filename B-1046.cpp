//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int N, j1, j2, y1, y2, sum, cntA = 0, cntB = 0;
//
//	cin >> N;
//	for (int i = 0; i < N; ++i)
//	{
//		cin >> j1 >> j2 >> y1 >> y2;
//		sum = j1 + y1;
//
//		if ((j2 == sum&&y2 == sum) || (j2 != sum&&y2 != sum))continue;
//
//		if (j2 == sum)++cntB;
//		else ++cntA;
//	}
//
//	cout << cntA << " " << cntB << endl;
//
//	return 0;
//}
//
////0	答案正确	1	256	9 / 9
////1	答案正确	1	304	1 / 1
////2	答案正确	1	256	2 / 2
////3	答案正确	1	256	1 / 1
////4	答案正确	1	292	2 / 2