#include <iostream>

#include "ConcreteFactory.h"
#include "ConcreteProduct.h"

int main()
{
	CFactory *p = new CConcreteFactory();
	p->AnOperation();

	delete p;

	system("pause");

	return 0;
}