//#include <iostream>
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
//	
//	cin >> n >> m;
//	vector<int> favColor(m);
//	for (int i = 0; i < m; ++i)cin >> favColor[i];
//	
//	//���벢����ԭʼ��ɫ��
//	cin >> m;
//	vector<originColor> oriColor;
//	originColor input;
//	for (int i = 0; i < m; ++i)
//	{
//		cin >> tmp;
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
//	//��ʼѰ���������̬�滮
//	int maxWeight, result = 0;
//	size_t size = oriColor.size();
//	size_t favSize = favColor.size();
//
//	vector<vector<int>> max(size + 1);
//	for (size_t i = 0; i < size + 1; ++i)max[i].resize(favSize + 1);
//
//	//��ԭʼ��ɫ��Ϊ�У���ϲ����ɫ��Ϊ�У�����һ������
//	//����ֵ������Ϊ���Ե�ǰԭʼ��ɫ������ɫΪ��β���Ե�ǰ����Ϊָ����ɫ˳�����Ӵ�����
//	for (size_t i = 1; i <= favSize; ++i)
//	{		
//		for (size_t j = 1; j <= size; ++j)
//		{
//			//�����ϣ��ϣ������
//			maxWeight = max[j - 1][i - 1];
//			if (maxWeight < max[j][i - 1])maxWeight = max[j][i - 1];
//			if (maxWeight < max[j - 1][i])maxWeight = max[j - 1][i];
//
//			//��������ǵ�ǰԪ�أ�����Ȩֵ
//			if (oriColor[j - 1].color == favColor[i - 1])maxWeight += oriColor[j - 1].length;
//
//			max[j][i] = maxWeight;
//			if (maxWeight > result)result = maxWeight;     //ͳ�����
//		}
//	}
//
//	cout << result;
//
//	return 0;
//}
//
////0	����ȷ	1	180	15 / 15
////1	����ȷ	1	308	3 / 3
////2	����ȷ	1	180	6 / 6
////3	����ȷ	18	8628	3 / 3
////4	����ȷ	18	8500	3 / 3