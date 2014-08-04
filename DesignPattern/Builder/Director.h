#pragma once
#include "Builder.h"

// Use class Builder to build product.
// Although the procedure of producing are same, different builder has different implementation.
// The difference implementation is fulfilled by the different derivation of base class Builder.
// The class member, pointer of Builder, implements polymorphism.
class Director
{
public:
	Director( Builder *pBuilder );
	virtual ~Director(void);

	void Construct();

private:
	Builder *m_pBuilder;
};