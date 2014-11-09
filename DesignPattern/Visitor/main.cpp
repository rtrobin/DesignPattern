#include <iostream>
#include "ConcreteVisitorA.h"
#include "ConcreteElementA.h"
#include "ConcreteVisitorB.h"
#include "ConcreteElementB.h"

int main() 
{ 
	Visitor *pVisitorA = new ConcreteVisitorA();
	Element *pElementA  = new ConcreteElementA();
	Visitor *pVisitorB = new ConcreteVisitorB();
	Element *pElementB  = new ConcreteElementB();

	pElementA->Accept( *pVisitorA );
	pElementA->Accept( *pVisitorB );
	pElementB->Accept( *pVisitorA );
	pElementB->Accept( *pVisitorB );

	delete pElementA; 
	delete pVisitorA;
	delete pElementB; 
	delete pVisitorB;

	system("pause");
	return 0; 
} 