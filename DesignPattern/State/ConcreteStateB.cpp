#include "ConcreteStateB.h"
#include <iostream>

#include "ConcreteStateA.h"

ConcreteStateB::ConcreteStateB(void)
{
}


ConcreteStateB::~ConcreteStateB(void)
{
}

void ConcreteStateB::Handle( Contextt* pContext )
{
	std::cout << "Handle by Concrete StateB\n"; 
	if ( nullptr != pContext ) 
	{ 
		pContext->ChangeState( new ConcreteStateA() ); 
	} 
}
