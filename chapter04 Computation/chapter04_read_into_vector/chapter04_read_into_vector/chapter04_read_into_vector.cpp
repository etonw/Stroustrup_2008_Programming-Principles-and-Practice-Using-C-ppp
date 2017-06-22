/*
	etonw
	22.6.2017
	PPP chapter04 - computation
    chapter04_read_into_vector.cpp 

	A numberic example. Here is the basic technique for getting
	an unknown - possibly large - amount of data into a computer.
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
	//read some temperatures into a vector
	vector<double>temps;	//create temps vector. no elements
	double temp;
	
	cout<<"Type in double values of temperature\n"
		<<"Type in something other than a double to stop\n\n";
	
	while(cin>>temp)		// while user enters value
		temps.push_back(temp);	//put value into at the end of vector temps
		// keep_window_open(); // window must be closed manually

	cout << "\nYou typed in the following values:\n";
	for (int i=0; i<temps.size(); ++i)	//loop through and print vector
			cout << "v[" << i << "]==" << temps[i] << '\n';
	cout <<'\n';
}

/*

Type in double values of temperature
Type in something other than a double to stop

56.65
64521
23
1
0
8954.
0.6854
844515
95
100
32
32
40
.02
k

You typed in the following values:
v[0]==56.65
v[1]==64521
v[2]==23
v[3]==1
v[4]==0
v[5]==8954
v[6]==0.6854
v[7]==844515
v[8]==95
v[9]==100
v[10]==32
v[11]==32
v[12]==40
v[13]==0.02

Press any key to continue . . ..

*/