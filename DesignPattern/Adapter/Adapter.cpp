#include "Adapter.h"
#include <iostream>

Adapter::Adapter( Adaptee* pAdaptee )
	: m_pAdaptee(pAdaptee)
{
}


Adapter::~Adapter(void)
{
	delete m_pAdaptee; 
	m_pAdaptee = nullptr; 
}

void Adapter::Request()
{
	std::cout << "Request of Adapter\n";
	m_pAdaptee->SpecialRequest();
}
