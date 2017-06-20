/*
	etonw
	20.6.2017
	PPP chapter03
	chapter03_exercise operators.cpp
	simple program lo exercise operators
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
	cout << "Please enter a floating-point number: ";  //prompt
	double n;
	cin >> n;
	cout << "n == " << n
		 << "\nn+1 == " << n+1
		 << "\nthree times n == " <<3*n
		 << "\ntwice n == " << n+n
		 << "\nnsquared == " << n*n
		 << "\nhalf of n == " <<n/2
		 << "\nsquare root of n == " << sqrt(n)   // library function
		 <<'\n';

	keep_window_open(); // window must be closed manually
	return 0;
}
