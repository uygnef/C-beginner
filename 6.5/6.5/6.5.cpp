// 6.5.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "iostream"
using namespace std;

int jiechen(int a);

int jiechen(int a)
{
	int ret = 1;
	if (a > 0)
		while (a>0)
			 ret *= a--;
	else cout << "canshu cuowu";
	return ret;
			
}
int main()
{
	cout << jiechen(5);
	int s; cin >> s;
    return 0;
}

