//#include <stdio.h>
//
//char ID[18];
//char pass[100][18];
//
//int record(int sum, int count)
//{
//	if (((sum > 2) && (ID[17] - 48 + sum == 12)) || (sum == 2 && ID[17] == 'X') || ((sum < 2) && (sum + ID[17] - 48 == 1)))
//	{
//		//Pass!
//	}
//	else
//	{
//		for (int i = 0; i < 18; i++)
//		{
//			pass[count][i] = ID[i];
//		}
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int n;
//	
//	int sum;
//	int count = 0;
//
//	scanf("%d", &n);	
//
//	for (int j = 0; j < n; j++)
//	{
//		getchar();
//		sum = 0;
//		for (int i = 0; i < 18; i++)
//		{
//			scanf("%c", &ID[i]);
//		}
//		
//		sum = sum + (ID[0] - 48) * 7;
//		sum = sum + (ID[1] - 48) * 9;
//		sum = sum + (ID[2] - 48) * 10;
//		sum = sum + (ID[3] - 48) * 5;
//		sum = sum + (ID[4] - 48) * 8;
//		sum = sum + (ID[5] - 48) * 4;
//		sum = sum + (ID[6] - 48) * 2;
//		sum = sum + (ID[7] - 48) * 1;
//		sum = sum + (ID[8] - 48) * 6;
//		sum = sum + (ID[9] - 48) * 3;
//		sum = sum + (ID[10] - 48) * 7;
//		sum = sum + (ID[11] - 48) * 9;
//		sum = sum + (ID[12] - 48) * 10;
//		sum = sum + (ID[13] - 48) * 5;
//		sum = sum + (ID[14] - 48) * 8;
//		sum = sum + (ID[15] - 48) * 4;
//		sum = sum + (ID[16] - 48) * 2;
//
//		sum = sum % 11;
//
//		count = record(sum, count);
//	}
//
//	if (count == 0)printf("All passed", count);
//	else
//	{
//		for (int i = 0; i < count; i++)
//		{
//			for (int j = 0; j < 18; j++)
//			{
//				printf("%c", pass[i][j]);
//			}
//			printf("\n");
//		}
//	}
//
//	return 0;
//}