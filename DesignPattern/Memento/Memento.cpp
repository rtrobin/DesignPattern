#include "Memento.h"


Memento::Memento( const std::string& rState )
	: m_State( rState )
{
}

std::string Memento::GetState()
{
	return m_State;
}

void Memento::SetState( const std::string& rState )
{
	m_State = rState;
}
