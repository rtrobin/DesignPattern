#pragma once
#include "abstractfactory.h"

// Derived class: ConcreateFactory1, inherit from AbstractFactory
// Produce Product A and the 1st implement of Product B
class ConcreteFactory1 :
	public AbstractFactory
{
public:
	ConcreteFactory1(void);
	virtual ~ConcreteFactory1(void);

	virtual AbstractProductA* CreateProductA();
	virtual AbstractProductB* CreateProductB();
};

