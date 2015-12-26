// 4.6.cpp : 定义控制台应用程序的入口点。
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
			cout << "偶数";
		else
			cout << "奇数";
	else cout << "非法";
    return 0;
}

