#include "ConcreteSubject.h"
#include <iostream>

ConcreteSubject::ConcreteSubject(void)
{
}


ConcreteSubject::~ConcreteSubject(void)
{
}

void ConcreteSubject::SetState( int nState )
{
	std::cout << "Set State By ConcreateSubject\n"; 
	m_nSubjectState = nState; 
}

int ConcreteSubject::GetState()
{
	std::cout << "Get State By ConcreateSubject\n"; 
	return m_nSubjectState; 
}
