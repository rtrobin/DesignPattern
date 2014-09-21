#include "ConcreteHandler1.h"
#include <iostream>

ConcreteHandler1::ConcreteHandler1( Handler *pSuccessor /*= nullptr */ )
	: Handler( pSuccessor )
{

}

ConcreteHandler1::~ConcreteHandler1(void)
{
}

void ConcreteHandler1::HandleRequest()
{
	if (nullptr != m_pSuccessor) 
	{ 
		m_pSuccessor->HandleRequest(); 
	} 
	else
	{ 
		std::cout << "HandleRequest by ConcreteHandler1\n"; 
	} 
}
