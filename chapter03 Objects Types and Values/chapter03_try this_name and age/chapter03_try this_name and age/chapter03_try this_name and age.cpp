/*
	etonw
	20.6.2017
	PPP chapter03
	chapter03_this this_name and age.cpp
	
	Read the age in years
	Modify the age to be written out into months. 
	Read the age into a double to allow for children who can be 
	very proud of being 5.5 years old rather than just 5.
	
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
	cout << "Please enter your name and age in years (including decimal places)\n\n";
	string first_name = "???";
	double years_age(-1);

	cin>> first_name >> years_age;

	cout << "Hello, " << first_name << ". You are " << years_age*12 << " months old.\n";
	
	keep_window_open(); // window must be closed manually
	return 0;
}