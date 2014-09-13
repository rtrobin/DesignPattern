#pragma once
#include "implementor.h"

// Derived class: ConcreteImplementorB, inherit from Implementor
class ConcreteImplementorB :
	public Implementor
{
public:
	ConcreteImplementorB(void);
	virtual ~ConcreteImplementorB(void);

	virtual void OperationImpl();
};

