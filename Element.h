//============================================================================
// Name        : main2.cpp
// Author      : Kristian
// Version     :
// Copyright   : Copyright-Jan-7-2016
// Description : Hello World in C++, Ansi-style

#ifndef ELEMENT_H_
#define ELEMENT_H_
#include <string>
using namespace std;
class Element
{
private:
	std::string _name;
	Element* _next;

public:
	Element(std::string name);
	virtual ~Element();
    std::string getName();
	friend class Stack;
};

#endif /* ELEMENT_H_ */
