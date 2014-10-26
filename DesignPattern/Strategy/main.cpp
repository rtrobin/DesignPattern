#include <iostream>
#include "Contextt.h"
#include "ConcreteStrategyA.h"

int main()
{
	Strategy *pStrategy = new ConcreteStrategyA();
	Contextt *pContext = new Contextt( pStrategy );
	
	pContext->ContextInterface();

	delete pContext;

	system("pause");
	return 0;
}