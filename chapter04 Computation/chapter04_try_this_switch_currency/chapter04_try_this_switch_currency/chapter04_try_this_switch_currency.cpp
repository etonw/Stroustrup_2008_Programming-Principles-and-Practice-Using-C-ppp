/*
	etonw
	22.6.2017
	PPP chapter04
	chapter04
	
	chapter04_try_this_switch_currency.cpp 

	Rewrite your currency converter program from the previous Try this to use
	a switch-statement. Add conversions from yuan and kroner. Which version
	of the program is easier to write, understand, and modify? Why?
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
				 pounds_to_dollar=1.27,
				 yuan_to_dollar=0.15,
				 kroner_to_dollar=0.12;
	double amount(0); 
	char unit=' ';
	
	cout << "Please enter the amount of your currency, "
		<< "\nfollowed by a space, then a type"
		<< "\n(e==Euro, y==Yen, p==Pounds, n==Yuan k==Kroner): \n";
		
	while(cin >> amount >> unit){	//while loop for testing
		
		switch(unit){
			case 'e':
				cout << amount << " Euro == $" << euro_to_dollar*amount << " \n";
				break;
			case 'y':
				cout << amount << " Yen == $" << yen_to_dollar*amount << " \n";
				break;
			case 'p':
				cout << amount << " Pounds == $" << pounds_to_dollar*amount << " \n";
				break;
			case 'n':
				cout << amount << " Yuan == $" << yuan_to_dollar*amount << " \n";
				break;
			case 'k':
				cout << amount << " Kroner == $" << kroner_to_dollar*amount << " \n";
				break;
			default:
				cout<<"Sorry, I don't know a currency called "<<unit<<" \n";
				break;
		}
	}
}