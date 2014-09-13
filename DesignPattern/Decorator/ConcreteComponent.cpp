#include "ConcreteComponent.h"
#include <iostream>

ConcreteComponent::ConcreteComponent(void)
{
}


ConcreteComponent::~ConcreteComponent(void)
{
}

void ConcreteComponent::Operation()
{
	std::cout << "Operation of ConcreateComponent\n"; 
}
