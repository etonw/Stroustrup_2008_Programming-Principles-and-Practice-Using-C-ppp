/*
	etonw
	25.6.2017
	PPP chapter04 - computation
	chapter04_07_calculator_5th attempt.cpp
	
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

//representation of numbers as strings
vector<string> numbers;

// fill the vector
void init_numbers()
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

int get_number()	// get digits from 
{
	int input=0;
	if(cin>>input)	      // if the user has entered the number as an int
		return input;     // return immeadiatley
	cin.clear();	      // to use cin after a failed read it must be "cleared"
	string input_string; 
	cin>>input_string;	  // if the user has entered the number as a string
	for(int i=0; i<numbers.size(); ++i){	//convert string to int
		if(numbers[i]==input_string)
			return i;
	}
}

int main()
{
	init_numbers();  // call  function to fill the vector with strings for numbers
	cout << "Enter two values\n"
		<<  "(in int or string format)\n"
		<<  "seperated by an operator\n\n";

	while(true){	// do for infinity
	int n1=0;		// values we will use for calculation
	int n2=0;
	char operation=0;		

	n1=get_number();	//use function to return an integer we can use
	cin>>operation;
	n2=get_number();
	
	string oper;
	double result(0);
	bool all_good=true;

		switch(operation){	
		case '+':
			oper="Sum of : ";
			result=n1+n2;
			break;
		case '-':
			oper="Difference of: ";
			result=n1-n2;
			break;
		case '*':
			oper="Sum of: ";
			result=n1*n2;
			break;
		case '/':
			oper="Qoutient of: ";
			if(n2==0){
				cout << "Cannot divide by zero\n";
				all_good=false;
			}
			else result=n1/n2;
			break;
		case '%':
			oper="Modulus of: ";
			result=n1%n2;
			break;
		default:
			cout << "Bad input for operator\n";
	}
	if(all_good) cout << oper << n1 << " and " << n2 << " is " << result << endl;
	cout << "Next calculation?\n";
	}//end while
	
	return 0;
}//end main

/*
Enter two values and an operator

23+3
Sum of : 23 and 3 is 26
Try again
26-6
Difference of: 26 and 6 is 20
Try again
26*98
Sum of: 26 and 98 is 2548
Try again
65/2
Qoutient of: 65 and 2 is 32
Try again
5623523%5
Modolus of: 5623523 and 5 is 3
Try again
5/0
Cannot divide by zero
Try again
563131231321*321321323

****************
WHAT HAPPENS WHEN INPUT CONVENTION NOT FOLLOWED
23 32 +
Bad input for operator
23 and 2 is 0
Try again
32 65 -
Bad input for operator
14417284 and 5 is 0
Try again
23 + 23
Sum of : 14417284 and 23 is 1.44173e+007
Try again
23+23
Sum of : 23 and 23 is 46
Try again
23 -23
Difference of: 23 and 23 is 0
Try again
23 - 98
Difference of: 23 and 98 is -75
Try again
23 98 /
Bad input for operator
23 and 8 is 0
Try again

*/