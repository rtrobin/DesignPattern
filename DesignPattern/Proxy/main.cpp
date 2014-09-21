#include <iostream>
#include "Proxy.h"

int main() 
{ 
	Subject* pProxy = new Proxy(); 
	pProxy->Request(); 

	delete pProxy; 

	system("pause"); 
	return 0; 
}