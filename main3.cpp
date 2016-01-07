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

	string name = "(Kristian)I shouldn't be caught by the stack";
	string holder;
	Stack* stack = new Stack();

	for (int i = 0 ; i <= name.size() ; i++) {
		if (name[i] == '(') {
			for (int j = i; j < name.size() ; j++) {
				holder = name[j];
				cout << name[j] << endl;
				Element* pieceHolder = new Element(holder);
				stack->push(pieceHolder);
				if (name[j] == ')') {
					Element* k = stack->pop();
					while(k != NULL) {
						cout << k -> getName() << endl;
						k = stack->pop();
					}
					cout << "I've Finished Successfully, Now Shutting Down!";
					return 0;
				}
			}
		}
	}
}
