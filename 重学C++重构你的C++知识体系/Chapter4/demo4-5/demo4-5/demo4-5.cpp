// demo4-5.cpp : �������̨Ӧ�ó������ڵ㡣
//
#include "stdafx.h"

#include <iostream>
#include <string>
using namespace std;
int main()
{
	// �ַ�������
	string s1;//������ַ���
	string s2 = "helloworld";//���岢��ʼ��
	string s3("helloworld");
	string s4 = string("helloworld");
	// ��ȡ�ַ�������
	cout << s1.length() << endl;
	cout << s1.size() << endl;
	cout << s1.capacity() << endl;
	//  �ַ����Ƚ�
	s1 = "hello", s2 = "world";
	cout << (s1 == s2) << endl;
	cout << (s1 != s2) << endl;

	//  ת����C�����ַ���
	const char *c_str1 = s1.c_str();
	cout << "The C-style string c_str1 is: " << c_str1 << endl;
	//  �������
	for (unsigned int index = 0; index < s1.length(); ++index)
	{
		cout << c_str1[index] << " ";
	}
	cout << endl;
	for (unsigned int index = 0; index < s1.length(); ++index)
	{
		cout << s1[index] << " ";
	}
	cout << endl;

	// �ַ�������
	s1 = "helloworld";
	s2 = s1;

	// �ַ�������
	s1 = "helllo", s2 = "world";
	s3 = s1 + s2;               //s3: helloworld
	s1 += s2;                    //s1: helloworld
    return 0;
}

