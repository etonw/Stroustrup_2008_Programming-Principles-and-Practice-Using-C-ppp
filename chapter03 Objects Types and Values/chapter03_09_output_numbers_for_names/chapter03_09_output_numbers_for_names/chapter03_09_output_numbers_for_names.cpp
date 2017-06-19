// chapter03_09_output_numbers_for_names.cpp : Defines the entry point for the console application.
//

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

