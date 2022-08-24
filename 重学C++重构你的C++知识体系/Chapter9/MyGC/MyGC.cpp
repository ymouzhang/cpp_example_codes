// MyGC.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "GCPtr.h"



int main()
{
	GCPtr<int> p;

	try {
		p = new int;
	}
	catch (bad_alloc exc){
		cout << "Allocation failure!\n";
		return 1;
	}
	*p = 88;
	*p += 1;
	cout << "Value at p is: " << *p << endl;
	GCPtr<int> p1 = p;
	cout << "p's list size: " << p.gclistSize() << endl;
	p.showlist();

	GCPtr<int, 10> pA = new int[10];
	Iter<int> it = pA.begin();
	int index = 1;
	for (; it != pA.end(); it++)
	{
		*it = index++;
	}
	it = pA.begin();
	for (; it != pA.end(); it++)
	{
		cout << *it << endl;
	}
	cout << "pA's list size: " << pA.gclistSize() << endl;
	pA.showlist();

	return 0;
}

//!!! �Զ�������������ṩiterator_traits���������ԣ��ֱ��ǵ��������͡�Ԫ�����͡��������͡�ָ��������reference����!!!
//template<class Iterator>
//struct iterator_traits
//{
//	typedef typename Iterator::difference_type difference_type;
//	typedef typename Iterator::value_type value_type;
//	typedef typename Iterator::pointer pointer;
//	typedef typename Iterator::reference reference;
//	typedef typename Iterator::iterator_category iterator_category;
//}��