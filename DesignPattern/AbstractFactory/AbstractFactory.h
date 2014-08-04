#pragma once

#include "AbstractProductA.h"
#include "AbstractProductB.h"

// Abstract base class: AbstractFactory
// The base of factories, which produce Product A and Product B
class AbstractFactory
{
public:
	AbstractFactory(void);
	virtual ~AbstractFactory(void);

	virtual AbstractProductA* CreateProductA() = 0;
	virtual AbstractProductB* CreateProductB() = 0;
};

