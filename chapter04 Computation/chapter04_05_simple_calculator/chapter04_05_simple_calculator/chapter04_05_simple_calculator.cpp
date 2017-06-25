/*
	etonw
	24.6.2017
	PPP chapter04 - computation
	 chapter04_05_simple_calculator.cpp 

	Write a program that performs as a very simple calculator. Your calculator
	should be able to handle the five basic math operations - add, subtract,
	multiply, divide, and modulus (remainder) - on two input values.
	Your program should prompt the user to enter three arguments: two
	double values and a character to represent an operation. If the entry arguments
	are 35.6, 24. 1 , and '+', the program output should be "The sum
	of 35.6 and 24.1 is 59.7." In Chapter 6 we look at a much more sophisticated
	simple calculator.

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
inline void keep_window_open() { char ch; cin>>ch; }

int main()
{
	
	//declare variables
	double n1(0),n2(0);  //operands
	char op = ' ';	     //operation

	//prompt
	cout << "Simple Calculator. \n"
		<< "Enter two double values, "
		<< " +, -, *, / or % \n";

	//while for testing
	while (cin >> n1 >> n2 >> op){
	
		//switch
		switch(op){
	
		case '+':
			cout << "The sum of " << n1 << " and " << n2 << " is " << n1+n2 << endl;
			break;
		case '-':
			cout << "The difference between " << n1 << " and " << n2 << " is " << n1-n2 << endl;
			break;
		case '*':
			cout << "The product of " << n1 << " and " << n2 << " is " << n1*n2 << endl;
			break;
		case '/':
			if (n2==0)
				cout << "No division by zero!";
			else 
				cout << "The qoutient of " << n1 << " and " << n2 << " is " << n1/n2 << endl;
			break;
		case '%':
			int n3, n4;
			
			// type conversion
			n3=n1;
			n4=n2;
			cout << "The modulus of " << n1 << " and " << n2 << " is " << n3%n4 << endl;
			break;
		default:
			cout << "That is not a legal operation!";
			break;
		}//end switch
	}// end while
}//end main


/*
Simple Calculator.
Enter two double values,  +, -, *, / or %
23 65 +
The sum of 23 and 65 is 88
32 84 -
The difference between 32 and 84 is -52
62 542*
The product of 62 and 542 is 33604
56.2 25 %
The modulus of 56.2 and 25 is 6
6 2%
The modulus of 6 and 2 is 0
0 5/
The qoutient of 0 and 5 is 0
5 0/
The qoutient of 5 and 0 is 1.#INF
56  5 *
The product of 56 and 5 is 280

*/