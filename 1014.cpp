//#include <iostream>
//#include <queue>
//
//using namespace std;
//
//int Clock[2] = { 8, 0 };
//int cusTime[1000][2];
//
//void timing(int t, int cusNo)
//{
//	Clock[1] = Clock[1] + t;
//	if (Clock[1] > 59)
//	{
//		Clock[0] = Clock[0] + Clock[1] / 60;
//		Clock[1] = Clock[1] % 60;
//	}
//
//	cusTime[cusNo][0] = Clock[0];
//	cusTime[cusNo][1] = Clock[1];
//}
//
//int main()
//{
//	queue<int> line[20];
//	int n, m, k, q;
//
//	cin >> n >> m >> k >> q;
//
//	//Read time
//	int customers[1000] = { 0 };
//	int startTime[1000] = { 0 };
//	for (int i = 0; i < k; i++)
//	{
//		cin >> customers[i];
//		startTime[i] = customers[i];
//	}
//
//	//Read queries
//	int queries[1000] = { 0 };
//	for (int i = 0; i < q; i++)
//	{
//		cin >> queries[i];
//		queries[i]--;
//	}
//
//	//==================	
//	//First fill up all queues.
//	int waitingCus = 0;
//	for (int j = 0; j < m; j++)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			line[i].push(waitingCus);
//			waitingCus++;
//		}
//	}
//
//	//Then begin timing
//	int fastestTime;
//	int minLine;
//	int whichQueue;
//	
//	int cusNo;                //Customer Number
//	bool flag = true;
//
//	while (flag)
//	{
//		//Initialize...
//		flag = false;
//		whichQueue = -1;           //Set to unexist
//		fastestTime = 1000000;     //Set to MAX
//		minLine = m;               //Set to MAX
//
//		//Find the fastest (Need IMPROVE)
//		for (int i = 0; i < n; i++)
//		{
//			// !Check whether queue is empty! If all empty. than flag remain false, break.
//			if (line[i].empty())continue;
//
//			flag = true;
//
//			cusNo = line[i].front();
//
//			if (customers[cusNo] < fastestTime)
//			{
//				fastestTime = customers[cusNo];
//				whichQueue = i;
//			}
//		}
//		if (!flag)break; //All empty... BREAK.		
//		cusNo = line[whichQueue].front();           // He is the fastest.
//
//		//Timing
//		int Poptime = customers[cusNo];
//		timing(Poptime, cusNo);
//		for (int i = 0; i < n; i++)
//		{
//			if (line[i].empty())continue;
//			cusNo = line[i].front();
//			customers[cusNo] = customers[cusNo] - Poptime;
//		}
//
//		//Then let's pop up
//		if (whichQueue >= 0)
//		{
//			line[whichQueue].pop();
//		}
//
//		//If still has customers waiting (AND the clock is before 17:00!!!)...Push!
//		if (waitingCus < k)
//		{
//			//Find the shortest queue(Need IMPROVE)
//			for (int i = 0; i < n; i++)
//			{
//				if (line[i].size() < minLine)             // There must be a queue that is not full hence we have pop a customer up.
//				{
//					minLine = line[i].size();
//					whichQueue = i;
//				}
//			}
//
//			line[whichQueue].push(waitingCus);
//			waitingCus++;
//		}
//		////If no one is waiting, but has empty queue & one queue has more than 1 customer... ADJUST!
//		//else
//		//{
//		//	for (int i = 0; i < n; i++)
//		//	{
//		//		if (line[i].empty())
//		//		{
//		//			//Find an empty queue
//		//			for (int j = 0; j < n; j++)
//		//			{
//		//				if (line[i].size()>1)
//		//				{
//		//					//We find a queue that has more than 1 customer
//		//					line[i].push(line[j].front());
//		//					line[j].pop();
//		//				}
//		//			}
//		//		}
//		//	}
//		//}
//
//	}
//
//	//Queries
//	for (int i = 0; i < q; i++)
//	{
//		int cusQ = queries[i];
//		char output[6];
//		if (cusTime[cusQ][0] * 60 + cusTime[cusQ][1] - startTime[cusQ] < 1020)   
//		{
//			//If this customer start before 17:00, then should be finished
//			sprintf(output, "%02d:%02d", cusTime[cusQ][0], cusTime[cusQ][1]);
//			cout << output << endl;
//		}
//		else cout << "Sorry" << endl;
//	}
//
//	return 0;
//}