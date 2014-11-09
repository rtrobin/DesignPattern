#pragma once
#include "element.h"

#include "Visitor.h"

class ConcreteElementA :
	public Element
{
public:
	ConcreteElementA(void);
	virtual ~ConcreteElementA(void);

	virtual void Accept( Visitor &rVisitor );
};

