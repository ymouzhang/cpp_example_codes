// demo5-2.cpp : �������̨Ӧ�ó������ڵ㡣
#include "stdafx.h"

#include <iostream>
using namespace std;
int main()                              
{
	// T*:  ע��*�ڶ���ͼ�ӷ����ϵ�����
	//int i = 4;  int* iP = &i;   cout << (*iP) << endl;
	//double d = 3.14; double* dP = &d; cout << (*dP) << endl;
	//char c = 'a';  char* cP = &c; cout << (*cP) << endl;
	
	// array of pointers��a pointer to an array
	int c[4] = { 0x80000000, 0xFFFFFFFF, 0x00000000, 0x7FFFFFFF };
	int*  a[4];                          // array of pointers       ָ�������
	int(*b)[4];                         // a pointer to an array �����ָ��
	b = &c;                            // ע�⣺�������������ƥ��
	// ������c��Ԫ�ظ�������a
	for (unsigned int i = 0; i<4; i++)
	{
		a[i] = &(c[i]);
	}
	// ������½��
	cout << *(a[0]) << endl;   // -2147483648
	cout << (*b)[3] << endl;   // 2147483647
	return 0;                            
}
