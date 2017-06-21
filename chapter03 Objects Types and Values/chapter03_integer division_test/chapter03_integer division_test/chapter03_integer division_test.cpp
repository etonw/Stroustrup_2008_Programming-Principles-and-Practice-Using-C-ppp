// chapter03_integer division_test.cpp : Defines the entry point for the console application.
/*
	etonw
	21.6.2017
	PPP chapter03
	
	A program to understand how  division and modolus works for integers. 
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
	int a(0), b(0); 

	a=2, b=3;
	cout << "\n\nLet a=" << a << " and b=" << b  << "\n"
		 << "\na/b==" << a/b << ",  a/b*b==" << a/b*b
		 << "\n\n\t a%b==" << a%b 
		 << "\n\n a/b*b + a%b==" << a/b*b + a%b << "\n";

	a=3, b=2; 
	cout << "\n\nLet a=" << a << " and b=" << b  << "\n"
		 << "\na/b==" << a/b << ",  a/b*b==" << a/b*b
		 << "\n\n\t a%b==" << a%b 
		 << "\n\n a/b*b + a%b==" << a/b*b + a%b << "\n";

	a=2, b=2; 
	cout << "\n\nLet a=" << a << " and b=" << b  << "\n"
		 << "\na/b==" << a/b << ",  a/b*b==" << a/b*b
		 << "\n\n\t a%b==" << a%b 
		 << "\n\n a/b*b + a%b==" << a/b*b + a%b << "\n";

	keep_window_open(); // window must be closed manually
	return 0;
}
