//#include <stdio.h>
//#include <vector>
//#include <algorithm>
//#include <cmath>
//
//using namespace std;
//
////��������ģ��
//void insertSort(vector<int> *v, int step)
//{
//	vector<int>::iterator iter;
//
//	if (step + 1 > v->size())iter = v->end();
//	else iter = v->begin() + step + 1;
//	if (iter > v->end())iter = v->end();
//	sort(v->begin(), iter);
//}
//
////�鲢����ģ��
//void mergeSort(vector<int> *v, int step, int n)
//{
//	vector<int>::iterator iter;
//
//	iter = v->begin();
//	int tmp = pow(2, step);
//	for (int j = 0; j < (n / tmp); ++j)
//	{
//		sort(iter, iter + tmp);
//		iter = iter + tmp;
//	}
//	sort(iter, v->end());
//	if (tmp > v->size())sort(v->begin(), v->end());
//}
//
////�������������Vector���
//void output(vector<int> v)
//{
//	size_t vSize = v.size();
//	printf("%d", v[0]);
//	for (size_t j = 1; j < vSize; ++j)
//	{
//		printf(" %d", v[j]);
//	}
//}
//
//int main(void)
//{
//	int n;
//	scanf("%d", &n);
//
//	vector<int> insert, merge, input;
//	int tmp;
//	for (int i = 0; i < n; ++i)
//	{
//		scanf("%d", &tmp);
//		insert.push_back(tmp);
//	}
//	merge = insert;
//	for (int i = 0; i < n; ++i)
//	{
//		scanf("%d", &tmp);
//		input.push_back(tmp);
//	}
//
//	//Begin sorting
//	int pivot;
//	for (int i = 1;;++i)
//	{
//		//Insertion sort
//		insertSort(&insert, i);
//
//		//Merge sort
//		mergeSort(&merge, i, n);
//
//		//Judgement & Output
//		if (insert == input)
//		{
//			printf("Insertion Sort\n");
//			insertSort(&insert, i + 1);
//			output(insert);
//			break;
//		}
//		if (merge == input)
//		{
//			printf("Merge Sort\n");
//			mergeSort(&merge, i + 1, n);
//			output(merge);
//			break;
//		}
//	}
//
//	return 0;
//}
//
////0	����ȷ	1	252	7 / 7
////1	����ȷ	1	180	6 / 6
////2	����ȷ	1	308	1 / 1
////3	����ȷ	1	180	1 / 1
////4	����ȷ	1	256	3 / 3
////5	����ȷ	1	308	4 / 4
////6	����ȷ	1	256	3 / 3