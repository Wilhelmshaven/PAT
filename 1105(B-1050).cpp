//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <cmath>
//
//using namespace std;
//
//enum customDefine
//{
//	LEFT = 3,
//	DOWN = 2,
//	RIGHT = 1,
//	UP = 4
//};
//
//int main()
//{
//	int n;
//	cin >> n;
//
//	vector<int> input(n);
//	for (int i = 0; i < n; ++i)cin >> input[i];
//	sort(input.begin(), input.end());
//
//	//Find m*n
//	int column = sqrt(double(n));
//	while (n%column > 0)--column;
//	int line = n / column;
//
//	//Build matrix, add extra spaces for convinience
//	vector<vector<int>> matrix(line + 2);
//	for (int i = 0; i < line + 2; ++i)matrix[i].resize(column + 2);
//
//	//Fill the matrix
//	int direction = RIGHT;
//	int x = 1, y = 1;
//	while (n > 0)
//	{
//		matrix[x][y] = input[n - 1];
//		--n;
//
//		switch (direction)
//		{
//		case 1:
//			if (matrix[x][y + 1] != 0 || y + 1 > column)
//			{
//				++x;
//				direction = DOWN;
//			}
//			else ++y;
//			break;
//		case 2:
//			if (matrix[x + 1][y] != 0 || x + 1 > line)
//			{
//				--y;
//				direction = LEFT;
//			}
//			else ++x;
//			break;
//		case 3:
//			if (matrix[x][y-1] != 0 || y == 1)
//			{
//				--x;
//				direction = UP;
//			}
//			else --y;
//			break;
//		default:
//			if (matrix[x - 1][y] != 0 || x == 1)
//			{
//				++y;
//				direction = RIGHT;
//			}
//			else --x;
//			break;
//		}
//	}
//
//	//PRINT
//	for (int i = 1; i <= line; ++i)
//	{
//		for (int j = 1; j <= column; ++j)
//		{
//			cout << matrix[i][j];
//			if (j == column)cout << endl;
//			else cout << " ";
//		}
//	}
//
//	return 0;
//}
//
////0	答案正确	1	256	13 / 13
////1	答案正确	1	256	2 / 2
////2	答案正确	1	292	3 / 3
////3	答案正确	1	296	2 / 2
////4	答案正确	1	296	1 / 1
////5	答案正确	1	168	1 / 1
////6	答案正确	5	292	3 / 3