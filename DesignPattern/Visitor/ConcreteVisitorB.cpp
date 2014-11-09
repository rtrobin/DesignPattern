#include "ConcreteVisitorB.h"
#include <iostream>

ConcreteVisitorB::ConcreteVisitorB(void)
{
}


ConcreteVisitorB::~ConcreteVisitorB(void)
{
}

void ConcreteVisitorB::VisitConcreteElementA( ConcreteElementA *pConcreteElementA )
{
	std::cout << "Visit Concrete Element A By Concrete Visitor B\n"; 
}

void ConcreteVisitorB::VisitConcreteElementB( ConcreteElementB *pConcreteElementB )
{
	std::cout << "Visit Concrete Element B By Concrete Visitor B\n"; 
}
