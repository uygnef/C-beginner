// 6.17.cpp : �������̨Ӧ�ó������ڵ㡣
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
		cout << "��"<<m<<"���Ǵ�д";
	else cout << "�޴�д";


	int sd;
	cin >> sd;
    return 0;
}

