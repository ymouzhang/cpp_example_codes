// demo0.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

void  main(void)
{
	char a[10] = "a";   // �ַ�a��asciiΪ97����ʮ������Ϊ61 ��char����һ���ֽڣ�������ռ10���ֽڣ����ڴ�Ϊ61 00 00 00 00 00 00 00 00 00
	short int s = 97;   // short int ռ�������ֽ�  ʮ������Ϊ61 00
	int m = 97;         // int ռ��4���ֽ�  61 00 00 00
	long int n = 97;    // long int ռ��4���ֽ� 
	float f = 97.0f;    // float ռ��4���ֽ�
	double d = 97.0;    // double ռ��8���ֽ�  00 00 00 00 00 40 58 40
	long double k = 97.0; // long double ռ��8���ֽ� 00 00 00 00 00 40 58 40
	bool b = true;      // bool ռ��1���ֽ�  01
	wchar_t w[10] = L"a"; // wchar_t ռ��2���ֽ�  61 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00

}

