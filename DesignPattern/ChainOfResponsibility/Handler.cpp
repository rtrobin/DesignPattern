#include "Handler.h"


Handler::Handler( Handler *pSuccessor /*= nullptr */ )
	: m_pSuccessor( pSuccessor )
{
}


Handler::~Handler(void)
{
	delete m_pSuccessor; 
	m_pSuccessor = nullptr; 
}
