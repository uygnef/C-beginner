// 3.43.cpp : �������̨Ӧ�ó������ڵ㡣
//��Χfor

#include "stdafx.h"
#include "iostream"
using namespace std;



int main()
{
	int ia[3][4] = {
		{0,1,2,3},
		{4,5,6,7},
		{8,9,10,11} 
		};
	size_t cnt = 0;
	for (int(&row)[4] : ia) {
		cout << endl;
		for (int &col : row) {
			cout << col << " ";
		}
	}
	int s; cin >> s;
    return 0;
}

