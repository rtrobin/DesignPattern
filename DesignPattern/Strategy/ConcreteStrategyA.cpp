#include "ConcreteStrategyA.h"
#include <iostream>

ConcreteStrategyA::ConcreteStrategyA(void)
{
}


ConcreteStrategyA::~ConcreteStrategyA(void)
{
}

void ConcreteStrategyA::AlgorithmInterface()
{
	std::cout << "Algorithm Interface Implemented by Concrete StrategyA\n"; 
}
