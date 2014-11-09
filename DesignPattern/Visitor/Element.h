#pragma once

class Visitor;

class Element
{
public:
	virtual ~Element(void);

	virtual void Accept( Visitor &rVisitor ) = 0;

protected:
	Element(void);
};

