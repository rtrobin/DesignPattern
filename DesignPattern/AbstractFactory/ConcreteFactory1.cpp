#include "ConcreteFactory1.h"
#include <iostream>

#include "ConcreteProductA1.h"
#include "ConcreteProductB1.h"

ConcreteFactory1::ConcreteFactory1(void)
{
	std::cout << "construction of ConcreateFactory1" << std::endl; 
}


ConcreteFactory1::~ConcreteFactory1(void)
{
	std::cout << "destruction of ConcreateFactory1" << std::endl; 
}

AbstractProductA* ConcreteFactory1::CreateProductA()
{
	return new ConcreteProductA1();
}

AbstractProductB* ConcreteFactory1::CreateProductB()
{
	return new ConcreteProductB1();
}
