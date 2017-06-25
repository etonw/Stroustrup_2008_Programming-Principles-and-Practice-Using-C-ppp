/*
	etonw
	25.6.2017
	PPP chapter04 - computation
	chapter04_07_calculator_BEW and BS.cpp 

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

//declare
vector<string> numbers;

//function to populate the vector
//returns nothing just does an action
void fill_vector()
{
	numbers.push_back("zero");
	numbers.push_back("one");
	numbers.push_back("two");
	numbers.push_back("three");
	numbers.push_back("four");
	numbers.push_back("five");
	numbers.push_back("six");
	numbers.push_back("seven");
	numbers.push_back("eight");
	numbers.push_back("nine");
}

int get_number()
{
	/*    STRAUSTRUP:
	To use cin again after a failed read, you need to use a 
	function call "cin.clear();" to "clear" it.
	That isn't explained in the book until chapter 10. Sorry.
	Solutions that do not use this technique can get very complicated.
	*/

	 int input(0);
	 if(cin>>input)  return input; // return a read integer
	 cin.clear();	// allows us to use cin after a failed read
	 string input_string=" ";
	 cin>>input_string;
	 
	 // converting a word to a number
	 for(int i=0; i<numbers.size(); ++i){
		if(input_string==numbers[i])  return i;
	 }
	 return (-1); // if input is not valid
}

int main()
{
	fill_vector();
	
	//prompt
	cout<< "Simple Calculator. \n"
		<< "Enter two integer values between 0-9\n"
		<< "  (as digits or words)\n "
		<< "seperated by +, -, *, / or % \n";
		
		while (true){
			cout << "\nReady for calculation: \n";

			//retrieve the numbers and operation from user
			int n1=get_number();  // fast and slick initilization!
			char operation = ' ';	// intialize char to hold operation
			int n2=get_number();
	
			cin >> operation;
			
			if(n1==-1 || n2==-1)   // no bad input recieved
					cout << "Numbers must be an int or"
					<< "\nwhen spelled out, a single digit";
			else{

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
					cout << "The modulus of " << n1 << " and " << n2 << " is " << n1/n2 << endl;
					break;
				default:
					cout << "That is not a legal operation!";
					break;
				}//end switch

			}//end else

		}// end while
} // end main