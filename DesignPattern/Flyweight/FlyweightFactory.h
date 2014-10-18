#pragma once
#include "Flyweight.h"
#include <list>

class FlyweightFactory
{
public:
	FlyweightFactory(void);
	virtual ~FlyweightFactory(void);

	Flyweight* GetFlyweight( const std::string& key );

private:
	std::list< Flyweight* > m_listFlyweight;
};

