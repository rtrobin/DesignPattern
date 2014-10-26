#pragma once

class Iterator;

// Abstract base class as container
class Aggregate
{
public:
	Aggregate(void);
	virtual ~Aggregate(void);
	
	virtual Iterator* CreateIterator( Aggregate *pAggregate ) = 0;
	virtual int GetSize() = 0;
	virtual int GetItem( int nIndex ) = 0;
};

