/*
	etonw
	22.6.2017
	PPP chapter04 - computation
	chapter04_try_this_function_square.cpp 

	Implement square() without using the multiplication operator; that is, do the
	x*x by repeated addition (start a variable result at 0 and add x to it x times).
	
	Then run some version of "the first program" using that square().
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

// function defination 
double square(double number)	
{
	double result(0); 
		for(int i=0; i<number; ++i)	
			result+=number;
	return result;
}

//main
int main()
{
	double number;
	
	cout << "What number do you want to the list to end at?: ";	//prompt
	cin>>number;

	for (int i=0; i<=number; ++i)        	//Print Table
		cout << "\n" << i << "  " << square(i);	// use of defined function
	
	cout <<"\n\n";
	keep_window_open(); // window must be closed manually
}

/*

What number do you want to the list to end at?: 15

0  0
1  1
2  4
3  9
4  16
5  25
6  36
7  49
8  64
9  81
10  100
11  121
12  144
13  169
14  196
15  225

*/