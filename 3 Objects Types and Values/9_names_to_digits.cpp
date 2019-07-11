#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }

/*  
EXERCISE 8. NAMES TO DIGITS

9 Write a program that converts spelled-out numbers such as “zero” and “two” into digits, such as 0 and 2. When the user inputs a number, the program should print out the corresponding digit. Do it for the values 0, 1, 2, 3, and 4 and write out not a number I know if the user enters something that doesn’t correspond, such as stupid computer!.

*/

int main()
{
	string a = " ";
	cout << "Names into digits: Enter the name of a number from 0 to 4: " ;
	cin >> a;

	if (a== "zero") cout << a << " is: "  << 0;
	else if (a== "one") cout << a << " is: "   << 1;
	else if (a== "two") cout << a << " is: "   << 2;
	else if (a== "three") cout << a << " is: " << 3;
	else if (a== "four") cout << a << " is: "  << 4;
	else cout << "Not a number I know"; 
	return 0; // successful program
} // end main	


