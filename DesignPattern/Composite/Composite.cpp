#include "Composite.h"
#include <iostream>

Composite::Composite(void)
{
}


Composite::~Composite(void)
{
	for ( auto iter = m_ListOfComponet.begin(); iter != m_ListOfComponet.end(); ++ iter )
	{
		delete (*iter);
	}
	m_ListOfComponet.clear();
}

void Composite::Add( Componentt* pChild )
{
	m_ListOfComponet.push_back( pChild );
}

void Composite::Remove( Componentt* pChild )
{
	m_ListOfComponet.remove( pChild );
}

Componentt* Composite::GetChild( const unsigned int &nIndex )
{
	if ( nIndex > m_ListOfComponet.size() )
	{
		return nullptr;
	}

	auto iter = m_ListOfComponet.begin();
	advance( iter, nIndex - 1 );

	return *iter;
}

void Composite::Operation()
{
	std::cout << "Operation by Composite\n";

	for ( auto iter = m_ListOfComponet.begin(); iter != m_ListOfComponet.end(); ++ iter )
	{
		(*iter)->Operation();
	}
}
