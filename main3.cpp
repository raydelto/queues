//============================================================================
// Name        : main3.cpp
// Author      : Kristian
// Version     :
// Copyright   : Copyright-Jan-7-2016
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include "Stack.h"
using namespace std;

int main() {

	string name = "(Kristian)";

	for (int i = 0 ; i < name.size() ; i++) {
		cout << name[i] << endl;
		if (name[i] == '(') {
			Element* pieceHolder = new Element(name[i]);
			for (int j = (1+i); j < name.size() ; j++) {
				Element* pieceHolder = new Element(name[j]);
				if (name[j] == ')') {
					Stack* stack = new Stack();
					for (int j = i; j < name.size() ; j++) {
						stack->push(pieceHolder);
						if (name[j] == ')') {
							Element* k = stack->pop();
							while(k != NULL)
								{
									cout << k -> getName() << endl;
									k = stack->pop();
								}
						}
					}
				}
				else {
					cout << "Please Enter a proper arithmetic expression" << endl;
					return 1;
				}
			}
		}
		if (name[i] == ')') {
			//If it sees this first then there is an obvious issue with a missing ')'
			cout << "Please Enter a proper arithmetic expression" << endl;
			return 1;
		}
	}

}
