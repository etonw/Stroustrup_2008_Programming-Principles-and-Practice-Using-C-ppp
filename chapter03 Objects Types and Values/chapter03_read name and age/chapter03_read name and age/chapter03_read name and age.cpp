/*
	etonw
	20.6.2017
	PPP chapter03
	chapter03_read name and age.cpp
	
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
	cout << "Please enter your name and age\n\n";
	string first_name = "???";
	int age(-1);

	cout << age << "\n\n";  // for testing why i get a huge number for age

	cin>> first_name >> age;

	cout << age << "\n\n";  // for testing why i get a huge number for age
	cout << "Hello, " << first_name << " age " << age << "\n";
	
	keep_window_open(); // window must be closed manually
	return 0;
}