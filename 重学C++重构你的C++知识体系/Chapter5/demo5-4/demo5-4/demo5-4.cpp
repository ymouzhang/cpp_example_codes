// demo5-4.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

#include <iostream>
using namespace std;
int main()
{
	// ָ���ָ��
	int a = 123;
	int* b = &a;
	int** c = &b;

	// NULL ��ʹ��
	int* pA = NULL;
	pA = &a;
	if (pA != NULL)  //  �ж�NULLָ��
	{
		cout << (*pA) << endl;
	}
	pA = NULL;       //  pA����ʱ����ΪNULL

    return 0;
}

