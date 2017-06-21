/* chapter03_09 names to digits.cpp : Defines the entry point for the console application.

9. Write a program that converts spelled-out numbers such as "zero" and
"two" into digits, such as 0 and 2. When the user inputs a number, the
program should print out the corresponding digit. Do it for the values 0,
1 , 2, 3, and 4 and write out "not a number I know" if the user enters
something that doesn't correspond, such as "stupid computer!"

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

	string name = " ";	//declaration and initialization
	int number(-1);

	cout << "Program outputs number when given its name. \n";
	cout << "What is the name of your number?: ";		//prompt

	while(cin >> name){									// loop to test program
								
				if( name == "zero")      cout << "\nYour number is 0\n" ;						
				else if(name == "one")   cout << "\nYour number is 1\n" ;	
				else if(name == "two")   cout << "\nYour number is 2\n" ;	
				else if(name == "three") cout << "\nYour number is 3\n" ;	
				else if(name == "four")  cout << "\nYour number is 4\n" ;	
				else					 cout << "\nThat is not a number I know.\n";
				
				cout << "\nContinue to test\n\n";
	}
}

/*

NB. Discarded for simpler approach

// Both must be true to enter while body 
while(name != "quit" && name != "Quit") 


"&& and || or what's the difference?"

&& (logical AND) operator truth table
false&&false=false
false&&true=false
true&&false=false
true&&true=true

|| (logical OR) operator truth table
false||false=false
false||true=true
true||false=true
true||true=true

*/