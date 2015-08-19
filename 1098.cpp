//#include <stdio.h>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
////插入排序模拟
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
//void heapSort(vector<int> *v, int step, int node)
//{
//	int size = v->size() - step;
//
//	int pivot = node * 2 + 1; //左子节点
//	if (size > 1 && pivot < size)
//	{
//		if (pivot + 1 < size)
//		{
//			if ((*v)[pivot] < (*v)[pivot + 1])++pivot;
//		}
//
//		if ((*v)[node] < (*v)[pivot])
//		{
//			swap((*v)[node], (*v)[pivot]);
//
//			heapSort(v, step, pivot);
//		}
//	}
//}
//
//void buildHeap(vector<int> *v, int node)
//{
//	int size = v->size();
//	int pivot = 2 * node + 1;
//	int tmp;
//
//	if (pivot < size)
//	{
//		if (pivot + 1 < size)
//		{
//			if ((*v)[pivot] < (*v)[pivot + 1])++pivot;
//		}
//
//		if ((*v)[node] < (*v)[pivot])
//		{
//			swap((*v)[node], (*v)[pivot]);
//
//			buildHeap(v, pivot);
//		}
//	}
//	
//	if (node > 0 && node < size / 2)buildHeap(v, node - 1);
//}
//
////输出函数，遍历Vector输出
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
//	vector<int> insert, heap, input;
//	int tmp;
//	for (int i = 0; i < n; ++i)
//	{
//		scanf("%d", &tmp);
//		insert.push_back(tmp);
//	}
//	heap = insert;
//	buildHeap(&heap, heap.size() / 2 - 1); //建立大顶堆
//	for (int i = 0; i < n; ++i)
//	{
//		scanf("%d", &tmp);
//		input.push_back(tmp);
//	}
//
//	//Begin sorting
//	int pivot;
//	for (int i = 1;; ++i)
//	{
//		//Insertion sort
//		insertSort(&insert, i);
//
//		//Heap Sort
//		swap(heap[0], heap[heap.size() - i]);
//		heapSort(&heap, i, 0);
//
//		//Judgement & Output
//		if (insert == input)
//		{
//			printf("Insertion Sort\n");
//			insertSort(&insert, i + 1);
//			output(insert);
//			break;
//		}
//		if (heap == input)
//		{
//			printf("Heap Sort\n");
//			swap(heap[0], heap[heap.size() - i - 1]);
//			heapSort(&heap, i + 1, 0);
//			output(heap);
//			break;
//		}
//	}
//
//	return 0;
//}
//
////0	答案正确	1	308	7 / 7
////1	答案正确	1	308	6 / 6
////2	答案正确	1	180	2 / 2
////3	答案正确	1	256	2 / 2
////4	答案正确	1	180	4 / 4
////5	答案正确	1	308	4 / 4