//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct customer
//{
//	int arriveTime;
//	int processTime;
//	int waitingTime;
//	int endTime;
//	int startTime;
//};
//customer cus[10000];
//
//int comp(void const *a, void const *b)
//{
//	return (*(customer *)a).arriveTime - (*(customer *)b).arriveTime;
//}
//
//int main()
//{
//	int n, k;
//	scanf("%d%d", &n, &k);
//	
//	//Read info
//	
//	int countCus = 0;
//	int hour, min, sec, proc;
//
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d:%d:%d %d", &hour, &min, &sec, &proc);
//		sec = hour * 3600 + min * 60 + sec;
//		if (sec > 61200)continue;                        //is it arrive before 17:00:00?
//
//		if (proc > 60)proc = 60;                         // Must done in 1 hour
//		cus[countCus].processTime = proc * 60;
//		cus[countCus].arriveTime = sec;
//		cus[countCus].waitingTime = -1;
//		cus[countCus].endTime = 0;
//		countCus++;
//	}
//
//	//Sorting
//	qsort(cus, countCus, sizeof(customer), comp);	
//
//	//==================Servicing====================
//	double average = 0;
//	int window[100];
//	int cusNo = 0;
//
//	//init
//	for (int i = 0; i < k; i++)window[i] = -1;
//
//	//Come too early
//	int windowNo = 0;
//	int waitingCus = 0;
//	for (int i = 0; i < countCus; i++)
//	{
//		if (cus[i].arriveTime < 28800 )
//		{
//			if (windowNo < k)
//			{
//				window[windowNo] = i;
//				windowNo++;
//				cusNo++;
//
//				cus[i].startTime = 28800;
//				cus[i].endTime = 28800 + cus[i].processTime;
//				cus[i].waitingTime = cus[i].startTime - cus[i].arriveTime;
//
//				average = average + cus[i].waitingTime;
//			}
//			else waitingCus++;
//		}
//		else break;
//	}
//
//	//Simulate Time Pass in Second
//	int inServiceNum = cusNo + waitingCus;
//	for (int i = 28800; i <= 100000; i++)              // Must more than 86400(a day...)
//	{
//		//Check whether the next customer is arrived
//		if (i <= 61200)
//		{
//			if (cus[inServiceNum].arriveTime <= i && inServiceNum < countCus)
//			{
//				waitingCus++;
//				inServiceNum++;
//			}
//		}
//		else if (waitingCus == 0)break;
//	
//		for (int j = 0; j < k; j++)
//		{
//			//Check windows status, if time = endtime, then it means the customer finish his job.
//			if (cus[window[j]].endTime == i)
//			{
//				window[j] = -1;
//			}
//			//Insert incoming customer(only 1 except before 8:00)
//			if (window[j] == -1 && waitingCus > 0)
//			{
//				window[j] = cusNo;
//
//				cus[cusNo].startTime = i;
//				cus[cusNo].endTime = i + cus[cusNo].processTime;
//				cus[cusNo].waitingTime = cus[cusNo].startTime - cus[cusNo].arriveTime;
//
//				average = average + cus[cusNo].waitingTime;
//
//				cusNo++;
//				waitingCus--;
//			}
//		}
//	}
//
//	//Calculate
//	if (countCus != 0)average = average / countCus / 60;
//	else average = 0;
//	printf("%.1lf", average);
//
//	return 0;
//}