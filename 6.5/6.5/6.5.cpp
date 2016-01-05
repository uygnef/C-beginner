// 6.5.cpp : 定义控制台应用程序的入口点。
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