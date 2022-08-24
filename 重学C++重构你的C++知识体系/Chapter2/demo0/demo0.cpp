// demo0.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

void  main(void)
{
	char a[10] = "a";   // 字符a的ascii为97，其十六进制为61 ，char类型一个字节，此数组占10个字节，故内存为61 00 00 00 00 00 00 00 00 00
	short int s = 97;   // short int 占用两个字节  十六进制为61 00
	int m = 97;         // int 占用4个字节  61 00 00 00
	long int n = 97;    // long int 占用4个字节 
	float f = 97.0f;    // float 占用4个字节
	double d = 97.0;    // double 占用8个字节  00 00 00 00 00 40 58 40
	long double k = 97.0; // long double 占用8个字节 00 00 00 00 00 40 58 40
	bool b = true;      // bool 占用1个字节  01
	wchar_t w[10] = L"a"; // wchar_t 占用2个字节  61 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00

}

