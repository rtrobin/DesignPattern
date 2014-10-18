#include "ConcreteObserver.h"
#include <iostream>

ConcreteObserver::ConcreteObserver(void)
{
}


ConcreteObserver::~ConcreteObserver(void)
{
}

void ConcreteObserver::Update( Subject* pSubject )
{
	if ( nullptr == pSubject ) 
	{
		return;
	}

	m_nObserverState = pSubject->GetState(); 
	std::cout << "The Obeserver State is " << m_nObserverState << std::endl; 
}
