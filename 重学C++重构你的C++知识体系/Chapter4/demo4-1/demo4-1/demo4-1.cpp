// demo4-1.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

#include <iostream>
using namespace std;


#include <vector>

int main()
{
	// �������
	//int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 0, 0};
	//// �Ƽ���ʽ
	//for (int index = 0; index < 10; ++index)
	//	cout << a[index] << " ";
	//cout << endl;

	// ���Ƽ���ʽ
    //for (int index = 0; index <= 9; ++index)
        //cout << a[index] << " ";

	// ����Ĳ���
	//int a[] = { 1, 2, 3, 4 };
	//int len = sizeof(a) / sizeof(a[0]);//�õ���������
	//cout << sizeof(a)<<endl;
	//cout << sizeof(a[0]) << endl;
	//for (int index = 0; index < len; ++index)
	//{
	//	if (a[index] == 5)
	//	{
	//		cout << index << endl;
	//		return 0;
	//	}
	//}

	//��ά����ķ��ʣ�
	int a[2][4] = { { 1, 2, 3, 4 },{ 5,6,7,8 } };
	for (int row = 0; row < 2; ++row)
	{
		for (int col = 0; col < 4; ++col)
		{
			cout << a[row][col] << " ";
		}
		cout << endl;
	}



    return 0;
}

