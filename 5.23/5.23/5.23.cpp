// 5.23.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "iostream"

#include "string"
using namespace std;


int main()
{
	double a, b;
	while (cin >> a >> b) {

		try
		{
			if (b == 0)
			{
				throw runtime_error("第二个数是 0");
			}
		}
		catch (runtime_error err)
		{
			cout << err.what() << "\n重试？输入y 或 n" << endl;
			char c; cin >> c;
			if (c != 'y')
				break;
		}
		cout << a / b;
	}
	
    return 0;
}

