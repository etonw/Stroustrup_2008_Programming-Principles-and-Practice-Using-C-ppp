// chapter03_safe conversions.cpp : Defines the entry point for the console application.
/*
	etonw
	21.6.2017
	PPP chapter03
	chapter03
	
	exploring type conversion

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

	char c1 = 'x';	// char c=x
	
	//char to int conversion
	int i1 = c1;     // int i1=120, value of 'x' in ASCII
	int i2 = 'x';

	char c2=i1;
	cout << "char c1==" << c1 << "\n char to int conversion gives int i1=" << i1 
		 << " \n char c2 gets the value of int i1, so char c2==" << c2 <<"\n";


	bool d = true;
    c1 = d;
	cout << "\nbool d=="<< d << "\n bool to char conversion gives char c=" << c1 << "\n\n";   // I get a question mark in a box. ANS it is for SOH (start of heading)
	
	i2 = d;
	cout << "\nbool d=="<< d << "\n bool to int conversion gives int 12==" << i2 << "\n\n";
	
	double e=d;
	cout << "\nbool d=="<< d << "\n bool to double conversion gives double e==" << e << "\n\n";
	
	char c3='A';
	int i3 =c3;
	cout << "\nchar c3=="<< c3 << "\n char to int conversion gives int i3==" << i3 << "\n\n";
	
	double e2=c3;
	cout << "\nchar c3=="<< c3 << "\n char to double conversion gives double e2==" << e2 << "\n\n";
	
	int i4 = 5;
	double e3=i4;
	cout << "\nint i4=="<< i4 << "\n int to double conversion gives double e3==" << e3 << "\n\n";
	
	/*

	The most useful conversion is int to double because it allows us to mix ints and
    doubles in expressions :

	*/



	keep_window_open(); // window must be closed manually
	return 0;
}
