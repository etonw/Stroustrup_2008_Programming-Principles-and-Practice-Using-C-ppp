/* 
		etonw
		21.06.2017
		PPP chapter03
		chapter03_10_simple_calculator.cpp 

		10. Write a program that takes an operation followed by two operands and
		outputs the result. For example:
				+ 100 3.14
				• 4 5
		Read the operation into a string called operation and use an if-statement
		to figure out which operation the user wants, for example, if (opera·
		tion=="+"). Read the operands into variables of type double. Implement
		this for operations called +, -, *, /, plus, minus, mul, and div with their
		obvious meanings .

*/

#include "stdafx.h"
#include<iostream>
#include<fstream>
#include<sstream>
#include<cmath>
#include<cstdlib>
#include<string>
#include<list>
#include<vector>
#include<algorithm>
#include<stdexcept>
using namespace std;

int main (){

	string operation = " ";	//declaration and initialization
	double operand_one(-1), operand_two(-1);
	

	cout << "Program performs simple calculation\n" 
		 << "Enter operation and two operands, \nseperated by a space\n";  //prompt

	while(cin >> operation >> operand_one >> operand_two ){
								
	if(operation=="+")        cout << "\nAnswer is " << operand_one+operand_two << "\n";						
	else if(operation=="-")   cout << "\nAnswer is " << operand_one-operand_two << "\n";	
	else if(operation=="*")   cout << "\nAnswer is " << operand_one*operand_two << "\n";	
	else if(operation=="/")   cout << "\nAnswer is " << operand_one/operand_two << "\n";	
	}
}

/* BS Solution:
int main()
try
{
	string operation;
	double val1 = 0;	// first/leftmost operand
	double val2 = 0;	// second/rightmost operand
	cout << "Please enter an operation (+, -, *, /, plus, minus, mul, div) followed by two floating-point values separated by a space: ";
	
	while(cin >> operation >> val1 >> val2) {	// we do the following as long as we get "good" input
												// and then stop
												// loops will be explainied in detail in Chapter 4
		double res = 0;
		if (operation=="plus" || operation=="+") res = val1+val2;
		else if (operation=="minus" || operation=="-") res = val1-val2;
		else if (operation=="mul" || operation=="*") res = val1*val2;
		else if (operation=="div" || operation=="/") {
			if (val2==0) error("trying to divide by zero");
			res = val1/val2;
		}
		else error("sorry: bad operator: ",operation);

		cout << val1 << operation << val2 << " == " << res <<'\n';
		cout << "Please try again: ";
	}
	cout << "exit because of bad input\n";
	keep_window_open("~");	// For some Windows(tm) setups
}
catch (runtime_error e) {	// this code is to produceerror messages; it will be described in Chapter 5
	cout << e.what() << '\n';
	keep_window_open("~");	// For some Windows(tm) setups
}

/*
	While testing, I found it tedious to keep re-starting the program to enter a new set of values,
	so I added the while-loop. I know that loops won't be explained in detail until Chapter 4, but
	we did show a while loop in Chapter 3 and anyway, you *know* about doing things repeatedly from
	everyday life so "keep doing this until you run out of inputs" is well known.

	It is always a good idea to be sure that a divisor isn't zero.
*/
*/