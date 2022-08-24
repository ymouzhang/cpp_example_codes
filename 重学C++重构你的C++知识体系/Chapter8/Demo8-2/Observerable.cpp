#include "stdafx.h"
#include "Observerable.h"


Observerable::Observerable():_bChange(false)
{

}


Observerable::~Observerable()
{
}


// ע��۲���
void Observerable::Attach(Observer* pOb)
{
	if (pOb == NULL)
	{
		return;
	}

	// ������ǰ�б����Ƿ�������۲���
	auto it = _Obs.begin();
	for (; it != _Obs.end(); it++)
	{
		if (*it == pOb)
		{
			return;
		}
	}

	_Obs.push_back(pOb);
}

// ��ע��۲���
void Observerable::Detach(Observer* pOb)
{
	if ((pOb == NULL) || (_Obs.empty() == true))
	{
		return;
	}

	_Obs.remove(pOb);
}

void Observerable::SetChange(string news)
{
	_bChange = true;

	Notify( ( (void*)news.c_str() ));
}


void Observerable::Notify(void* pArg)
{
	if (_bChange == false)
	{
		return;
	}

	// ������ǰ�б����Ƿ�������۲���
	auto it = _Obs.begin();
	for (; it != _Obs.end(); it++)
	{
		(*it)->Update(pArg);
	}

	_bChange = false;
}
