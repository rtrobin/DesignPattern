#include "ConcreteCommand.h"
#include <iostream>

ConcreteCommand::ConcreteCommand( Receiver* pReceiver )
	: m_pReceiver( pReceiver )
{

}


ConcreteCommand::~ConcreteCommand(void)
{
	delete m_pReceiver;
	m_pReceiver = nullptr;
}

void ConcreteCommand::Execute()
{
	if ( nullptr != m_pReceiver )
	{
		m_pReceiver->Action();
	}
	std::cout << "Execute by ConcreateComand\n"; 
}
