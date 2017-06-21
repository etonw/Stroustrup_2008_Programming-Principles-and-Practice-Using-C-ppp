/*
	etonw
	21.6.2017
	PPP chapter03
	chapter03_try_this_exer oper.cpp
	simple program to exercise operators

	Get this little program to run. Then, modify it to read an int rather than a
	double. Note that sqrt() is not defined for an int so assign n to a double and
	take sqrtO of that.

	Also, "exercise" some other operations. Note that for ints I
	is integer division and % is remainder (modulo) , so that 512 is 2 (and not 2.5
	or 3) and 5%2 is 1. The definitions of integer •, /, and % guarantee that for
	two positive ints a and b we have alb • b + a%b == a.

	NB. Could not get cbrt() to work

*/

#include "stdafx.h"
#include <math.h>
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
	cout << "Please enter a integer: ";  //prompt
	int n(0);
	cin >> n;
	cout << "\nYour integer is n == " << n
		 << "\n\nn+1 == " << n+1
		 << "\nthree times n == " <<3*n
		 << "\ntwice n == " << n+n
		 << "\nnsquared == " << n*n
		 << "\nhalf of n == " <<n/2;

	
	// assigning n to a double
	double n_double = n;  
	cout << "\n\nPlaced n into a double called n_double == " << n_double   //test it works
		
		 // testing cmath library function
		 << "\n\nsquare root of n_double == " << sqrt(n_double)   
	//	 << "\ncube root of n_double == " << cbrt(n_double)  WHY DOESNT THIS WORK
		 << "\ncosine of n_double == " << cos(n_double) 
		 << "\nexponent of n_double == " << exp(n_double)
		 << "\nabsolute value of n_double == " << abs(n_double)
		 << "\nlog10 of n_double == " << log10(n_double);

	keep_window_open(); // window must be closed manually
	return 0;
}
