#pragma once
#include "Componentt.h"

// abstract base class, maintain a pointer of Componentt
class Decorator
	: public Componentt
{
public:
	Decorator( Componentt* pComponent );
	virtual ~Decorator(void);

protected:
	Componentt* m_pComponent;
};

