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
//	//������
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
//		//��ȡ��λ����
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
//			if (cnt > 0 && cnt % 3 == 0)printf(",");   //��ʣ�µ�������3�ı�������ӡ����
//		}
//	}
//	else printf("0\n");
//	
//	return 0;
//}
//
//0	����ȷ	1	308	9 / 9
//1	����ȷ	1	308	1 / 1
//10	����ȷ	1	308	1 / 1
//11	����ȷ	1	308	1 / 1
//2	����ȷ	1	308	1 / 1
//3	����ȷ	1	308	1 / 1
//4	����ȷ	1	308	1 / 1
//5	����ȷ	1	308	1 / 1
//6	����ȷ	1	308	1 / 1
//7	����ȷ	1	308	1 / 1
//8	����ȷ	1	308	1 / 1
//9	����ȷ	1	308	1 / 1