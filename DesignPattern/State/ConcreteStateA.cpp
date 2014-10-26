#include "ConcreteStateA.h"
#include <iostream>

#include "ConcreteStateB.h"

ConcreteStateA::ConcreteStateA(void)
{
}


ConcreteStateA::~ConcreteStateA(void)
{
}

void ConcreteStateA::Handle( Contextt* pContext )
{
	std::cout << "Handle by Concrete StateA\n"; 
	if ( nullptr != pContext ) 
	{ 
		pContext->ChangeState( new ConcreteStateB() ); 
	} 
}
