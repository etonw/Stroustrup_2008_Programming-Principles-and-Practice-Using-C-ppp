// chapter03_try this_name errors.cpp : Defines the entry point for the console application.
/*
	etonw
	21.6.2017
	PPP chapter03
	chapter03
	
	testing errors from incorrect naming practices

	original code:

	int Main()
	{
		String s = "Goodbye, cruel world! ";
		cOut<<S<<'\n';
	}

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
		string s = "Goodbye, cruel world! ";
		cout << s << '\n';
		
		keep_window_open(); // window must be closed manually
		return 0;
	}
