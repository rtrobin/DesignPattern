#include "ConcreteElementA.h"


ConcreteElementA::ConcreteElementA(void)
{
}


ConcreteElementA::~ConcreteElementA(void)
{
}

void ConcreteElementA::Accept( Visitor &rVisitor )
{
	rVisitor.VisitConcreteElementA( this );
}
