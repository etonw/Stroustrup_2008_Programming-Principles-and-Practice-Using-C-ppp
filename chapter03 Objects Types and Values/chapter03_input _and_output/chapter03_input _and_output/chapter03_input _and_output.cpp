// 
	etonw
	20.6.2017
	PPP chapter03
	chapter03_input _and_output.cpp 
	Program recieves a string value and outputs it
*/
#include "StdAfx.h"
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
	cout << "Please enter your first name (followed by 'enter'):\n";  // prompt
	string first_name;
	cin >> first_name;
	cout << "\nHello, " << first_name << '\n';
    	
	keep_window_open() ; // window must be closed manually
	return 0;
}