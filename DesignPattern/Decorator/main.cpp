#include <iostream>
#include "ConcreteComponent.h"
#include "ConcreteDecorator.h"

int main()
{
	// initialize a Componentt object
	Componentt* pComponent = new ConcreteComponent();
	// initialize a Decorator object through the Componentt object.
	// so the decorator could dynamically add behavior for Componentt.
	Decorator* pDecorator = new ConcreteDecorator(pComponent); 

	pDecorator->Operation(); 
	delete pDecorator;

	system("pause"); 
	return 0; 
}