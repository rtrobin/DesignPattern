#include <iostream>
#include "Receiver.h"
#include "ConcreteCommand.h"
#include "Invoker.h"

int main() 
{ 
	Receiver* pReceiver = new Receiver(); 
	Command*  pCommand  = new ConcreteCommand( pReceiver ); 
	Invoker*  pInvoker  = new Invoker( pCommand ); 

	pInvoker->Invoke(); 
	delete pInvoker; 

	system("pause"); 
	return 0; 
} 