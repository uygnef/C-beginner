// 4.6.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "iostream"
using namespace std;


int main()
{
	int a;
	cin >> a;
	if (a >= 0)
		if (!a % 2)
			cout << "ż��";
		else
			cout << "����";
	else cout << "�Ƿ�";
    return 0;
}

