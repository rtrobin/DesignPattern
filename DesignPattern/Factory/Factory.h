#pragma once
#include "Product.h"

class CFactory
{
public:
	CFactory(void);
	virtual ~CFactory(void);

	void AnOperation();

protected:
	virtual CProduct* FactoryMethod() = 0;
};

