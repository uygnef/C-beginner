// 5.23.cpp : �������̨Ӧ�ó������ڵ㡣
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
				throw runtime_error("�ڶ������� 0");
			}
		}
		catch (runtime_error err)
		{
			cout << err.what() << "\n���ԣ�����y �� n" << endl;
			char c; cin >> c;
			if (c != 'y')
				break;
		}
		cout << a / b;
	}
	
    return 0;
}

