// demo7-3.cpp : �������̨Ӧ�ó������ڵ㡣
//
#include "stdafx.h"

int main()
{
	String s1("Hello");                          // ���캯��
	cout << s1 << endl;
	//String s2 = s1;                             // ���ÿ������캯��
	String s2(s1);                                  // ���ÿ������캯��
	cout << s2 << endl;
	String s2A(std::move(s1));              // �ƶ����캯��
	cout << s2A << endl;
	String s3;                                        // �޲ι��캯��
	cout << s3 << endl;
	s3 = s2;                                           // ���ø�ֵ����
	cout << s3 << endl;
	String s3A;                                      // �޲ι��캯��
	s3A = std::move(s2A);                    // �ƶ���ֵ�����
	cout << s3A << endl;

    return 0;
}

