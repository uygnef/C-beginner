// 5.23.cpp : �������̨Ӧ�ó������ڵ㡣
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
		throw runtime_error("�ڶ������� 0");
	 cout << a / b;
	
    return 0;
}

