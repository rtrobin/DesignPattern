#include "ConcreteIterator.h"


ConcreteIterator::ConcreteIterator( Aggregate *pAggregate )
	: m_pConcreteAggregate( pAggregate ), m_nIndex(0)
{
}


ConcreteIterator::~ConcreteIterator(void)
{
}

void ConcreteIterator::First()
{
	m_nIndex = 0;
}

void ConcreteIterator::Next()
{
	if ( m_nIndex < m_pConcreteAggregate->GetSize() )
	{
		++ m_nIndex;
	}
}

bool ConcreteIterator::IsDone()
{
	return m_nIndex == m_pConcreteAggregate->GetSize();
}

int ConcreteIterator::CurrentItem()
{
	return m_pConcreteAggregate->GetItem( m_nIndex );
}
