#pragma once
#include "abstractproducta.h"

// Derived class: ConcreateProductA2, inherit from AbstractProductA
// Represent the 2nd implement of Product A
class ConcreteProductA2 :
	public AbstractProductA
{
public:
	ConcreteProductA2(void);
	virtual ~ConcreteProductA2(void);
};

