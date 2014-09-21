#include "ConcreteClass.h"
#include <iostream>

ConcreteClass::ConcreteClass(void)
{
}


ConcreteClass::~ConcreteClass(void)
{
}

void ConcreteClass::PrimitiveOperation1()
{
	std::cout << "PrimitiveOperation1 by ConcreateClass\n"; 
}

void ConcreteClass::PrimitiveOperation2()
{
	std::cout << "PrimitiveOperation2 by ConcreateClass\n";
}
