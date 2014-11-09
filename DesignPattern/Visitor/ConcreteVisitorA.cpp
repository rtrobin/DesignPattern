#include "ConcreteVisitorA.h"
#include <iostream>

ConcreteVisitorA::ConcreteVisitorA(void)
{
}


ConcreteVisitorA::~ConcreteVisitorA(void)
{
}

void ConcreteVisitorA::VisitConcreteElementA( ConcreteElementA *pConcreteElementA )
{
	std::cout << "Visit Concrete Element A By Concrete Visitor A\n"; 
}

void ConcreteVisitorA::VisitConcreteElementB( ConcreteElementB *pConcreteElementB )
{
	std::cout << "Visit Concrete Element B By Concrete Visitor A\n"; 
}
