#include "ConcreteHandler2.h"
#include <iostream>

ConcreteHandler2::ConcreteHandler2( Handler *pSuccessor /*= nullptr */ )
	: Handler( pSuccessor )
{

}

ConcreteHandler2::~ConcreteHandler2(void)
{
}

void ConcreteHandler2::HandleRequest()
{
	if (nullptr != m_pSuccessor) 
	{ 
		m_pSuccessor->HandleRequest(); 
	} 
	else
	{ 
		std::cout << "HandleRequest by ConcreteHandler2\n"; 
	} 
}
