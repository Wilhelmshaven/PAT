//#include <iostream>
//#include <string>
//#include <memory>
//using namespace std;
//
//int main()
//{
//	string s, t;
//
//	cin >> s >> t;
//
//	int myMap[256];
//	int mark[256];
//	memset(myMap, -1, sizeof(int) * 256);
//	memset(mark, 0, sizeof(int) * 256);
//
//	bool flag = true;
//
//	for (int i = 0; i < s.length(); i++)
//	{
//		if (myMap[s[i]] == -1)         //Empty myMapping
//		{
//			if (mark[t[i]] == 0)     //Dest. can be myMapped
//			{
//				myMap[s[i]] = t[i];
//				mark[t[i]] = 1;
//				continue;
//			}
//			else                    //Collision
//			{
//				flag = false;
//				break;
//			}
//		}
//		else   //Already myMapped, check.
//		{
//			if (myMap[s[i]] != t[i])
//			{
//				flag = false;
//				break;
//			}
//		}
//
//	}
//
//	cout << flag;
//
//	return 0;
//}