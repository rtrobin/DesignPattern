#pragma once
#include "abstractclass.h"
class ConcreteClass :
	public AbstractClass
{
public:
	ConcreteClass(void);
	virtual ~ConcreteClass(void);

protected:
	virtual void PrimitiveOperation1();
	virtual void PrimitiveOperation2();
};

