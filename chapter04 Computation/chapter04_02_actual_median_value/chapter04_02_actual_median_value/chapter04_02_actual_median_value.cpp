/*
	etonw
	23.6.2017
	PPP chapter04 - computation
	chapter04_02_actual_median_value.cpp 

	2. If we define the median of a sequence as "the number for which exactly
	half of the elements of the sequence come before it and exactly half come
	after it," fix the program in §4.6.2 so that it always prints out a median.
	Hint: A median need not be an element of the sequence.
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
	//declaration
	vector<double>temps;	     
	double temp(0), sum(0), median(0);
	
	//prompt
	cout<<"Type in double values of temperature\n"
		<<"Type in something other than a double to stop\n\n";
	
	//user enters value
	while(cin>>temp)		     
		temps.push_back(temp);   //put value into end of vector

	//Calculate mean value
	for (int i=0; i<temps.size(); ++i) sum+=temps[i];
	cout << "Average temperature is: " << sum/temps.size() << endl;

	//find median actual median value
	if (temps.size()%2 == 0){   // test if even number of elements
	// i.e. ( (8/2 = 4th element ) + (( 8/2 = 4) - 1) = 3rd element ) / 2
	median = (temps[temps.size()/2] + (temps[(temps.size()/2)-1])/2);
	}

	/*
	
	
	NOT GETTING THE ANSWER FOR ODD NUMBER OF ELEMENTS
	Type in double values of temperature
Type in something other than a double to stop

1 2 3 4 5 6 7 32 0 52 1
K
Average temperature is: 10.2727
Median temperature: 6


This is the sorted vector:
v[0]==0
v[1]==1
v[2]==1
v[3]==2
v[4]==3
v[5]==4
v[6]==5
v[7]==6
v[8]==7
v[9]==32
v[10]==52

Press any key to continue . . .

	
	*/




	else{     // odd number of elements
   	// i.e. 7/2=3, remainder is not kept. 3 refer to 4th element 
	median = temps[(temps.size()-1)/2];
	}

	cout << "Median temperature: " << median << "\n" << endl;  

	//Sort the vector 
	sort(temps.begin(),temps.end());  
	cout << "\nThis is the sorted vector:\n";
	for (int i=0; i<temps.size(); ++i)	//loop through vector
			cout << "v[" << i << "]==" << temps[i] << '\n';   
	cout << "\n";
	return 0;
}

/*
With een numbers

Type in double values of temperature
Type in something other than a double to stop

23 56 1 4 5 0.23
l
Average temperature is: 14.8717
Median temperature: 4.5


This is the sorted vector:
v[0]==0.23
v[1]==1
v[2]==4
v[3]==5
v[4]==23
v[5]==56

Press any key to continue . . .



*/