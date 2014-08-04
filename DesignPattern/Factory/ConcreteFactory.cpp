#include "ConcreteFactory.h"

#include <iostream>
#include "ConcreteProduct.h"

CConcreteFactory::CConcreteFactory(void)
{
	std::cout << "construction of ConcreteFactory" << std::endl;
}


CConcreteFactory::~CConcreteFactory(void)
{
	std::cout << "destruction of ConcreteFactory" << std::endl;
}


CProduct* CConcreteFactory::FactoryMethod()
{
	return new CConcreteProduct();
}
