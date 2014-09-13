#include "ConcreteDecorator.h"
#include <iostream>


ConcreteDecorator::~ConcreteDecorator(void)
{
}

void ConcreteDecorator::Operation()
{
	m_pComponent->Operation(); 
	AddedBehavior(); 
}

void ConcreteDecorator::AddedBehavior()
{
	std::cout << "AddedBehavior of ConcreateDecorator\n"; 
}

ConcreteDecorator::ConcreteDecorator( Componentt* pComponent )
	: Decorator( pComponent )
{
}
