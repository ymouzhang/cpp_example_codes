// Demo8-4.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int Test()
{
	return 0;
}

class Base
{
public:
	Base() : _i(0) { ; }
	virtual void T() { cout << "Base:T" << _i << endl; }
private:
	int _i;
};

class Derived : public Base
{
public:
	Derived() :_j(1) { ; }
	virtual void T() { cout << "Derived:T" << _j << endl; }

private:
	int _j;
};

int main()
{
	// C++ const_cast
	const int a = 10;
	//int* pA = &a;
	int* pA = const_cast<int*>(&a);
	*pA = 100;

	// C++ reinterpret_cast
	typedef void(*FuncPtr) ();
	FuncPtr funcPtr;
	//funcPtr = &Test;
	funcPtr = reinterpret_cast<FuncPtr>(&Test);

	// static_cast
	int i = 6;
	double d = static_cast<double>(i);                  //��������ת��  int -> double
	double d2 = 5.6;
	int i2 = static_cast<int>(d2);                            //��������ת��  double -> int

	// static_cast��dynamic_cast
	int ii = 5;
	double dd = static_cast<double>(ii);
	double dd2 = 5.6;
	int ii2 = static_cast<int>(dd2);

	Base cb;
	Derived cd;
	Base* pcb;
	Derived* pcd;

	// ����--�� ����
	pcb = static_cast<Base*>(&cd);
	if (pcb == NULL)
	{
		cout << "unsafe dynamic_cast from Derived to Base" << endl;
	}
	pcb = dynamic_cast<Base*>(&cd);
	if (pcb == NULL)
	{
		cout << "unsafe dynamic_cast from Derived to Base" << endl;
	}

	// ����--�� ����
	pcd = static_cast<Derived*>(&cb);
	if (pcd == NULL)
	{
		cout << "unsafe dynamic_cast from Derived to Base" << endl;
	}
	pcd = dynamic_cast<Derived*>(&cb);
	if (pcd== NULL)
	{
		cout << "unsafe dynamic_cast from Derived to Base" << endl;
	}





    return 0;
}

