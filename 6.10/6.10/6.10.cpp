// 6.10.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "iostream"
using namespace std;

void jiaohuan(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
int main()
{
	int a = 3, b = 2;
	jiaohuan(&a, &b);
	cout << a << b;
	cin >> a;
    return 0;
}

