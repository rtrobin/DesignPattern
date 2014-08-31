#pragma once
#include "target.h"
#include "Adaptee.h"

// adapter class, composite original interface 
class Adapter :
	public Target
{
public:
	Adapter( Adaptee* pAdaptee );
	virtual ~Adapter(void);

	virtual void Request();

private:
	Adaptee* m_pAdaptee;
};

