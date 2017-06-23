/*
	etonw
	23.6.2017
	PPP chapter04 - Computation
	chapter04_drill_part three.cpp
	
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
	//declare and initialize
	double input=0, converted_input=0, sum=0, smallest=0, largest=0; 
	string unit = " ";
	vector <double> meas;    // empty vector
	bool is_valid=true,	     // valid unit of measurement used
		 is_first=true;      // is this the first input

	//Introduction and Prompt
	cout << "Program start. \n"
		 << "Enter [Distance] [space] [Unit of Measurement] \n"
		 << "( 'cm'=centimeter, 'in'=inch, 'ft'=feet, 'm'=meter ) \n" 
		 << "End input with '|' \n\n";
		 
	//user input values	
	while(cin >> input >> unit){

		//converting to meters
		if (unit=="cm") converted_input = input/100;
		else if (unit=="in") converted_input = input*0.0254;
		else if (unit=="ft") converted_input = input*12*0.0254;
		else if (unit=="m") converted_input = input;
		else  {
			cout << "Dont recognize that unit" << endl;
			is_valid=false;
		}

		if (is_valid)
		{					  //if the unit is one of the approved
		meas.push_back(converted_input);  //add to vector element
		
			if(is_first){		          //is this the first input?
			cout << "First input, nothing to compare\n";
			} else{

				//find largest and smallest values
				largest = meas[0];					 // set first element as largest
				for (int i=0; i<meas.size(); ++i){   // run through vector
					if (largest < meas[i]){			 // test if vector element is larger
							largest= meas[i];		 // if so, set new largest
  					}
				}
				if (converted_input==largest){
				cout << "      largest value so far \n";
				}
				smallest = meas[0];					 // set first element as smallest
				for (int i=0; i<meas.size(); ++i){   // run through vector
					if (smallest > meas[i]){		 // test if vector element is smaller
							smallest= meas[i];       // if so, set new smallest
  					}
				}	
				if (converted_input==smallest){
				cout << "      smallest value so far  \n";
				}
			}
			is_first=false;  // after one loop in while, no longer first value	
			cout << "... \n";
		}  // end if input is valid
	is_valid=true;
	} // end while
	
	// Exiting program.
	//smallest value
	smallest = meas[0];					 // assume first element is smallest
	for (int i=0; i<meas.size(); ++i){   // run through vector
		if (smallest > meas[i]){		 // test if assumption is wrong
				smallest= meas[i];       // set new smallest
  		}
    }	
	//largest value
	largest = meas[0];					 // assume first element is largest
	for (int i=0; i<meas.size(); ++i){   // run through vector
		if (largest < meas[i]){			 // test if assumption is wrong
				largest= meas[i];		 // set new largest
  		}
    }
	//sum of values in vector
	for (int i=0; i<meas.size(); ++i){
			sum+=meas[i];
	}

	cout << "\nSummary :  \n";
	cout << "Smallest value is: "<< smallest << " m.\n";
	cout << "Largest value is: "<< largest << " m.\n";
	cout << "Number of measurements is: "<< meas.size() << ". \n";
	cout << "Total length measured is : "<< sum << " m.\n\n";

	//Sort and Print vectors
	cout << "Table of measurements \n";
	sort(meas.begin(), meas.end());
	for (int i=0; i<meas.size(); ++i)
	cout << "meas[" << i << "] " << meas[i] << " m\n";

}// end 


/*
Program start.
Enter [Distance] [space] [Unit of Measurement]
( 'cm'=centimeter, 'in'=inch, 'ft'=feet, 'm'=meter )
End input with '|'

23 cm
First input, nothing to compare
...
0.2 cm
      smallest value so far
...
56 ft
      largest value so far
...
20 ft
...
65 in
...
65 m
      largest value so far
...
32 cm
...
0.1 cm
      smallest value so far
...
20 ft
...
|

Summary :
Smallest value is: 0.001 m.
Largest value is: 65 m.
Number of measurements is: 9.
Total length measured is : 96.4648 m.

Table of measurements
meas[0] 0.001 m
meas[1] 0.002 m
meas[2] 0.23 m
meas[3] 0.32 m
meas[4] 1.651 m
meas[5] 6.096 m
meas[6] 6.096 m
meas[7] 17.0688 m
meas[8] 65 m
Press any key to continue . . .
*/