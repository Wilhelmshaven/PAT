//#include <stdio.h>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//int main(void)
//{
//	string match, input;
//	vector<string> passage;
//	int count = 1;
//
//	char tmp;
//	int flag = false;
//	for (;;)
//	{
//		input.clear();
//
//		//��ȡ���ʣ���дתСд���ų����ţ�ȷ���Ƿ��ȡ���
//		for (int i = 0;; ++i)
//		{
//			scanf("%c", &tmp);
//			if (tmp == ' ')break;
//			if (tmp == '\n')
//			{
//				flag = true;
//				break;
//			}
//
//			if (tmp >= 'A'&&tmp <= 'Z')tmp = tmp + 32;
//
//			if ((tmp >= '0'&&tmp <= '9') || (tmp >= 'a'&&tmp <= 'z'))input.push_back(tmp);
//			else break;
//		}
//
//		//�Ƿ����
//		if (flag)break;
//
//		//���µ���
//		if (!input.empty())passage.push_back(input);
//		else continue;
//
//		//�ж��Ƿ���ȣ�����ԭ��
//		if (match.empty())match = input;
//		else
//		{
//			if (match == input)++count;
//			else
//			{
//				if (count == 1)
//				{
//					match.clear();
//					match = input;
//				}
//				else --count;
//			}
//		}
//
//		
//	}
//
//	//ͳ�Ƶ��ʳ����˼���
//	size_t vSize = passage.size();
//	count = 0;
//	for (size_t i = 0; i < vSize; ++i)
//	{
//		if (match == passage[i])++count;
//	}
//
//	//�����ͬ��������¶�û�����
//	string other;
//	int otherCount;
//	vector<string> record;
//	while (1)
//	{
//		record.push_back(match);
//
//		//ͬ���ĵ����ҳ��ڶ���ĵ��ʣ���Ȼ򲻵ȣ�
//		for (size_t i = 0; i < vSize; ++i)
//		{
//			if (passage[i] == match)continue; //ȥ����һ������
//
//			if (other.empty())
//			{
//				other = passage[i];
//				otherCount = 1;
//				continue;
//			}
//
//			if (other == passage[i])++otherCount;
//			else
//			{
//				if (otherCount == 1)
//				{
//					other.clear();
//					other = passage[i];
//				}
//				else --otherCount;
//
//			}
//		}
//
//		//����
//		otherCount = 0;
//		for (size_t i = 0; i < vSize; ++i)
//		{
//			if (passage[i] == other)++otherCount;
//		}
//	
//		//�򵥵ļ�黷��
//		vSize = record.size();
//		int flag = false;
//		for (size_t i = 0; i < vSize; ++i)
//		{
//			if (record[i] == other)
//			{
//				flag = true;
//				break;      //�ظ�������
//			}
//		}
//		if (otherCount < count || otherCount == 0 || flag)break;  //û�������Ŀ�ĵ�����
//
//		if (other < match)
//		{
//			//�ֵ���
//			match.clear();
//			match = other;
//		}
//	}
//
//	//���
//	vSize = match.size();
//	for (size_t i = 0; i < vSize; ++i)printf("%c", match[i]);
//	printf(" %d", count);
//
//	return 0;
//}
//
//
////0	����ȷ	1	308	13 / 13
////1	�𰸴���	1	308	0 / 2
////2	�𰸴���	108	12272	0 / 4
////3	����ȷ	117	28908	4 / 4
////4	����ȷ	1	180	2 / 2