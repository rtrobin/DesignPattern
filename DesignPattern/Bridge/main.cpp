#include <iostream>
#include "ConcreteImplementorA.h"
#include "ConcreteImplementorB.h"
#include "Abstraction.h"

int main() 
{ 
	ConcreteImplementorA *pImplA = new ConcreteImplementorA();
	Abstraction *pAbstraction1 = new Abstraction( pImplA );
	pAbstraction1->Operation();

	ConcreteImplementorB *pImplB = new ConcreteImplementorB();
	Abstraction *pAbstraction2 = new Abstraction( pImplB );
	pAbstraction2->Operation();

	delete pAbstraction1;
	delete pAbstraction2;

	system("pause");
	return 0;
}