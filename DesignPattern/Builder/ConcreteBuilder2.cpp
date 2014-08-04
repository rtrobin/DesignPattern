#include "ConcreteBuilder2.h"
#include <iostream>

ConcreteBuilder2::ConcreteBuilder2(void)
{
}


ConcreteBuilder2::~ConcreteBuilder2(void)
{
}

void ConcreteBuilder2::BuilderPartA()
{
	std::cout << "BuilderPartA by ConcreteBuilder2" << std::endl;
}

void ConcreteBuilder2::BuilderPartB()
{
	std::cout << "BuilderPartB by ConcreteBuilder2" << std::endl;
}
