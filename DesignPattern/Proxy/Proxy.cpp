#include "Proxy.h"
#include "iostream"

Proxy::Proxy(void)
	: m_pRealSubject( nullptr )
{
	std::cout << "Constructing a Proxy\n"; 
}


Proxy::~Proxy(void)
{
	delete m_pRealSubject; 
	m_pRealSubject = nullptr; 
}

void Proxy::Request()
{
	// Being initialized when RealSubject is needed
	if ( nullptr == m_pRealSubject ) 
	{ 
		std::cout << "Request By Proxy\n"; 
		m_pRealSubject = new RealSubject(); 
	} 
	m_pRealSubject->Request(); 
}
