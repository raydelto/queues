/*
 * Queue.h
 *
 *  Created on: Jan 6, 2016
 *      Author: raydelto
 */

#ifndef QUEUE_H_
#define QUEUE_H_
#include "Element.h"
class Stack
{
private:
	Element* _last;

public:
	void push(Element* element);
	Element* pop();
	Stack();
	virtual ~Stack();
};

#endif /* QUEUE_H_ */
