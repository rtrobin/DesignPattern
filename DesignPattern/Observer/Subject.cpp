#include "Subject.h"
#include <iostream>
#include <algorithm> 


Subject::Subject(void)
{
}


Subject::~Subject(void)
{
	for ( auto iter = m_ListObserver.begin(); iter != m_ListObserver.end(); ++ iter )
	{
		delete(*iter);
	}
	m_ListObserver.clear();
}

void Subject::Attach( Observer *pObserver )
{
	std::cout << "Attach an Observer\n"; 
	m_ListObserver.push_back( pObserver ); 
}

void Subject::Detach( Observer *pObserver )
{
	auto iter = std::find( m_ListObserver.begin(), m_ListObserver.end(), pObserver );
	if ( iter != m_ListObserver.end() )
	{
		m_ListObserver.erase( iter );
		std::cout << "Detach an Observer\n";
	}
}

void Subject::Notify()
{
	std::cout << "Notify Observers's State\n"; 
	for ( auto iter = m_ListObserver.begin(); iter != m_ListObserver.end(); ++ iter )
	{
		(*iter)->Update( this );
	}
}

void Subject::SetState( int nState )
{
	std::cout << "Set State By Subject\n"; 
	m_nSubjectState = nState; 
}

int Subject::GetState()
{
	std::cout << "GetState By Subject\n"; 
	return m_nSubjectState; 
}
