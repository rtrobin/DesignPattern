#include "ConcreteAggregate.h"
#include "ConcreteIterator.h"

ConcreteAggregate::ConcreteAggregate( int nSize )
	: m_nSize( nSize ), m_pData( nullptr )
{
	m_pData = new int[ m_nSize ];
	for ( int i = 0; i < nSize; ++ i )
	{
		m_pData[i] = i;
	}
}


ConcreteAggregate::~ConcreteAggregate(void)
{
	delete[] m_pData;
	m_pData = nullptr;
}

Iterator* ConcreteAggregate::CreateIterator( Aggregate *pAggregate )
{
	return new ConcreteIterator( this );
}

int ConcreteAggregate::GetSize()
{
	return m_nSize;
}

int ConcreteAggregate::GetItem( int nIndex )
{
	if ( nIndex < m_nSize )
	{
		return m_pData[nIndex];
	}
	else
	{
		return -1;
	}
}
