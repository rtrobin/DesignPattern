#include <iostream>
#include "Singleton.h" 
int main() 
{
	// access without class initialization
	Singleton::GetInstancePtr()->Test();
	Singleton::GetInstance().Test();

	system("pause"); 
	return 0; 
}