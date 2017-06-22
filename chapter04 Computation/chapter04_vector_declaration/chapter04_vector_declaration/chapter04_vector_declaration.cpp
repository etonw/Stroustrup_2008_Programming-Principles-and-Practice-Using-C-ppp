/*
	etonw
	22.6.2017
	PPP chapter04 - computation
	chapter04

	chapter04_vector_declaration.cpp

	Learning to declarea vector and use its member functions.
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
	vector<int>v(8);// make a vector of 8 elements numbered(0,1,2,3,4,5,6,7)

	cout << v[0];   // value of first element?
	v.push_back(8); // add a new (9th) element and fill it with value 8
	cout <<v[8];	// check the value of 9th element
	cout <<v[0];	//what is value of first element?
	cout << v.size(); // what is the size of the vector?

	cout << "\n\n";

	for (int i=0; i<v.size(); ++i)	//loop and print vector
			cout << "v[" << i << "]==" << v[i] << '\n';
	cout <<'\n';
	// keep_window_open(); // window must be closed manually
	
}

/*

0809

v[0]==0
v[1]==0
v[2]==0
v[3]==0
v[4]==0
v[5]==0
v[6]==0
v[7]==0
v[8]==8

Press any key to continue . . .

*/