#pragma once
#include "element.h"
#include "Visitor.h"

class ConcreteElementB :
	public Element
{
public:
	ConcreteElementB(void);
	virtual ~ConcreteElementB(void);

	virtual void Accept( Visitor &rVisitor );
};

