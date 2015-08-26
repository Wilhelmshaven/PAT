//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//typedef struct book
//{
//	string ID;
//	string title;
//	string author;
//	string keywords;
//	string publisher;
//	string pubYear;
//};
//
//bool cmp(const book &a, const book &b)
//{
//	return a.ID < b.ID;
//}
//
//int main(void)
//{
//	int n;
//	cin >> n;
//	getchar();
//	
//	vector<book> library(n);
//	for (int i = 0; i < n; ++i)
//	{
//		getline(cin, library[i].ID);
//		getline(cin, library[i].title);
//		getline(cin, library[i].author);
//		getline(cin, library[i].keywords);
//		getline(cin, library[i].publisher);
//		getline(cin, library[i].pubYear);
//	}
//	
//	sort(library.begin(), library.end(), cmp);
//
//	int q;
//	cin >> q;
//	string op, query;
//	int pos;
//	bool flag;
//	for (int i = 0; i < q; ++i)
//	{
//		cin >> op;
//		getchar();
//		getline(cin, query);
//		flag = false;
//
//		cout << op << " " << query << endl;
//		switch (op[0])
//		{
//		case '1':
//		{
//			for (int j = 0; j < n; ++j)
//			{
//				pos = library[j].title.find(query);
//				if (pos > -1)
//				{
//					cout << library[j].ID << endl;
//					flag = true;
//				}
//			}
//			break;
//		}
//		case '2':
//		{
//			for (int j = 0; j < n; ++j)
//			{
//				if (library[j].author == query)
//				{
//					cout << library[j].ID << endl;
//					flag = true;
//				}
//			}
//			break;
//		}
//		case '3':
//		{
//			for (int j = 0; j < n; ++j)
//			{
//				pos = library[j].keywords.find(query);
//				if (pos > -1)
//				{
//					cout << library[j].ID << endl;
//					flag = true;
//				}
//			}
//			break;
//		}
//		case '4':
//		{
//			for (int j = 0; j < n; ++j)
//			{
//				if (library[j].publisher == query)
//				{
//					cout << library[j].ID << endl;
//					flag = true;
//				}
//			}
//			break;
//		}
//		case '5':
//		{
//			for (int j = 0; j < n; ++j)
//			{
//				if (library[j].pubYear == query)
//				{
//					cout << library[j].ID << endl;
//					flag = true;
//				}
//			}
//			break;
//		}
//		default:
//			break;
//		}
//
//		if (!flag)cout << "Not Found" << endl;
//	}
//
//	return 0;
//}
//
////0	答案正确	1	180	16 / 16
////1	答案正确	1	308	3 / 3
////2	答案正确	1	308	3 / 3
////3	答案正确	1	180	3 / 3
////4	答案正确	311	4748	5 / 5