// 4.22.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "iostream"
#include "string"

using namespace std;

int main()
{
	int grade;
	cin >> grade;
	string result = (grade > 90) ? "high pass" : (grade >= 75) ? "pass" : (grade >= 60) ? "low pass" :"fail";
	cout << result;
	return 0;
}

