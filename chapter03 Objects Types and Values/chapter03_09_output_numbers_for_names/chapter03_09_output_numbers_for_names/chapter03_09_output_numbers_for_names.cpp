/* chapter03_09_output_numbers_for_names.cpp : Defines the entry point for the console application.

9. Write a program that converts spelled-out numbers such as "zero" and
"two" into digits, such as 0 and 2. When the user inputs a number, the
program should print out the corresponding digit. Do it for the values 0,
1 , 2, 3, and 4 and write out "not a number I know" if the user enters
something that doesn't correspond, such as "stupid computer!"

*/

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	string name = "quit";
	int number(-1);
	
	cout << "Program outputs number when given its name. \n";
	cout << "Enter 'quit' to end program.\n";
	cout << "What is the name of your number?\n";

	while(name != "quit"|| name != "Quit")
	{
		if( name == "zero")       {number = 0;}
		else if (name == "one")   {number = 1;}
		else if (name == "two")   {number = 2;}
		else if (name == "three") {number = 3;}
		else if (name == "four")  {number = 4;}
		else  cout << "Not a number I know!\n\n";	
	}
	cout << "Your number is " << number << " \n\n";
	
	return 0;
}

