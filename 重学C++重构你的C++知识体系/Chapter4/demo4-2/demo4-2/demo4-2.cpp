// demo4-2.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	// ������̬����vector
	vector<int> vec = { 1,2,3,4 };
	cout << "size is " << vec.size() << endl;
	cout << "capacity is " << vec.capacity() << endl;
	// ��������Ԫ��
	for (int index = 0; index < vec.size(); ++index)
	{
		cout << vec[index] << endl;
	}

	// ��β������һ��Ԫ��5
	vec.push_back(5);
	cout << "size is " << vec.size() << endl;
	cout << "capacity is " << vec.capacity() << endl;
	// ��������Ԫ��
	for (int index = 0; index < vec.size(); ++index)
	{
		cout << vec[index] << endl;
	}

	// ���м����һ��Ԫ��6
	vec.insert(--vec.end(), 6);
	cout << "size is " << vec.size() << endl;
	cout << "capacity is " << vec.capacity() << endl;
	// ��������Ԫ��
	for (int index = 0; index < vec.size(); ++index)
	{
		cout << vec[index] << endl;
	}

	// ��β���Ƴ�һ��Ԫ��
	vec.pop_back();
	cout << "size is " << vec.size() << endl;
	cout << "capacity is " << vec.capacity() << endl;
	// ��������Ԫ��
	for (int index = 0; index < vec.size(); ++index)
	{
		cout << vec[index] << endl;
	}

	// ������λ���Ƴ�һ��Ԫ��
	vec.erase(vec.end() - 2);
	cout << "size is " << vec.size() << endl;
	cout << "capacity is " << vec.capacity() << endl;
	// ��������Ԫ��
	for (int index = 0; index < vec.size(); ++index)
	{
		cout << vec[index] << endl;
	}


    return 0;
}

