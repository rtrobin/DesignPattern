#include "ConcreteFactory2.h"
#include <iostream>

#include "ConcreteProductA2.h"
#include "ConcreteProductB2.h"

ConcreteFactory2::ConcreteFactory2(void)
{
	std::cout << "construction of ConcreateFactory2" << std::endl; 
}


ConcreteFactory2::~ConcreteFactory2(void)
{
	std::cout << "destruction of ConcreateFactory2" << std::endl; 
}

AbstractProductA* ConcreteFactory2::CreateProductA()
{
	return new ConcreteProductA2();
}

AbstractProductB* ConcreteFactory2::CreateProductB()
{
	return new ConcreteProductB2();
}
