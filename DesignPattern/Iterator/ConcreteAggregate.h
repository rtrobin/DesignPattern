#pragma once
#include "aggregate.h"

// Concrete container. Here uses array.
class ConcreteAggregate :
	public Aggregate
{
public:
	ConcreteAggregate( int nSize );
	virtual ~ConcreteAggregate(void);

	virtual Iterator* CreateIterator( Aggregate *pAggregate );
	virtual int GetSize();
	virtual int GetItem( int nIndex );

private:
	int m_nSize;
	int *m_pData;
};

