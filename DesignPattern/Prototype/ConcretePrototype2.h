#pragma once
#include "prototype.h"

// derived from Class Prototype,
// implement Clone()
class ConcretePrototype2 :
	public Prototype
{
public:
	ConcretePrototype2(void);
	ConcretePrototype2( const ConcretePrototype2& );
	virtual ~ConcretePrototype2(void);

	virtual Prototype* Clone();
};

