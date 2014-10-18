#pragma once
#include "flyweight.h"
class ConcreteFlyweight :
	public Flyweight
{
public:
	ConcreteFlyweight( const std::string& state );
	virtual ~ConcreteFlyweight(void);

	virtual void Operation( std::string& ExtrinsicState);
};

