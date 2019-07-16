#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }

/*  
EXERCISE 
5. Write a program that performs as a very simple calculator. 

Your calculator should be able to handle the four basic math operations — add, subtract, multiply, and divide — on two input values. 

Your program should prompt the user to enter three arguments: two double values and a character to represent an operation. 

If the entry arguments are 35.6, 24.1, and '+', the program output should be The sum of 35.6 and 24.1 is 59.7. 

In Chapter 6 we look at a much more sophisticated simple calculator.

*/

int main()
{
	char operation = ' ';
	double val1 = 0;
	double val2 = 0;

	cout << "Simple Calculator. Enter two values (double) \n" ;
	cout << "and '+', '-', '*', '/' for the operation\n";
	cin >> val1 >> val2 >> operation;
	
	switch(operation){
	case '+':
		cout << "The sum of " << val1 << " and " << val2 << " is " << val1+val2 << endl;
		break;
	case '-':
		cout << "The difference between " << val1 << " and " << val2 << " is " << val1-val2 << endl;
		break;
	case '*':
		cout << "The product of " << val1 << " and " << val2 << " is " << val1*val2 << endl;
		break;
	case '/':
		cout << "The qoutient of " << val1 << " and " << val2 << " is " << val1/val2 << endl;
		break;	
	default:
		cout << "Error in entering character for operation.\n";
		cout << "Enter '+', '-', '*', '/' for the operation.\n";	
	    break;		
	} // end switch
	return 0; // successful program
} // end main	


/*
OUTPUT

About • FAQ • Blog • Terms of Use • Contact Us • GDB Tutorial • Credits
© 2016 - 2019 GDB Online
Language

    main.cpp

    input

Simple Calculator. Enter two values (double)                                                               
and '+', '-', '*', '/' for the operation                                                                   
265.23                                                                                                     
4141.1221                                                                                                  
*                                                                                                          
The product of 265.23 and 4141.12 is 1.09835e+06                                                           
     
*/