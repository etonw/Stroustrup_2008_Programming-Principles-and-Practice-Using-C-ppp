
/*
	etonw
	22.6.2017
	PPP chapter04 - computation
	chapter04

	chapter04_try this _square.cpp

	Implement square() without using the multiplication operator; that is, do the
	x*x by repeated addition (start a variable result at 0 and add x to it x times).
	Then run some version of "the first progfanl" using that square().
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
	double result(0), initial_value(0), multiplier(0);
	
	while(2!=3){	// Haha! Way to make a unending loop!
	cout << "What is the value of x?: ";	//prompt
	cin>>initial_value;
	multiplier = initial_value;

		for(int i=0; i<multiplier; ++i){	//calculate square of multiplier
			result+=multiplier;
	}
	cout << "\n" << initial_value << "^2 == " << result << "\n" ;
	// keep_window_open(); // window must be closed manually
	}
}

/*
NB

Error with negative values

What is the value of x?: 2

 2^2 == 4
What is the value of x?: 4

 4^2 == 16
What is the value of x?: 5

 5^2 == 25
What is the value of x?: 6

 6^2 == 36
What is the value of x?: 32

 32^2 == 1024
What is the value of x?: 321

 321^2 == 103041
What is the value of x?: 5151

 5151^2 == 2.65328e+007
What is the value of x?: -9

 -9^2 == 0
What is the value of x?: -6

 -6^2 == 0
What is the value of x?:*/