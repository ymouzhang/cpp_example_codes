// Demo8-6.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

#include <string.h>

// ģ�庯��
template<class T>
T max(T a, T b)
{
	return a > b ? a:b;
}
//�ػ�
template<>
char* max(char* a, char* b)
{
	return (strcmp(a, b) > 0 ?  (a) : (b));
}
template<class T1, class T2>
int max(T1 a, T2 b)
{
	return static_cast<int>(a > b ? a : b);
}


// ģ����
template <class T>
class TC
{
public:
	TC(T a, T b,  T c);
	T Min();
	T Max();

private:
	T _a, _b, _c;
};

template<class T>
TC<T>::TC(T a, T b, T c):
	_a(a), _b(b), _c(c)
{
    ;
}

template<class T>
T TC<T>::Min()
{
	T minab = _a < _b ? _a : _b;
	return minab < _c ? minab : _c;
}

template<class T>
T TC<T>::Max()
{
	T maxab = _a < _b ? _b : _a;
	return maxab < _c ? _c : maxab;
}


#include <iostream>
using namespace std;
int main()
{
	// ģ�庯���Ĳ���
	//cout << max(1, 2) << endl;
	//cout << max(1.5, 3.5) << endl;
	//cout << max('a', 'b') << endl;
	//cout << max("hello", "world") << endl;

	//char* s1 = "hello";
	//char* s2 = "world";
	//cout << max(s1, s2) << endl;

	//cout << max(10, 2.5) << endl;

	// ģ����Ĳ���
	TC<int> obj1(2, 4, 3);
	cout << obj1.Min() << endl;
	cout << obj1.Max() << endl;

	TC<double> obj2(2.5, 4.4, 3.3);
	cout << obj2.Min() << endl;
	cout << obj2.Max() << endl;

	TC<long> obj3(399950L, 455795L, 333339090L);
	cout << obj3.Min() << endl;
	cout << obj3.Max() << endl;






    return 0;
}

