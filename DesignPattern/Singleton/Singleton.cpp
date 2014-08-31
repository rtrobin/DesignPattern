#include "Singleton.h"
#include <iostream>

Singleton* Singleton::m_pStatic = nullptr;

Singleton::Singleton(void)
{
}


Singleton::~Singleton(void)
{
}

Singleton* Singleton::GetInstancePtr()
{
	if ( nullptr == m_pStatic ) 
	{ 
		m_pStatic = new Singleton(); 
	} 
	return m_pStatic; 
}

Singleton Singleton::GetInstance()
{
	return *GetInstancePtr(); 
}

void Singleton::Test()
{
	std::cout << "Test!\n"; 
}
