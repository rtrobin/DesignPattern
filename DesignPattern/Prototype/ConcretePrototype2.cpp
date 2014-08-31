#include "ConcretePrototype2.h"
#include <iostream>

ConcretePrototype2::ConcretePrototype2(void)
{
	std::cout << "construction of ConcreatePrototype2\n"; 
}

ConcretePrototype2::ConcretePrototype2( const ConcretePrototype2& )
{
	std::cout << "copy construction of ConcreatePrototype2\n"; 
}


ConcretePrototype2::~ConcretePrototype2(void)
{
	std::cout << "destruction of ConcreatePrototype2\n"; 
}

Prototype* ConcretePrototype2::Clone()
{
	return new ConcretePrototype2( *this ); 
}
