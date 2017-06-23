/*
	etonw
	22.6.2017
	PPP chapter04 - computation
	chapter04_drill.cpp 
	
	Drill
	Go through this drill step by step. Do not try to speed up by skipping steps. Test
	each step by entering at least three pairs of values - more values would be better.
	
	1. Write a program that consists of a while-loop that (each time around the
	loop) reads in two ints and then prints them. Exit the program when a
	terminating 'I' is entered.
	
	2. Change the program to write out the smaller value is: followed by the
	smaller of the nwnbers and the larger value is: followed by the larger value.
	
	3. Augment the program so that it writes the line the numbers are equal
	(only) if they are equal.
	
	4. Change the program so that it uses doubles instead of ints.
	
	5. Change the program so that it writes out the numbers are almost equal
	after writing out which is the larger and the smaller if the two numbers
	differ by less than 1 .0/10000000.
	
	6. Now change the body of the loop so that it reads just one double each
	time around. Define two variables to keep track of which is the smallest
	and which is the largest value you have seen so far. Each time through
	the loop write out the value entered. If it's the smallest so far, write the
	smallest so far after the nwnber. If it is the largest so far, write the largest
	so far after the number.
	
	7. Add a unit to each double entered; that is, enter values such as 1 0cm,
	2.Sin, Sft, or 3.33m. Accept the four units: em, m, in, ft. Assume conversion
	factors 1m = 1 00cm, 1 in = 2.54cm, 1 ft == 12in. Read the unit indicator
	into a string.
	
	8. Reject values without units or with "illegal" representations of units, such
	as y, yard, meter, km, and gallons.
	
	9. Keep track of the sum of values entered (as well as the smallest and the
	largest) and the number of values entered. When you see the final 'I'
	print the smallest, the largest, the number of values, and the sum of values.
	Note that to keep the sum, you have to decide on a unit to use for
	that sum; use meters.
	
	10. Keep all the values entered (converted into meters) in a vector. At the
	end, write out those values.

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
	cout << "Program start. \n" 
		 << "Enter two integers. \n"
		 << "End input with '|' \n";

	double input1=0, input2=0; 
	while(cin>>input1>){
		cout << "input1==" << input1 << " \n"
			 << "input2==" << input2 << endl;

		cout << abs(input1 - input2) << endl << endl;

	//compare the inputs
	if(input1 < input2){
		cout << "\nthe smaller value is: " << input1 
				<< ". the larger value is: " << input2 << endl;
		if(fabs(input1 - input2) < (1/10000000) 
			|| fabs(input1 - input2) < (1/10000000) ){
			cout << "the numbers are almost equal\n";
		}  
	}
	else if(input1 > input2) {
		cout << "\nthe smaller value is: " << input2 
				<< ". the larger value is: " << input1 << endl;
		if(fabs(input1 - input2) < (1/10000000) 
			|| fabs(input1 - input2) < (1/10000000) ) {
			cout << "the numbers are almost equal\n";
	
		}
	}
	else
		cout << "\nThe numbers are equal." << endl;
	}//end while
		
	// keep_window_open(); // window must be closed manually
	return 0;
}