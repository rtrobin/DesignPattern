#include "ConcreteProduct.h"
#include <iostream>

CConcreteProduct::CConcreteProduct(void)
{
	std::cout << "construction of ConcreteProduct" << std::endl;
}


CConcreteProduct::~CConcreteProduct(void)
{
	std::cout << "destruction of ConcreteProduct" << std::endl;
}
