//#include <iostream>
//#include <string>
//#include <map>
//#include <algorithm>
//#include <cctype>
//
//using namespace std;
//
//int main(void)
//{
//	map<string, int> passage;
//	map<string, int>::iterator iter;
//	string input, word;
//	int begin, end = 0, cnt = 0;
//
//	getline(cin, input);
//	int len = input.length();
//	while (end < len)
//	{
//		//ȡ�ӵ��ʣ�ע������non-word,it's��Ҫ�𿪳�non,word,it,s.
//		begin = end;
//		while (!isalnum(input[begin]) && begin < len)++begin;   //��һ�����ַ��Ŀ�ͷ
//		end = begin;
//		while (isalnum(input[end]) > 0 && end < len)++end;      //��һ�������ַ�����Ϊ��β����������Ľ�����
//		if (begin == end)continue;                              //�վ͹���
//
//		word = input.substr(begin, end - begin);                       //��ȡ���ַ��������ʣ�
//		transform(word.begin(), word.end(), word.begin(), ::tolower);  //ת��Сд
//
//		iter = passage.find(word);
//		if (iter == passage.end())passage.insert(make_pair(word, 1));
//		else ++iter->second;		
//	}
//	
//	for (iter = passage.begin(); iter != passage.end(); ++iter)
//	{
//		if (iter->second > cnt)
//		{
//			cnt = iter->second;
//			word = iter->first;
//		}
//	}
//
//	cout << word << " " << cnt;
//
//	return 0;
//}
//
////0	����ȷ	1	180	13 / 13
////1	����ȷ	1	180	2 / 2
////2	����ȷ	107	2428	4 / 4
////3	����ȷ	79	2436	4 / 4
////4	����ȷ	1	180	2 / 2