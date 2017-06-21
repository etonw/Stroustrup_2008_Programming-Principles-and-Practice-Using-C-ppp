// chapter03_compare_strings.cpp : Defines the entry point for the console application.
/*
	etonw
	21.6.2017
	PPP chapter03
	chapter03
	
	read and compare two strings

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
	cout << "Please enter two names\n";
	string first, second; 
	cin >> first >> second;   //read two strings
	if (first==second) cout << "That's the same name twice\n";
	if (first>second) cout << first << " is alphabetically before " << second << "\n";
	if (first<second) cout << first << " is alphabetically after " << second << "\n";	 
	keep_window_open(); // window must be closed manually
	return 0;
}
                                                                               