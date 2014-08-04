#include <iostream>

#include "ConcreteFactory1.h"
#include "ConcreteFactory2.h"
#include "AbstractProductA.h"
#include "AbstractProductB.h"

int main()
{
	ConcreteFactory1 *pFactory1 = new ConcreteFactory1;
	ConcreteFactory2 *pFactory2 = new ConcreteFactory2;

	// The 1st implement of Product A
	AbstractProductA *pProductA1 = pFactory1->CreateProductA();
	// The 2nd implement of Product A
	AbstractProductA *pProductA2 = pFactory2->CreateProductA();
	
	// The 1st implement of Product B
	AbstractProductB *pProductB1 = pFactory1->CreateProductB();
	// The 2nd implement of Product B
	AbstractProductB *pProductB2 = pFactory2->CreateProductB();
	
	delete pFactory1;
	delete pProductA1;
	delete pProductA2;
	delete pFactory2;
	delete pProductB1;
	delete pProductB2;
	
	system("pause");
	return 0;
}