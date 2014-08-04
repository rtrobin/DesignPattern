#pragma once
#include "abstractproducta.h"

// Derived class: ConcreateProductA1, inherit from AbstractProductA
// Represent the 1st implement of Product A
class ConcreteProductA1 :
	public AbstractProductA
{
public:
	ConcreteProductA1(void);
	virtual ~ConcreteProductA1(void);
};

