#pragma once
#include "Aggregate.h"

// Class iterator, used for access ConcreteAggregate container class
#include "iterator.h"
class ConcreteIterator :
	public Iterator
{
public:
	ConcreteIterator( Aggregate *pAggregate );
	virtual ~ConcreteIterator(void);

	virtual void First();
	virtual void Next();
	virtual bool IsDone();
	virtual int CurrentItem();

private:
	Aggregate *m_pConcreteAggregate;
	int m_nIndex;
};

