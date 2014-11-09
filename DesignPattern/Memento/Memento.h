#pragma once
#include <string>

// Set all interface functions of Memento as private.
// Class Originator is friend class.
// This ensures that only Originator could access it.
class Memento
{
private:
	friend class Originator;
	Memento( const std::string& rState );
	void SetState( const std::string& rState );
	std::string GetState();

private:
	std::string m_State;
};

