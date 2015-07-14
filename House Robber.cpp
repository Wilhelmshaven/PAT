//#include <iostream>
//
//using namespace std;
//
//int num[14] = { 8, 9, 9, 4, 10, 5, 6, 9, 7, 9, 0, 0, 0, 0 };
//int numCopy[14] = { 8, 9, 9, 4, 10, 5, 6, 9, 7, 9, 0, 0, 0, 0 };
//int temp[14] = { 8, 9, 9, 4, 10, 5, 6, 9, 7, 9, 0, 0, 0, 0 };
//int mark[14][14] = { 0 };
//
//int findMax(int m)
//{
//	int pivot = -1;
//	int max = -1;
//	for (int i = 0; i < 14; i++)
//	{
//		if (num[i]>max && (mark[m][i - 1] == 0) && (mark[m][i + 1] == 0) && mark[m][i] == 0)
//		{
//			max = num[i];
//			pivot = i;
//		}
//	}
//	if (pivot != -1)
//	{
//		mark[m][pivot] = 1;
//	}
//
//	return pivot;
//}
//
//int main()
//{
//	for (int i = 0; i < 14; i++)
//	{
//		mark[i][i] = 1;
//	}
//
//	for (int i = 0; i < 7; i++)
//	{
//		for (int j = 0; j < 14; j++)
//		{
//			int pivot = findMax(j);
//			if (pivot != -1)temp[j] = temp[j] + numCopy[pivot];
//		}
//		for (int j = 0; j < 14; j++)
//		{
//			num[j] = temp[j];
//			cout << num[j] << ' ';
//		}
//
//		cout << endl;
//	}
//
//	int max = -1;
//	for (int i = 0; i < 14; i++)
//	{
//		if (num[i]>max)
//		{
//			max = num[i];
//		}
//	}
//	cout << max;
//
//
//	return 0;
//}