#include "Contextt.h"


Contextt::Contextt( Strategy *pStrategy )
	: m_pStrategy( pStrategy )
{
}


Contextt::~Contextt(void)
{
	delete m_pStrategy;
	m_pStrategy = nullptr;
}

void Contextt::ContextInterface()
{
	if ( nullptr != m_pStrategy )
	{
		m_pStrategy->AlgorithmInterface();
	}
}
