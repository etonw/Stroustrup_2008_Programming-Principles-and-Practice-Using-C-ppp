// chapter03_08_determine if odd or even.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int number(0);  // declare and initialize
	
	cout << "Program determines if entered number is odd or even. \n";
	cout << "Enter your number.\n";

	cin >> number;

	if( number % 2 == 0)
	{
			cout << "The number " << number << " is an even number.\n";
	}
	else
	{
		cout << "The number " << number << " is an odd number.\n";
	}
		
	return 0;
}
