// demo5-1.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	int a = 112, b = -1;
	float c = 3.14f;
	int*  d = &a;
	float*  e = &c;
	cout << d << endl;    cout << e << endl;
	cout << (*d) << endl;    cout << (*e) << endl;
	return 0;
}