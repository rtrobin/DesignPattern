#pragma once
#include <string>

class Flyweight
{
public:
	virtual ~Flyweight(void);

	std::string GetIntrinsicState();
	virtual void Operation( std::string& ExtrinsicState ) = 0;

protected:
	Flyweight( const std::string& state);

private:
	std::string m_State;
};

