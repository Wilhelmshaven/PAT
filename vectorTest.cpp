//#include <stdio.h>
//#include <vector>
//#include <ctime>
//#include <algorithm>
//
//using namespace std;
//
//int tmp;
//void myFunc(const int &val)
//{
//	tmp = val;
//}
//
//int main(void)
//{
//	clock_t begin, finish;
//	double duration;
//
//	int num = 0;
//	vector<int> myTest;
//	for (int i = 0; i < 100000000; ++i)myTest.push_back(i);
//	
//	//测试前提：假设大小未知；
//
//	//下标方式（int）
//	begin = clock();
//
//	int max = myTest.size();
//	for (int i = 0; i < max; ++i)tmp = myTest[i];
//
//	finish = clock();
//	duration = (double)(finish - begin);
//	++num;
//	printf("Method %d: %f ms\n", num, duration);
//
//	//迭代器方式
//	begin = clock();
//
//	vector<int>::iterator iter=myTest.begin(), fin = myTest.end();
//	for (; iter != fin; ++iter)tmp = *iter;
//
//	finish = clock();
//	duration = (double)(finish - begin);
//	++num;
//	printf("Method %d: %f ms\n", num, duration);
//
//	//区间方式（C11特性）
//	begin = clock();
//
//	for (int i : myTest)tmp = i;
//
//	finish = clock();
//	duration = (double)(finish - begin);
//	++num;
//	printf("Method %d: %f ms\n", num, duration);
//
//	//for_each方式(#include <algorithm>)
//	begin = clock();
//
//	for_each(myTest.begin(), myTest.end(), myFunc);
//
//	finish = clock();
//	duration = (double)(finish - begin);
//	++num;
//	printf("Method %d: %f ms\n", num, duration);
//
//	//for_each方式加Lambda函数(#include <algorithm>)（C11特性）
//	begin = clock();
//
//	for_each(myTest.begin(), myTest.end(), [](const int& val)->void{tmp = val;});
//
//	finish = clock();
//	duration = (double)(finish - begin);
//	++num;
//	printf("Method %d: %f ms\n", num, duration);
//
//	return 0;
//}