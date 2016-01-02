// 5.23.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "iostream"

#include "string"
using namespace std;


int main()
{
	int a, b;
	cin >> a >> b;

	if (b == 0)
		throw runtime_error("第二个数是 0");
	 cout << a / b;
	
    return 0;
}

