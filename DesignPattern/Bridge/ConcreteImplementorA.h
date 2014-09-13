#pragma once
#include "implementor.h"

// Derived class: ConcreteImplementorA, inherit from Implementor
class ConcreteImplementorA :
	public Implementor
{
public:
	ConcreteImplementorA(void);
	virtual ~ConcreteImplementorA(void);

	virtual void OperationImpl();
};

