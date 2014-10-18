#include "Flyweight.h"


Flyweight::Flyweight( const std::string& state )
	: m_State( state )
{

}
Flyweight::~Flyweight(void)
{
}

std::string Flyweight::GetIntrinsicState()
{
	return m_State;
}

