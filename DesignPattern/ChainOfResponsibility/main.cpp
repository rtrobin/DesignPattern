#include <iostream>
#include "ConcreteHandler1.h"
#include "ConcreteHandler2.h"

int main() 
{
	Handler *p1 = new ConcreteHandler1();
	Handler *p2 = new ConcreteHandler2( p1 );

	p1->HandleRequest();
	p2->HandleRequest();

	delete p2; 

	system("pause"); 
	return 0; 
} 