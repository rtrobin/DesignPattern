#include "RealSubject.h"
#include <iostream>

RealSubject::RealSubject(void)
{
	std::cout << "Constructing a RealSubject\n"; 
}


RealSubject::~RealSubject(void)
{
}

void RealSubject::Request()
{
	std::cout << "Request By RealSubject\n"; 
}
