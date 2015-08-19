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
//		//提取单词：大写转小写，排除符号，确认是否读取完毕
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
//		//是否结束
//		if (flag)break;
//
//		//记下单词
//		if (!input.empty())passage.push_back(input);
//		else continue;
//
//		//判断是否相等，容器原理
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
//	//统计单词出现了几次
//	size_t vSize = passage.size();
//	count = 0;
//	for (size_t i = 0; i < vSize; ++i)
//	{
//		if (match == passage[i])++count;
//	}
//
//	//多个相同单词这个事儿没处理好
//	string other;
//	int otherCount;
//	vector<string> record;
//	while (1)
//	{
//		record.push_back(match);
//
//		//同样的道理，找出第二多的单词（相等或不等）
//		for (size_t i = 0; i < vSize; ++i)
//		{
//			if (passage[i] == match)continue; //去除上一个单词
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
//		//计数
//		otherCount = 0;
//		for (size_t i = 0; i < vSize; ++i)
//		{
//			if (passage[i] == other)++otherCount;
//		}
//	
//		//简单的检查环节
//		vSize = record.size();
//		int flag = false;
//		for (size_t i = 0; i < vSize; ++i)
//		{
//			if (record[i] == other)
//			{
//				flag = true;
//				break;      //重复检索了
//			}
//		}
//		if (otherCount < count || otherCount == 0 || flag)break;  //没有相等数目的单词了
//
//		if (other < match)
//		{
//			//字典序
//			match.clear();
//			match = other;
//		}
//	}
//
//	//输出
//	vSize = match.size();
//	for (size_t i = 0; i < vSize; ++i)printf("%c", match[i]);
//	printf(" %d", count);
//
//	return 0;
//}
//
//
////0	答案正确	1	308	13 / 13
////1	答案错误	1	308	0 / 2
////2	答案错误	108	12272	0 / 4
////3	答案正确	117	28908	4 / 4
////4	答案正确	1	180	2 / 2