// demo7-4.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;

// ������
class Shape
{
public:
	virtual double Area() const = 0;// ���෽��ʵ�ֲ�һ�¼���virtual
	virtual void Show() = 0;
	void SetColor(int color) { _color = color; }
	void Display()
	{
		cout << Area() << endl;
	}
private:
	int _color;
};

class Square: public Shape
{
public:
	Square(double len) :_len(len) { }
	void Show() { cout << "Square" << endl; }
	double Area() const
	{
		return _len*_len;
	}
private:
	double _len;
};


class Circle : public Shape
{
public:
	Circle(double radius) :_radius(radius) {}
	void Show() { cout << "Circle" << endl; }
	double Area() const
	{
		return 3.1415926*_radius*_radius;
	}

private:
	double _radius;
};

class Triangle : public Shape
{
public:
	Triangle(double len, double height) :_len(len), _height(height){}
	void Show() { cout << "Triangle" << endl; }
	double Area() const
	{
		return 0.5*_len*_height;
	}

private:
	double _len;
	double _height;
};

int main()
{
	// ��Ա仯�����������޸�ԭ�е��߼���Ҫ�����߼�
	const int shapeNum = 3;

	Square s1(2.0);
	s1.SetColor(1);
	Circle   c1(2.0);
	Triangle t1(2.0, 3.0);

	Shape* shapes[shapeNum];
	shapes[0] = &s1;
	shapes[1] = &c1;
	shapes[2] = &t1;

	for (unsigned int index = 0; index < shapeNum; index++)
	{
		shapes[index]->Display();
	}

	cout << endl;
	cout << sizeof(s1) << endl;

	return 0;

}