/*
	etonw
	22.6.2017
	PPP chapter04
	chapter04_if_else_selection.cpp 
	
	convert from inches to centimeters or centimeters to inches
	a suffix ' i ' or 'c' indicates the unit of the input
	any other suffix is an error

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
	const double cm_per_inch=2.54;
	int length=1; 
	char unit=' ';

	cout << "Please enter a length followed by a unit (c or i): \n";
		
	while(cin >> length >> unit){	//while loop for testing
		if (unit=='i')
			cout << length << " in== " << cm_per_inch*length << "cm\n";
		else if (unit=='c')
			cout << length << " cm== " << length/cm_per_inch << " in\n";
		else
			cout<<"Sorry, I don't know a unit called"<<unit<<"\n";
	}
}