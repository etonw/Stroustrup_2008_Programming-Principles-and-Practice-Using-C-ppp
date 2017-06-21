// chapter03_08_determine if odd or even.cpp : Defines the entry point for the console application.
/*
	etonw
	21.6.2017
	PPP chapter03
	chapter03
	
	8. Write a program to test an integer value to determine if it is odd or even.
	As always, make sure your output is clear and complete. In other words,
	don't just output "yes" or "no." Your output should stand alone, like
	"The value 4 is an even number." Hint: See the remainder (modulo) operator
	in §3.4.
	
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
	int test_subject = 0;
	cout << "Enter your number to test if even or odd: ";
	while(cin >> test_subject){ 
		if(test_subject % 2 == 0) 
			cout << "\n" << test_subject << " is an even number \n\n";
		else 
			cout << "\n"  << test_subject << " is an odd number \n\n";
		cout << "Enter your number to test if even or odd: ";
	}
}
