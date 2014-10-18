#include "FlyweightFactory.h"
#include <iostream>
#include "ConcreteFlyweight.h"

FlyweightFactory::FlyweightFactory(void)
{
}


FlyweightFactory::~FlyweightFactory(void)
{
	for ( auto iter = m_listFlyweight.begin(); iter != m_listFlyweight.end(); ++ iter )
	{
		delete( *iter );
	}
	m_listFlyweight.clear();
}

Flyweight* FlyweightFactory::GetFlyweight( const std::string& key )
{
	for ( auto iter = m_listFlyweight.begin(); iter != m_listFlyweight.end(); ++ iter )
	{
		if ( (*iter)->GetIntrinsicState() == key )
		{
			std::cout << "The Flyweight:" << key << " already exits"<< std::endl;
			return (*iter);
		}
	}

	std::cout << "Creating a new Flyweight:" << key << std::endl; 
	Flyweight* flyweight = new ConcreteFlyweight( key ); 
	m_listFlyweight.push_back( flyweight ); 
	return flyweight;
}
