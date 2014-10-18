#include "ConcreteFlyweight.h"

ConcreteFlyweight::ConcreteFlyweight( const std::string& state )
	: Flyweight( state )
{

}


ConcreteFlyweight::~ConcreteFlyweight(void)
{
}

void ConcreteFlyweight::Operation( std::string& ExtrinsicState )
{
	ExtrinsicState = this->GetIntrinsicState();
}

