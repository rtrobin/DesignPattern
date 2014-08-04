#pragma once
#include "abstractproductb.h"

// Derived class: ConcreateProductB1, inherit from AbstractProductB
// Represent the 1st implement of Product B
class ConcreteProductB1 :
	public AbstractProductB
{
public:
	ConcreteProductB1(void);
	virtual ~ConcreteProductB1(void);
};

