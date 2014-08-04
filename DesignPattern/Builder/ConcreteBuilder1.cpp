#include "ConcreteBuilder1.h"
#include <iostream>

ConcreteBuilder1::ConcreteBuilder1(void)
{
}


ConcreteBuilder1::~ConcreteBuilder1(void)
{
}

void ConcreteBuilder1::BuilderPartA()
{
	std::cout << "BuilderPartA by ConcreteBuilder1" << std::endl;
}

void ConcreteBuilder1::BuilderPartB()
{
	std::cout << "BuilderPartB by ConcreteBuilder1" << std::endl;
}
