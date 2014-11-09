#pragma once
#include "visitor.h"
class ConcreteVisitorB :
	public Visitor
{
public:
	ConcreteVisitorB(void);
	virtual ~ConcreteVisitorB(void);

	virtual void VisitConcreteElementA( ConcreteElementA *pConcreteElementA );
	virtual void VisitConcreteElementB( ConcreteElementB *pConcreteElementB );
};

