#pragma once
#include "abstractproductb.h"

// Derived class: ConcreateProductB2, inherit from AbstractProductB
// Represent the 2nd implement of Product B
class ConcreteProductB2 :
	public AbstractProductB
{
public:
	ConcreteProductB2(void);
	virtual ~ConcreteProductB2(void);
};

