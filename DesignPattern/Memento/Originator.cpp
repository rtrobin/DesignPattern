#include "Originator.h"
#include <iostream>

Originator::Originator(void)
{
}

Originator::Originator( const std::string& rState )
	: m_State( rState )
{
}


Originator::~Originator(void)
{
}

std::string Originator::GetState()
{
	return m_State;
}

void Originator::SetState( const std::string& rState )
{
	m_State = rState;
}

Memento* Originator::CreateMemento()
{
	return new Memento( m_State );
}

void Originator::RestoreState( Memento* pMemento )
{
	if ( nullptr != pMemento )
	{
		m_State = pMemento->GetState();
	}
}

void Originator::PrintState()
{
	std::cout << "State = " << m_State << std::endl; 
}
