//#include <stdio.h>
//#include <stack>
//
//using namespace std;
//
//int main(void)
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//
//	int sum = a + b;
//
//	//处理负号
//	if (sum < 0)
//	{
//		printf("-");
//		sum = -sum;
//	}
//
//	if (sum != 0)
//	{
//		int tmp = sum;
//		stack<int> myStack;
//
//		//求取各位数字
//		while (tmp != 0)
//		{
//			myStack.push(tmp % 10);
//			tmp = tmp / 10;
//		}
//
//		int cnt = myStack.size();
//		
//		while (cnt > 0)
//		{
//			printf("%d", myStack.top());
//			myStack.pop();
//			--cnt;
//			if (cnt > 0 && cnt % 3 == 0)printf(",");   //若剩下的容量是3的倍数，打印逗号
//		}
//	}
//	else printf("0\n");
//	
//	return 0;
//}
//
//0	答案正确	1	308	9 / 9
//1	答案正确	1	308	1 / 1
//10	答案正确	1	308	1 / 1
//11	答案正确	1	308	1 / 1
//2	答案正确	1	308	1 / 1
//3	答案正确	1	308	1 / 1
//4	答案正确	1	308	1 / 1
//5	答案正确	1	308	1 / 1
//6	答案正确	1	308	1 / 1
//7	答案正确	1	308	1 / 1
//8	答案正确	1	308	1 / 1
//9	答案正确	1	308	1 / 1