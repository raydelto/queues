//============================================================================
// Name        : main3.cpp
// Author      : Kristian
// Version     :
// Copyright   : Copyright-Jan-7-2016
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "Element.h"

Element::Element(std::string name): _name(name), _next(NULL)
{
}

std::string Element::getName()
{
    return _name;
}

Element::~Element() {
	// TODO Auto-generated destructor stub
}
