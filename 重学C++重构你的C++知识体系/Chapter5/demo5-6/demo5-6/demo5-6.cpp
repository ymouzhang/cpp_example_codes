// demo5-6.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"


int main()
{
	char ch = 'a';
	char* cp = &ch;
	// ++,--������
	char* cp2 = ++cp;
	char* cp3 = cp++;
	char* cp4 = --cp;
	char* cp5 = cp--;

	// ++ ��ֵ
	//++cp2 = 97;
	//cp2++ = 97;

	// *++, ++*
	*++cp2 = 98;
	char ch3 = *++cp2;
	*cp2++ = 98;
	char ch4 = *cp2++;

	// ++++, ----��������
	int a = 1, b = 2, c, d;
	//c = a++b;                  // error
	c = a++ + b;
	//d = a++++b;             // error
	char ch5 = ++*++cp;

    return 0;
}

