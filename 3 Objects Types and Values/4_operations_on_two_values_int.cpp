#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }

/*  
EXERCISE 4. OPERATIONS ON TWO VALUES

4 Write a program that prompts the user to enter two integer values. Store these values in int variables named val1 and val2. Write your program to determine the smaller, larger, sum, difference, product, and ratio of these values and report them to the user.

*/

int main()
{
	int val1 = 0;
	int val2 = 0;
	cout << "Enter the value of the first variable, val1: " ;
	cin >> val1;
	cout << "Enter the value of the second variable, val2: " ;
	cin >> val2;
	if ( (val1 < val2) && (val1 =! val2) )
		cout << val1 << " is smaller than " << val2 << " \n";
	if ( (val1 > val2) && (val1 =! val2) )
		cout << val1 << " is larger than " << val2 << " \n";	
	cout <<  "Sum: " << val1 << " + " << val2 << " = " << val1+val2 << " \n"; 
	cout <<  "Difference: " << val1 << " - " << val2 << " = " << val1-val2 << " \n"; 
	cout <<  "Product: " << val1 << " * " << val2 << " = " << val1*val2 << " \n"; 
	cout <<  "Ratio: " << val1 << " : " << val2 << " = " << val1/ val2 << " \n"; 