// demo5-5.cpp : �������̨Ӧ�ó������ڵ㡣
//
#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	char ch = 'a';

	// &������
	//&ch = 97;                      // &ch��ֵ���Ϸ�
	char* cp = &ch;                // &ch��ֵ
	//&cp = 97;                      // &cp��ֵ���Ϸ�
	char** cpp = &cp;            // &cp��ֵ

	// *������
	*cp = 'a';                           // *cp��ֵȡ����chλ��
	char ch2 = *cp;                 // *cp��ֵȡ����ch�洢��ֵ
	//*cp + 1 = 'a';                 //  *cp+1��ֵ���Ϸ���λ��
	ch2 = *cp + 1;                  //  *cp+1��ֵȡ�����ַ���ASCII��+1����
	*(cp + 1) = 'a';                  //  *(cp+1)��ֵ�﷨�ϺϷ���ȡch����λ��
	ch2 = *(cp + 1);                //  *(cp+1)��ֵ�﷨�ϺϷ���ȡch����λ�õ�ֵ

    return 0;
}

