/*
	etonw
	20.6.2017
	PPP chapter03
	chapter03_string_input.cpp
	Print "Hello World" to the screen.
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
	cout << "Please input your first and second namesn\n";
	string first;
	string second;			  
	cin >> first >> second;             // read two strings	
	string name = first + ' ' + second;  // concatenate strings with character ' ' in between them
	cout << "Hello, " << name << '\n';
	
	keep_window_open(); // window must be closed manually
	return 0;
}
