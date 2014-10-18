#include <iostream>
#include "ConcreteObserver.h"
#include "ConcreteSubject.h"

int main() 
{ 
	Observer *p1 = new ConcreteObserver; 
	Observer *p2 = new ConcreteObserver; 
	Subject* p = new ConcreteSubject;

	p->Attach(p1); 
	p->Attach(p2); 
	p->SetState(4); 
	p->Notify(); 
	p->Detach(p1); 
	p->SetState(10); 
	p->Notify(); 

	delete p; 
	system("pause"); 

	return 0; 
} 