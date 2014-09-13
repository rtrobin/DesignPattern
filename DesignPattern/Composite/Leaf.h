#pragma once
#include "componentt.h"

// derived from componentt, the base class of leaf.
class Leaf :
	public Componentt
{
public:
	Leaf(void);
	virtual ~Leaf(void);

	virtual void Operation();
};

