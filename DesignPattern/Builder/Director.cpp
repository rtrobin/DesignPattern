#include "Director.h"

Director::Director( Builder *pBuilder )
	: m_pBuilder(pBuilder)
{
}


Director::~Director(void)
{
	delete m_pBuilder;
	m_pBuilder = nullptr;
}

// This function represents the whole procedure of an object, the different part uses the same function.
// Different builder has different implementation. 
void Director::Construct()
{
	m_pBuilder->BuilderPartA();
	m_pBuilder->BuilderPartB();
}
