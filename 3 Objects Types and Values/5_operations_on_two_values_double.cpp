#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }

/*  
EXERCISE 5. OPERATIONS ON TWO VALUES

4 Write a program that prompts the user to enter two integer values. Store these values in int variables named val1 and val2. Write your program to determine the smaller, larger, sum, difference, product, and ratio of these values and report them to the user.

5 Modify the program above to ask the user to enter floating-point values and store them in double variables. Compare the outputs of the two programs for some inputs of your choice. Are the results the same? Should they be? What’s the difference?

*/

int main()
{
	double val1 = 0;
	double val2 = 0;
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