#pragma once

class Observer;

#include <string>
#include <list>
using namespace std;
class Observerable
{
public:
	Observerable();
	virtual ~Observerable();

	// ע��۲���
	void Attach(Observer* pOb);
	// ��ע��۲���
	void Detach(Observer* pOb);

	int GetObseverCount() const
	{
		return _Obs.size();
	}

	void DetachAll()
	{
		_Obs.clear();
	}

	virtual void GetSomeNews(string str)
	{
		SetChange(str);
	}
protected:
	void  SetChange(string news);   // �б仯����Ҫ֪ͨ

private:
	void Notify(void* pArg);

private:
	bool _bChange;
	list<Observer*> _Obs;
};

