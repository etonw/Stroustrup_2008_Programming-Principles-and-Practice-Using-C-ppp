//  : Defines the entry point for the console application.
/*
	etonw
	25.6.2017
	PPP chapter04 - computation
	chapter04_07_calculator_word input.cpp

	5. Write a program that performs as a very simple calculator. Your calculator
	should be able to handle the five basic math operations - add, subtract,
	multiply, divide, and modulus (remainder) - on two input values.
	Your program should prompt the user to enter three arguments: two
	double values and a character to represent an operation. If the entry arguments
	are 35.6, 24. 1 , and '+', the program output should be "The sum
	of 35.6 and 24.1 is 59.7." 

	7. Modify the "mini calculator" from exercise 5 to accept (just) single-digit
	numbers written as either digits or spelled out.

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
	//declaration
	vector <string> w(10);  // words for the number
	vector <string> d(10);	// digits for the number
	bool inputs_good;
	string input_1 =" ", input_2 =" ";
	char operation = 0;
	int n1, n2; // numbers

	//initialize strings for input
	w[0]="zero";
	w[1]="one";
	w[2]="two";
	w[3]="three";
	w[4]="four";
	w[5]="five";
	w[6]="six";
	w[7]="seven";
	w[8]="eight";
	w[9]="nine";

	d[0]="0";
	d[1]="1";
	d[2]="2";
	d[3]="3";
	d[4]="4";
	d[5]="5";
	d[6]="6";
	d[7]="7";
	d[8]="8";
	d[9]="9";
	
	//prompt
	cout << "Simple Calculator. \n"
		<< "Enter two integer values(0-9) as digits or words, "
		<< " seperated by +, -, *, / or % \n";


	//convert strings to digits or to operators
	while(cin>>input_1>>input_2>>operation){
		inputs_good=false;

		//identify first number
		//word -> number
		for(int i=0; i<w.size(); ++i){
			if(input_1==w[i])
				n1=i;
				inputs_good=true;
		} 
		//digit -> number
		for(int i=0; i<d.size(); ++i){
			if(input_1==d[i])
				n1=i;		
				inputs_good=true;
		}
	
		//identify second number
		//word -> number
		for(int i=0; i<w.size(); ++i){
			if(input_2==w[i])
				n2=i;		
				inputs_good=true;
		} 
		//digit -> number
		for(int i=0; i<d.size(); ++i){
			if(input_2==d[i])
				n2=i;		
				inputs_good=true;
		} 

		//bad input warnign
		if(inputs_good!=true)
			cout << "Bad input \n"
				 << "Enter a number 1-9 as either a word ('one') or a digit('1')\n"
				 <<"Try again\n";
		
		// perform calculation and print result
		switch(operation){
		
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

				cout << "The modulus of " << n1 << " and " << n2 << " is " << n1%n2 << endl;
			break;
		default:
			cout << "That is not a legal operation!";
			break;
		}

	}//end while

	return 0;
}

/*
Simple Calculator.
Enter two integer values(0-9) as digits or words,  +, -, *, / or %
5 6 +
The sum of 5 and 6 is 11
2 3 -
The difference between 2 and 3 is -1
3 2 *
The product of 3 and 2 is 6
3 * 2
That is not a legal operation!3 * 2 *
That is not a legal operation!3 + 2
The sum of 3 and 3 is 6
3 2 +
That is not a legal operation!3 2 +
That is not a legal operation!3 2 +
That is not a legal operation!3
2
That is not a legal operation!3
2
3
That is not a legal operation!
*/