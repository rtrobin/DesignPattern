#include "Factory.h"
#include <iostream>

CFactory::CFactory(void)
{
}


CFactory::~CFactory(void)
{
}


void CFactory::AnOperation()
{
	CProduct *p = FactoryMethod();

	std::cout << "an operation of product" << std::endl;
}
