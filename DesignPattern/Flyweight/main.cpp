#include <iostream>
#include "FlyweightFactory.h"

int main() 
{
	FlyweightFactory flyweightfactory;

	flyweightfactory.GetFlyweight("hello"); 
	flyweightfactory.GetFlyweight("world"); 
	Flyweight *outFlyweight = flyweightfactory.GetFlyweight("hello");

	std::string ExtrinsicState;
	outFlyweight->Operation( ExtrinsicState );
	std::cout << ExtrinsicState << std::endl;

	system("pause"); 
	return 0; 
} 