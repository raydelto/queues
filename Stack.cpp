//============================================================================
// Name        : main2.cpp
// Author      : Kristian
// Version     :
// Copyright   : Copyright-Jan-7-2016
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "Stack.h"

Stack::Stack() : _first(NULL)
{

}

void Stack::push(Element *element)
{
	if(_first == NULL) // the queue is empty
	{
		_first = element;

	}else //if the queue is not empty
	{
		Element* temp = _first;
		_first = element;
		_first -> _next = temp;

	}
}

Element *Stack::pop()
{
	if(_first == NULL)
	{
		return NULL;
	}

	Element* temp = _first;
	_first = _first -> _next;
	return temp;
}

Stack::~Stack() {
	// TODO Auto-generated destructor stub
}
