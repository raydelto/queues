/*
 * main.cpp
 *
 *  Created on: Jan 6, 2016
 *      Author: raydelto
 */
#include <iostream>
#include "Parser.h"
#include <string>
using namespace std;
int main()
{
	Parser *parser = new Parser();
	string expression;
	cout << "Please enter the expression you'll like to parse: " << endl;
	cin >> expression;
	if(parser ->parse(expression) == true)
	{
		cout << expression << " is a valid expression" << endl;
	}else
	{
		cout << expression << " is NOT a valid expression" << endl;
	}
	return 0;
}
