#include "ConcreteImplementorA.h"
#include <iostream>

ConcreteImplementorA::ConcreteImplementorA(void)
{
}


ConcreteImplementorA::~ConcreteImplementorA(void)
{
}

void ConcreteImplementorA::OperationImpl()
{
	std::cout << "Implementation by ConcreteImplementorA\n"; 
}
