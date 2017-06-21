// chapter03_unsafe conversions.cpp : Defines the entry point for the console application.
/*
	etonw
	21.6.2017
	PPP chapter03
	chapter03
	
	testing unsafe conversions. converting an int into a char
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

	int a = 20000;
	char c = a;	//Try to squeeze a large int into a small char
	int b = c; 
	cout << "int a==" << a << " , int conversion into char. char c=" << c;
	if (a != b)	
		cout << "\n\noops!: " << "int a=" << a << " != " << "int b=" << b << '\n';
	else
		cout << "Wow! We have large characters\n";
		 
	keep_window_open(); // window must be closed manually
	return 0;
}
