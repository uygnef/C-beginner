// 6.10.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "iostream"
using namespace std;

void jiaohuan(int &a, int &b)
{
	int c = a;
	a = b;
	b = c;
}
int main()
{
	int a = 3, b = 2;
	jiaohuan(a, b);
	cout << a << b;
	
	return 0;
}