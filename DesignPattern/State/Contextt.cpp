#include "Contextt.h"


Contextt::Contextt( State *pState )
	: m_pState( pState )
{
}


Contextt::~Contextt(void)
{
	delete m_pState;
	m_pState = nullptr;
}

void Contextt::Request()
{
	if ( nullptr != m_pState )
	{
		m_pState->Handle( this );
	}
}

void Contextt::ChangeState( State *pState )
{
	if ( nullptr != m_pState )
	{
		delete m_pState;
		m_pState = nullptr;
	}
	m_pState = pState;
}
