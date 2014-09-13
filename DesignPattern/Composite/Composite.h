#pragma once
#include "componentt.h"
#include <list>

// derived from class componentt, the base class of leaf container.
class Composite :
	public Componentt
{
public:
	Composite(void);
	virtual ~Composite(void);

	virtual void Operation();
	virtual void Add( Componentt* pChild );
	virtual void Remove( Componentt* pChild );
	virtual Componentt* GetChild( const unsigned int &nIndex );

private:
	std::list< Componentt* > m_ListOfComponet;
};

