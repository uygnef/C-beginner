// 6.17.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "iostream"
#include "string"
using namespace std;
void is_captain( string &a,int &time)
{
	for (auto &s : a)
	{	
		if (isupper(s))
		{
			s=tolower(s);	
		++time;
		}	
		
	}
	
}

int main()
{
	int m=0;
	string a = "SFFFFFfffffs";
		is_captain(a, m);
	cout << a<<m;
	


	int sd;
	cin >> sd;
    return 0;
}

