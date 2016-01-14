// 6.17.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "iostream"
#include "string"
using namespace std;
bool is_captain(const string a,int &time)
{
	for (auto s : a)
	{	
		if (isupper(s))
		{
			return true;
		}	
		++time;
	}
	return false;
}

int main()
{
	int m=1;
	if (is_captain("Sfffffffffffs", m))
		cout << "第"<<m<<"个是大写";
	else cout << "无大写";


	int sd;
	cin >> sd;
    return 0;
}

