#include "Abstraction.h"


Abstraction::Abstraction( Implementor* pImplementor )
	: m_pImplementor( pImplementor )
{
}


Abstraction::~Abstraction(void)
{
	delete m_pImplementor; 
	m_pImplementor = nullptr; 
}

void Abstraction::Operation()
{
	m_pImplementor->OperationImpl(); 
}
