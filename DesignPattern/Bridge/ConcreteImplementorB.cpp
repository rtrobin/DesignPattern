#include "ConcreteImplementorB.h"
#include <iostream>

ConcreteImplementorB::ConcreteImplementorB(void)
{
}


ConcreteImplementorB::~ConcreteImplementorB(void)
{
}

void ConcreteImplementorB::OperationImpl()
{
	std::cout << "Implementation by ConcreteImplementorB\n"; 
}
