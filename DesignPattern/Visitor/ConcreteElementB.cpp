#include "ConcreteElementB.h"


ConcreteElementB::ConcreteElementB(void)
{
}


ConcreteElementB::~ConcreteElementB(void)
{
}

void ConcreteElementB::Accept( Visitor &rVisitor )
{
	rVisitor.VisitConcreteElementB( this );
}
