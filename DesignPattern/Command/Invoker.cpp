#include "Invoker.h"


Invoker::Invoker( Command *pCommand )
	: m_pCommand( pCommand )
{
}


Invoker::~Invoker(void)
{
	delete m_pCommand;
	m_pCommand = nullptr;
}

void Invoker::Invoke()
{
	if ( nullptr != m_pCommand )
	{
		m_pCommand->Execute();
	}
}
