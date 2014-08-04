#pragma once
#include "factory.h"

class CConcreteFactory :
	public CFactory
{
public:
	CConcreteFactory(void);
	virtual ~CConcreteFactory(void);

protected:
	virtual CProduct* FactoryMethod();
};

