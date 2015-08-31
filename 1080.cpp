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
//	//��������
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
//	//д����
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
//	//��ʼ��������
//	int app;
//	vector<int> lastRank(m); //ר�����洢���һ��������
//	for (int i = 0; i < n; ++i)
//	{
//		for (int j = 0; j < k; ++j)
//		{
//			app = stuList[i].application[j];     //ѧУ���
//			if (school[app] > 0)
//			{
//				//ѧУ������
//				admit[app].push_back(stuList[i].ID);
//				--school[app];
//
//				lastRank[app] = stuList[i].rank;//�������һ��������
//				break;
//			}
//			else if (stuList[i].rank == lastRank[app])  //�������ε����Ѿ�¼ȡ�����һ��������
//			{
//				//û��������������ȣ���ô��ֱ�����������ˣ�
//				//��Ŀ��֤ѧУ�����Ϊ0
//				int p = admit[app].back();
//				admit[app].push_back(stuList[i].ID);
//				break;
//			}
//			
//			
//		}
//	}
//
//	//������
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
////0	����ȷ	1	180	18 / 18
////1	����ȷ	1	308	2 / 2
////2	����ȷ	1	180	2 / 2
////3	����ȷ	1	308	2 / 2
////4	����ȷ	43	5172	4 / 4
////5	����ȷ	1	308	2 / 2