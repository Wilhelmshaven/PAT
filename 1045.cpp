//#include <iostream>
//#include <queue>
//#include <vector>
//
//using namespace std;
//
//typedef struct originColor
//{
//	int color;
//	int length = 1;
//};
//
//int main(void)
//{
//	int n, m, tmp, container = 0, pivot;
//	vector<int> favColor;
//	vector<originColor> oriColor;
//
//	cin >> n;	
//
//	cin >> m;
//	for (int i = 0; i < m; ++i)
//	{
//		cin >> tmp;
//		favColor.push_back(tmp);
//	}
//	
//	originColor input;
//	//���벢����ԭʼ��ɫ��
//	cin >> m;
//	for (int i = 0; i < m; ++i)
//	{
//		cin >> tmp;
//
//		if (tmp <= n)
//		{
//			if (tmp == container)++oriColor[pivot].length;
//			else
//			{
//				pivot = oriColor.size();
//				container = tmp;
//				input.color = tmp;
//				oriColor.push_back(input);
//			}
//		}
//	}
//
//	//��ʼѰ�����
//	//��̬�滮��ÿ�ζ�Ϊ�Ըõ������ϴ����ټ���Ƿ�����ĿҪ��Ĺ涨�Ӵ���
//	vector<int> max;
//	max.resize(oriColor.size());
//	mark.resize(oriColor.size());
//
//	for (int i = 0; i < favColor.size(); ++i)
//	{
//
//	}
//
//
//	return 0;
//}