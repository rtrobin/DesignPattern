#pragma once
#include "Implementor.h"

// maintain a pointer of class Implementor
class Abstraction
{
public:
	Abstraction( Implementor* pImplementor );
	virtual ~Abstraction(void);

	void Operation();

protected:
	Implementor* m_pImplementor;
};

