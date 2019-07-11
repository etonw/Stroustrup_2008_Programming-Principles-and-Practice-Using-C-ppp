#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }

/*  
EXERCISE 10. VALUE OF COINS

11 Write a program that prompts the user to enter some number of pennies (1-cent coins), nickels (5-cent coins), dimes (10-cent coins), quarters (25-cent coins), half dollars (50-cent coins), and one-dollar coins (100-cent coins). Query the user separately for the number of each size coin, e.g., “How many pennies do you have?” Then your program should print out something like this:

Click here to view code image

You have 23 pennies.
You have 17 nickels.
You have 14 dimes.
You have 7 quarters.
You have 3 half dollars.
The value of all of your coins is 573 cents.

Make some improvements: if only one of a coin is reported, make the output grammatically correct, e.g., 14 dimes and 1 dime (not 1 dimes). Also, report the sum in dollars and cents, i.e., $5.73 instead of 573 cents.
*/

int main()
{

	double pennies = 0;
	double nickels = 0;
	double dimes = 0;	
	double quarters = 0;	
	double half_dollars = 0;
	double dollars = 0;
	double total_pennies = 0;
	
		cout << "Total Value of Coins: \n" ;
	cout << "\nHow many pennies do you have? " ;
	cin >> pennies;
	cout << "How many nickels do you have? " ;
	cin >> nickels;
	cout << "How many dimes do you have? " ;
	cin >> dimes;
	cout << "How many quarters do you have? " ;
	cin >> quarters;
	cout << "How many half dollars do you have? " ;
	cin >> half_dollars;
	cout << "How many dollars do you have? " ;
	cin >> dollars;

	if (pennies>1)	cout << "\nYou have " << pennies << " pennies." ;
	else if (pennies==1)cout << "\nYou have 1 penny.";
	
	if (nickels>1)   cout << "\nYou have " << nickels << " nickels." ;
	else if (nickels==1)cout << "\nYou have 1 nickel.";

	if (dimes>1) cout << "\nYou have " << dimes << " dimes." ;
	else if (dimes==1)cout << "\nYou have 1 dime.";

	if (quarters>1)	cout << "\nYou have " << quarters << " quarters." ;
	else if (quarters==1)cout << "\nYou have 1 quarter.";

	if (half_dollars>1)		cout << "\nYou have " << half_dollars << " half dollars." ;
	else if (half_dollars==1)cout << "\nYou have 1 half dollar.";

	if (dollars>1)		cout << "\nYou have " << dollars << " dollars." ;
	else if (dollars==1)cout << "\nYou have 1 dollar.";

	total_pennies = (pennies*1) + (nickels*5) + (dimes*10) + (quarters*25) + (half_dollars*50) + (dollars*100);

	cout << "\nThe value of all your coins is " <<  total_pennies << " cents"; 
	cout << "\nThe value of all your coins is $" <<  total_pennies/100 << ". "; 
	return 0; // successful program
} // end main	