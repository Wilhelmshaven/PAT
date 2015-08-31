//#include <stdio.h>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//typedef struct student
//{
//	int ID;
//	double entranGrade;
//	double interGrade;
//	double finalGrade;
//	vector<int> application;
//	int rank;
//};
//
//bool cmp(const student &a, const student &b)
//{
//	if (a.finalGrade != b.finalGrade)return b.finalGrade < a.finalGrade;
//	else if (a.entranGrade != b.entranGrade)return b.entranGrade < a.entranGrade;
//	else return a.ID < b.ID;
//}
//
//int main(void)
//{
//	int n, m, k;
//	scanf("%d %d %d", &n, &m, &k);
//
//	vector<int> school(m);
//	vector<vector<int>> admit(m);
//	vector<student> stuList(n);
//
//	//处理输入
//	int tmp;
//	for (int i = 0; i < m; ++i)scanf("%d", &school[i]);
//	for (int i = 0; i < n; ++i)
//	{
//		scanf("%lf %lf", &stuList[i].entranGrade, &stuList[i].interGrade);
//		stuList[i].finalGrade = (stuList[i].entranGrade + stuList[i].interGrade) / 2;
//		for (int j = 0; j < k; ++j)
//		{
//			scanf("%d", &tmp);
//			stuList[i].application.push_back(tmp);
//		}
//		stuList[i].ID = i;
//	}
//
//	sort(stuList.begin(), stuList.end(), cmp);
//
//	//写排名
//	int rank = 1;
//	stuList[0].rank = 1;
//	for (int i = 1; i < n; ++i)
//	{
//		if (stuList[i].finalGrade < stuList[i - 1].finalGrade)++rank;
//		else if (stuList[i].entranGrade < stuList[i - 1].entranGrade)++rank;
//		
//		stuList[i].rank = rank;
//	}
//
//	//开始处理申请
//	int app;
//	vector<int> lastRank(m); //专门来存储最后一名的名次
//	for (int i = 0; i < n; ++i)
//	{
//		for (int j = 0; j < k; ++j)
//		{
//			app = stuList[i].application[j];     //学校编号
//			if (school[app] > 0)
//			{
//				//学校有容量
//				admit[app].push_back(stuList[i].ID);
//				--school[app];
//
//				lastRank[app] = stuList[i].rank;//加上最后一名的名次
//				break;
//			}
//			else if (stuList[i].rank == lastRank[app])  //该生名次等于已经录取的最后一个的名次
//			{
//				//没容量但是名次相等（那么就直接无视容量了）
//				//题目保证学校定额不会为0
//				int p = admit[app].back();
//				admit[app].push_back(stuList[i].ID);
//				break;
//			}
//			
//			
//		}
//	}
//
//	//输出结果
//	vector<int>::iterator iter;
//	for (int i = 0; i < m; ++i)
//	{
//		sort(admit[i].begin(), admit[i].end());
//		for (iter = admit[i].begin(); iter != admit[i].end(); ++iter)
//		{
//			printf("%d", *iter);
//			if (iter < admit[i].end() - 1)printf(" ");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//
////0	答案正确	1	180	18 / 18
////1	答案正确	1	308	2 / 2
////2	答案正确	1	180	2 / 2
////3	答案正确	1	308	2 / 2
////4	答案正确	43	5172	4 / 4
////5	答案正确	1	308	2 / 2