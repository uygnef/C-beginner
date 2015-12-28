// 4.22.cpp : 定义控制台应用程序的入口点。
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

