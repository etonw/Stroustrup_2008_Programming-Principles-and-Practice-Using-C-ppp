/* 
		etonw
		21.06.2017
		PPP chapter03
		chapter03_11_pennies_to_dollars.cpp

		11 . Write a program that prompts the user to enter some number of pennies
		( 1-cent coins), nickels (S-cent coins) , dimes ( 10-cent coins) , quarters (25-
		cent coins) , half dollars (50-cent coins), and one-dollar coins ( 100-cent
		coins) . Query the user separately for the number of each size coin, e.g.,
		"How many pennies do you have ?" Then your program should print
		out something like this:
		You have 23 pennies.
		You have 17 nickels.
		You have 14 dimes.
		You have 7 quarters.
		You have 3 half dollars.
		The value of all of your coins is 573 cents.

		You may have to use your imagination to get the numbers to add up
		right-justified, but try; it can be done.
		
		Make some improvements: if only	one of a coin is reported, make the output grammatically correct, e.g.,
		" 14 dimes" and "1 dime" (not "1 dimes") . 
		
		Also, report the sum in dollars	and cents, i.e., $5.73 instead of 573 cents.
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

	//declaration and initialization
	double pennies(0), nickels(0), dimes(0),
		  quarters(0), half_dollars(0), one_dollar(0);
	
	cout << "Program calculates sum of money\n"	 //Introduction

		 << "\nHow many pennies do you have?: ";  //prompt
	cin >> pennies;
	cout << "How many nickels do you have?: ";
	cin >> nickels;
	cout << "How many dimes do you have?: ";
	cin >> dimes;
	cout << "How many quarters do you have?: ";
	cin >> quarters;
	cout << "How many half dollars do you have?: ";
	cin >> half_dollars;
	cout << "How many one dollars do you have?: ";
	cin >> one_dollar;

	//Summary of input
	cout << "\nYou have ";
		if(pennies==1) cout << " 1 penny";
		else cout << pennies << " pennies";
	cout << "\nYou have ";
		if(nickels==1) cout << " 1 nickel";
		else cout << nickels << " nikels";
	cout << "\nYou have ";
		if(dimes==1) cout << " 1 dime";
		else cout << dimes << " dimes";
	cout << "\nYou have ";
		if(quarters==1) cout << " 1 quarter";
		else cout << quarters << " quarters";
	cout << "\nYou have ";
		if(half_dollars==1) cout << " 1 half_dollar";
		else cout << half_dollars << " half_dollars";
	cout << "\nYou have ";
		if(one_dollar==1) cout << " 1 dollar";
		else cout << one_dollar << " dollars";

	// calculation of total sum of money
	double total = pennies*0.01 + nickels*0.05 + dimes*0.1 + quarters*0.25 + half_dollars*0.5 + one_dollar*1;
	cout << "\n\nThe value of all your coins is $" << total << "\n\n";
								
	
}