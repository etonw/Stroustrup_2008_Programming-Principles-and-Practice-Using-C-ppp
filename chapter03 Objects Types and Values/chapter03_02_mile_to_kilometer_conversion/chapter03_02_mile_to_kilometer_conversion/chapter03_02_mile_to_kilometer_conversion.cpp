/* chapter03_02_mile_to_kilometer_conversion.cpp : Defines the entry point for the console application.

Write a program in C++ that converts from miles to kilometers. Your
program should have a reasonable prompt for the user to enter a number
of miles. Hint: There are 1 .609 kilometers to the mile.


*/

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int miles, kilometers;
	cout << "This program CONVERTS miles to kilometers.\n";
	cout << "\nEnter a number of miles: ";
	cin >> miles;
	kilometers = miles*1.609;
	cout << "\n" << miles << " miles equals " << kilometers << " kilometers. \n" ;
	cout << "\nGood-bye \n\n";
	return 0;
}