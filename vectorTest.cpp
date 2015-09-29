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
//	//����ǰ�᣺�����Сδ֪��
//
//	//�±귽ʽ��int��
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
//	//��������ʽ
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
//	//���䷽ʽ��C11���ԣ�
//	begin = clock();
//
//	for (int i : myTest)tmp = i;
//
//	finish = clock();
//	duration = (double)(finish - begin);
//	++num;
//	printf("Method %d: %f ms\n", num, duration);
//
//	//for_each��ʽ(#include <algorithm>)
//	begin = clock();
//
//	for_each(myTest.begin(), myTest.end(), myFunc);
//
//	finish = clock();
//	duration = (double)(finish - begin);
//	++num;
//	printf("Method %d: %f ms\n", num, duration);
//
//	//for_each��ʽ��Lambda����(#include <algorithm>)��C11���ԣ�
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