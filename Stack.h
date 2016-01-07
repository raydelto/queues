//============================================================================
// Name        : main3.cpp
// Author      : Kristian
// Version     :
// Copyright   : Copyright-Jan-7-2016
// Description : Hello World in C++, Ansi-style
//============================================================================

#ifndef STACK_H_
#define STACK_H_
#include "Element.h"
class Stack
{
private:
	Element* _first;


public:
	void push(Element* element);
	Element* pop();
	Stack();
	virtual ~Stack();
};

#endif /* STACK_H_ */
