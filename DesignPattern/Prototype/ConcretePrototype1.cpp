#include "ConcretePrototype1.h"
#include <iostream>

ConcretePrototype1::ConcretePrototype1(void)
{
	std::cout << "construction of ConcreatePrototype1\n"; 
}

ConcretePrototype1::ConcretePrototype1( const ConcretePrototype1& )
{
	std::cout << "copy construction of ConcreatePrototype1\n"; 
}


ConcretePrototype1::~ConcretePrototype1(void)
{
	std::cout << "destruction of ConcreatePrototype1\n"; 
}

Prototype* ConcretePrototype1::Clone()
{
	return new ConcretePrototype1( *this ); 
}
