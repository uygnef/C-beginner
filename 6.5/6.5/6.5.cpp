// 6.5.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "iostream"
using namespace std;


int main()
{
	cout << jiechen(2);
	int s; cin >> s;
    return 0;
}

int jiechen(int a)
{
	int ret = 1;
	if (a > 0)
		while (a>0)
			 ret *= a--;
	else cout << "canshu cuowu";
	return ret;
			
}