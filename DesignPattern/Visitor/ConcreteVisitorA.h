#pragma once
#include "visitor.h"
class ConcreteVisitorA :
	public Visitor
{
public:
	ConcreteVisitorA(void);
	virtual ~ConcreteVisitorA(void);

	virtual void VisitConcreteElementA( ConcreteElementA *pConcreteElementA );
	virtual void VisitConcreteElementB( ConcreteElementB *pConcreteElementB );
};

