#pragma once
#include "abstractfactory.h"

// Derived class: ConcreateFactory2, inherit from AbstractFactory
// Produce Product A and the 2nd implement of Product B
class ConcreteFactory2 :
	public AbstractFactory
{
public:
	ConcreteFactory2(void);
	virtual ~ConcreteFactory2(void);

	virtual AbstractProductA* CreateProductA();
	virtual AbstractProductB* CreateProductB();
};

