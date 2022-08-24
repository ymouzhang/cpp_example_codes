// Demo9-5.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"


#include <algorithm>
#include <iostream>
using namespace std;

// ����һ���������ظ��ַ����ַ�������ӡ���ַ������ַ���ȫ���С�
//���磺
//����: "123"   3*2*1 = 3!
//���:  123
//          132
//          213
//          231
//          321
//          312
//f(123) = 1+f(23), f(23) = 2+f(3), f(3)  = 3  �ݹ�
void swap(char* a, char* b)
{
	char temp = *a;
	*a = *b;
	*b = temp;
}
void Permutation(char* pStr, char* pPostion)
{
	// ��׼��
	if (*pPostion == '\0')
	{
		cout << pStr << endl;
	}
	else
	{
		for (char* pChar = pPostion; *pChar != '\0'; pChar++)
		{
			// ���κͺ�����ַ�����
			swap(*pChar, *pPostion);

			Permutation(pStr, pPostion + 1);

			// ������
			swap(*pChar, *pPostion);
		}
	}
}


int main()
{
	char test[] = "132";
	Permutation(test, test);
	cout << endl;

	// ��STL���ȫ����
	// ע�⣺����Ҫ��֤����˳��
	do
	{
		cout << test[0] << test[1] << test[2] << endl;
	} while (next_permutation(test, test + 3));
	cout << endl;

	char test2[] = "321";
	// ע�⣺����Ҫ��֤����˳��
	do
	{
		cout << test2[0] << test2[1] << test2[2] << endl;
	} while (prev_permutation(test2, test2 + 3));

    return 0;
}

