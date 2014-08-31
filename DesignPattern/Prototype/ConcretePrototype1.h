#pragma once
#include "prototype.h"

// derived from Class Prototype,
// implement Clone()
class ConcretePrototype1 :
	public Prototype
{
public:
	ConcretePrototype1(void);
	ConcretePrototype1( const ConcretePrototype1& );
	virtual ~ConcretePrototype1(void);

	virtual Prototype* Clone();
};

