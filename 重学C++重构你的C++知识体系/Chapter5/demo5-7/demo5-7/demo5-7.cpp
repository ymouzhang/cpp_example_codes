// demo5-7.cpp : �������̨Ӧ�ó������ڵ㡣
//
#include "stdafx.h"
#include <string>

int a = 0;                                                //(GVAR)ȫ�ֳ�ʼ���� 
int* p1;                                                   //(bss)ȫ��δ��ʼ���� 
int main()                                               //(text)������
{
	int b=1;                                              //(stack)ջ������ 
	char s[] = "abc";                                 //(stack)ջ������
	int*p2=NULL;                                     //(stack)ջ������
	char *p3 = "123456";                         //123456\0�ڳ�����, p3��(stack)ջ��
	static int c = 0;                                   //(GVAR)ȫ��(��̬)��ʼ���� 
	p1 = new int(10);                               //(heap)��������
	p2 = new int(20);                               //(heap)��������
	char* p4 = new char[7];                     //(heap)��������
	strcpy_s(p4, 7, "123456");                  //(text)������

	//(text)������
	if (p1 != NULL)
	{
		delete p1;
		p1 = NULL;
	}
	if (p2 != NULL)
	{
		delete p2;
		p2 = NULL;
	}
	if (p4 != NULL)
	{
		delete[ ] p4;
		p4 = NULL;
	}
	//(text)������
	return 0;                                            //(text)������
}

