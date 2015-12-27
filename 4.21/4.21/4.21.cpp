// 4.21.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "vector"
#include"iostream"
using namespace std;


int main()
{
	vector<int> grade;
	for (int i=0; i != 20;++i)
	{
		grade.push_back(i);
	}

	for (auto &a:grade)
	{
		if (a % 2)
			a = 2 * a;
	}
	for (int b : grade)
		cout << b << " ";

    return 0;
}

