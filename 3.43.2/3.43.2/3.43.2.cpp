
// 3.43.2cpp : �������̨Ӧ�ó������ڵ㡣
//ָ��

#include "stdafx.h"
#include "iostream"
using namespace std;



int main()
{
	int ia[3][4] = {
		{ 0,1,2,3 },
		{ 4,5,6,7 },
		{ 8,9,10,11 }
	};

	for (int (*i)[4] = ia; i != ia+3; ++i)
	{
		cout << endl;
		for (int *q = *i; q!=*i+4 ; ++q)
		{
			cout << *q << " ";
		}
	}
	int s; cin >> s;
	return 0;
}