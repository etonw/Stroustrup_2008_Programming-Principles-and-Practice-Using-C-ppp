#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }

/*  
EXERCISE 10. SIMPLE CALCULATOR

10 Write a program that takes an operation followed by two operands and outputs the result. For example:

+ 100 3.14
* 4 5

Read the operation into a string called operation and use an if-statement to figure out which operation the user wants, for example, if (operation=="+"). Read the operands into variables of type double. Implement this for operations called +, –, *, /, plus, minus, mul, and div with their obvious meanings.
*/

int main()
{
	string operation = " ";
	double a = 0;
	double b = 0;
	cout << "Simple caculator: Enter the operation, followed by two operands: " ;
	cin >> operation >> a >> b;

	if (operation== "+")	   cout << a << " + " << b << " = " << a+b;
	else if (operation== "-")  cout << a << " - " << b << " = " << a-b ;
	else if (operation== "*")  cout << a << " * " << b << " = " << a*b ;
	else if (operation== "/")  cout << a << " / " << b << " = " << a/b ;
	else cout << "Operation not recognized. "; 
	return 0; // successful program
} // end main	