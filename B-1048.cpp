//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	string codec, num;
//	cin >> codec >> num;
//
//	string::iterator cPivot, nPivot;
//	cPivot = codec.end() - 1;
//	nPivot = num.end() - 1;
//
//	int mark = 1;  //swap odd & even
//	while (1)
//	{
//		if (mark > 0)
//		{
//			*nPivot = (*nPivot + *cPivot - 96) % 13;
//			if (*nPivot == 10)*nPivot = 'J';
//			else if (*nPivot == 11)*nPivot = 'Q';
//			else if (*nPivot == 12)*nPivot = 'K';
//			else *nPivot += '0';
//		}
//		else
//		{
//			if (*nPivot < *cPivot)*nPivot += 10;
//			*nPivot -= *cPivot;
//			*nPivot += '0';
//		}
//
//		mark *= -1;
//
//		if (cPivot == codec.begin() || nPivot == num.begin())break;
//
//		--cPivot;
//		--nPivot;
//	}
//
//	cout << num << endl;
//
//	return 0;
//}
//
////0	����ȷ	1	236	12 / 12
////1	����ȷ	1	256	2 / 2
////2	�𰸴���	1	256	0 / 2
////3	����ȷ	1	360	1 / 1
////4	����ȷ	1	368	1 / 1
////5	�𰸴���	1	348	0 / 2