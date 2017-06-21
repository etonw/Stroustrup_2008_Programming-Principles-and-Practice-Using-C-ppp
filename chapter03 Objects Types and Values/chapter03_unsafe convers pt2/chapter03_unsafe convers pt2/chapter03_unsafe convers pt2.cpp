// chapter03_unsafe convers pt2.cpp : Defines the entry point for the console application.
/*
	etonw
	21.6.2017
	PPP chapter03
	chapter03
	
	testing unsafe conversions. 
	using a series of conversions
	using a while loop

	Program shows what character machine will
	print for a given integer value
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
	double d=0;
	while(cin>>d) {	// repeat statements below as long as numbers are typed in
		int i = d; 
		char c = i; 
		int i2=c;
		cout << "\nOrginal double d==" << d
			 << "\nconverted to int i==" << i
			 << "\nint value of char c==" << i2
			 << "\nchar c(" << c << ")\n\n";
	}
}
