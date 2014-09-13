#include "Decorator.h"



Decorator::~Decorator(void)
{
	delete m_pComponent; 
	m_pComponent = nullptr; 
}

Decorator::Decorator( Componentt* pComponent )
	: m_pComponent( pComponent )
{
}
