#pragma once

#include <iostream>
using namespace std;
class Singleton
{
public:
	static const Singleton* getInstance();
	static void DoSomething()
	{
		cout << "Do Something" << endl;
	}
// ���������������˽�л�����ֹ�ⲿ����
private:
	Singleton();
	~Singleton();

	static Singleton* This; // ʹ�þ�̬�������������Դ�ķ�����ͷ�
};

