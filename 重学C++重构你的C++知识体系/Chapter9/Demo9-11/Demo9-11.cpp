// Demo9-11.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"


#include <iostream>
#include <thread>
#include <mutex>
using namespace std;


// ��Ǯ
void Deposit(mutex& m, int& money)
{
	// �������Ⱦ����ܵ���С��
	for(int index = 0; index < 100; index++)
	{
		m.lock();
		money += 1;
		m.unlock();
	}
}
// ȡǮ
void Withdraw(mutex& m, int& money)
{
	// �������Ⱦ����ܵ���С��
	for (int index = 0; index < 100; index++)
	{
		m.lock();
		money -= 2;
		m.unlock();
	}
}

int main()
{
	// ���д�ȡ��
	//int money = 2000;
	//mutex m;
	//cout << "Current money is: " << money << endl;
	//thread t1(Deposit, ref(m), ref(money));
	//thread t2(Withdraw, ref(m), ref(money));
	//t1.join();
	//t2.join();
	//cout << "Finally money is: " << money << endl;

	//�߳̽��� 
	//thread tW1([]()
	//{
	//	cout << "ThreadSwap1 " << endl;
	//});
	//thread tW2([]()
	//{
	//	cout << "ThreadSwap2 " << endl;
	//});
	//cout << "ThreadSwap1' id is " << tW1.get_id() << endl;
	//cout << "ThreadSwap2' id is " << tW2.get_id() << endl;

	//cout << "Swap after:" << endl;
	//swap(tW1, tW2); 
	//cout << "ThreadSwap1' id is " << tW1.get_id() << endl;
	//cout << "ThreadSwap2' id is " << tW2.get_id() << endl;
	//tW1.join();
	//tW2.join();

	//// �߳��ƶ�
	thread tM1( []() { ; } );
	//tM1.join();
	cout << "ThreadMove1' id is " << tM1.get_id() << endl;
	cout << "Move after:" << endl;
	thread tM2 = move(tM1);
	cout << "ThreadMove2' id is " << tM2.get_id() << endl;
	cout << "ThreadMove1' id is " << tM1.get_id() << endl;
	tM2.join();

	return 0;
}

