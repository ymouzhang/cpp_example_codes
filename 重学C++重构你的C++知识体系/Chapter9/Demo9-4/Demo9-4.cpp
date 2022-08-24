// Demo9-4.cpp : �������̨Ӧ�ó������ڵ㡣
//
#include "stdafx.h"

#include <vector>
#include <algorithm>
#include <functional>
#include <numeric>
#include<iostream>
using namespace std;



int main()
{   
	// transform��lambda���ʽ
	int ones[] = { 1, 2, 3, 4, 5 };
	int twos[] = { 10, 20, 30, 40, 50 };
	int results[5];
	transform(ones, ones + 5, twos, results, std::plus<int>()); // ����Ԫ��������Ӳ�����
	for_each(results, results + 5,
		[ ](int a)->void {
		cout << a << endl; } ); // lambda���ʽ������������
	cout << endl;

	// find
	int arr[] = { 0, 1, 2, 3, 3, 4, 4, 5, 6, 6, 7, 7, 7, 8 };
	int len = sizeof(arr) / sizeof(arr[0]);
	vector<int> iA(arr + 2, arr + 6);   // {2,3,3,4}
	//vector<int> iA;
	//iA.push_back(1);
	//iA.push_back(9); // {1, 9}
	cout << count(arr, arr + len, 6) << endl; // ͳ��6�ĸ���
	cout << count_if(arr, arr + len, bind2nd(less<int>(),  7) ) << endl; // ͳ��<7�ĸ���
	cout << binary_search(arr, arr + len, 9) << endl;   // 9�Ҳ���
	cout << *search(arr, arr + len, iA.begin(), iA.end()) << endl; // ����������

	cout << endl;

    return 0;
}

