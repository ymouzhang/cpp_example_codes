// demo5-3.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

#include <iostream>
using namespace std;
unsigned int MAX_LEN = 11;
int main()
{
	char strHelloworld[] = { "helloworld" };
	char const* pStr1 = "helloworld";             // const char*
	char* const pStr2 = strHelloworld;          
	char const* const pStr3 = "helloworld";  // const char* const
	pStr1 = strHelloworld;
	//pStr2 = strHelloworld;                            // pStr2���ɸ�
	//pStr3 = strHelloworld;                            // pStr3���ɸ�

	unsigned int len = strnlen_s(pStr2, MAX_LEN);
	cout << len << endl;
	for (unsigned int index = 0; index < len; ++index)
	{
		//pStr1[index] += 1;                               // pStr1���ֵ���ɸ�
		pStr2[index] += 1;
		//pStr3[index] += 1;                               // pStr3���ֵ���ɸ�
	}

	return 0;
}
