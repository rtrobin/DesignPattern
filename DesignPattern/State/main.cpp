#include <iostream>
#include "ConcreteStateA.h"
#include "ConcreteStateB.h"
#include "Contextt.h"

int main()
{
	State *pState = new ConcreteStateA();
	Contextt *pContext = new Contextt( pState );
	
	pContext->Request();
	pContext->Request();
	pContext->Request();
	
	delete pContext;

	system("pause");
	return 0;
}