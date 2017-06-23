/*
	etonw
	22.6.2017
	PPP chapter04 - computation
	chapter04_drill_part_two.cpp
	
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

/*

Failed to get the result. Wonder if this number strains the limits of double 
	
	
3.0000000000000000000000001
input1==3
input2==3
0


The numbers are equal.
3
3.0000001
input1==3
input2==3
1e-007


the smaller value is: 3. the larger value is: 3
3
3.0000001
input1==3
input2==3
1e-007


the smaller value is: 3. the larger value is: 3
3
3.0000001
input1==3
input2==3
1e-007


the smaller value is: 3. the larger value is: 3
3
3.00001
input1==3
input2==3.00001
1e-005


the smaller value is: 3. the larger value is: 3.00001
3
3.00000005
input1==3
input2==3
5e-008


the smaller value is: 3. the larger value is: 3
3
3
input1==3
input2==3
0


The numbers are equal.

*/