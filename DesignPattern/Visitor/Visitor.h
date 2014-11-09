#pragma once

class ConcreteElementA;
class ConcreteElementB;

class Visitor
{
public:
	virtual ~Visitor(void);

	virtual void VisitConcreteElementA( ConcreteElementA *pConcreteElementA ) = 0;
	virtual void VisitConcreteElementB( ConcreteElementB *pConcreteElementB ) = 0;

protected:
	Visitor(void);
};

