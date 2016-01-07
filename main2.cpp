//============================================================================
// Name        : main2.cpp
// Author      : Kristian
// Version     :
// Copyright   : Copyright-Jan-7-2016
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

#include "Stack.h"
using namespace std;
int main()
{
	Element* first = new Element("1");
	Element* second = new Element("2");
	Element* third = new Element("3");
	Element* fourth = new Element("4");

	Stack* stack = new Stack();

	stack->push(first);
	stack->push(second);
	stack->push(third);
	stack->push(fourth);


	Element* i = stack->pop();

	while(i != NULL)
	{
		cout << i -> getName() << endl;
		i = stack->pop();
	}


}
