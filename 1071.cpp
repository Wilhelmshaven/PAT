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
//		//取子单词，注意类似non-word,it's都要拆开成non,word,it,s.
//		begin = end;
//		while (!isalnum(input[begin]) && begin < len)++begin;   //找一个是字符的开头
//		end = begin;
//		while (isalnum(input[end]) > 0 && end < len)++end;      //找一个不是字符的作为结尾（或者输入的结束）
//		if (begin == end)continue;                              //空就过了
//
//		word = input.substr(begin, end - begin);                       //提取子字符串（单词）
//		transform(word.begin(), word.end(), word.begin(), ::tolower);  //转成小写
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
////0	答案正确	1	180	13 / 13
////1	答案正确	1	180	2 / 2
////2	答案正确	107	2428	4 / 4
////3	答案正确	79	2436	4 / 4
////4	答案正确	1	180	2 / 2