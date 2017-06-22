/*
	etonw
	22.6.2017
	PPP chapter04
    chapter04_try_this_euro_conversion.cpp 

	convert from inches to centimeters or centimeters to inches
	a suffix ' i ' or 'c' indicates the unit of the input
	any other suffix is an error.

	Use the example above as a model for a program that converts yen, 
	euros,and pounds into dollars. If you like realism, you can find 
	conversion rates on the web.
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
	const double euro_to_dollar=1.12, 
				 yen_to_dollar=0.0090,
				 pounds_to_dollar=1.27;
	double amount(0); 
	char unit=' ';
	
	cout << "Please enter the amount of your currency, followed by a space,"
		<< "\nthen a type (e==Euro, y==Yen, p==Pounds): ";
		
	while(cin >> amount >> unit){	//while loop for testing
		
		if (unit=='e')
			cout << amount << " Euro == $" << euro_to_dollar*amount << " \n";
		else if (unit=='y')
			cout << amount << " Yen == $" << yen_to_dollar*amount << " \n";
		else if (unit=='p')
			cout << amount << " Pounds == $" << pounds_to_dollar*amount << " \n";
		else
			cout<<"Sorry, I don't know a currency called "<<unit<<"\n";
	}
}

/*
 I learnt that when entering a double value through cin,
 a space must follow it before entering the char value.
 */