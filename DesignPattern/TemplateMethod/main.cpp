#include <iostream>
#include "ConcreteClass.h"
int main() 
{ 
	AbstractClass* pConcreateClass = new ConcreteClass();
	pConcreateClass->TemplateMethod();

	delete pConcreateClass; 
	
	system("pause"); 
	return 0; 
}