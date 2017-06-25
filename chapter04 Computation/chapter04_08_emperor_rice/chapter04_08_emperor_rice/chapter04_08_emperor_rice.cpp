/*
	etonw
	25.6.2017
	PPP chapter04 - computation
	chapter04_08_emperor_rice.cpp 

	8. There is an old story that the emperor wanted to thank the inventor of
	the game of chess and asked the inventor to name his reward. The inventor
	asked for one grain of rice for the first square, 2 for the second, 4
	for the third, and so on, doubling for each of the 64 squares. That may
	sound modest, but there wasn't that much rice in the empire !
	
	Write a	program to calculate how many squares are required to give the inventor
	at least 1000 grains of rice, at least 1 ,000,000 grains, and at least
	1 ,000,000,000 grains. You'll need a loop, of course, and probably an int
	to keep track of which square you are at, an int to keep the number of
	grains on the current square, and an int to keep track of the grains on all
	previous squares. We suggest that you write out the value of all your variables
	for each iteration of the loop so that you can see what's going on
	
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

vector<int> records;   // vector to hold the rice records

int doubb (int n)
{
	int result=n*2;
	return result;
}

int main()
{
	int squares_thousand(0),squares_million(0), squares_billion(0);
	bool limit_thousand=false;	
	bool limit_million=false;
	bool limit_billion=false;
	int square_counter=1;	            // current square we are on
	int rice_grain=1;		            // intial rice grain
	records.push_back(rice_grain);	    // first rice grain entered in journal

	while (limit_billion==false){
		rice_grain=doubb(rice_grain);  // function doubles the present count of rice
		records.push_back(rice_grain); // send to vector
		square_counter++;              //increase counter by one
		
		if(limit_thousand==false){
			if(rice_grain>=1000){		// limit thousand has been reached
				squares_thousand=square_counter;//record the squares for this limit
				limit_thousand=true;	 // prevent entering this if statement again         
			}
		}
		if(limit_million==false){		// limit million has been reached
			if(rice_grain>=1000000){
				squares_million=square_counter;
				limit_million=true;           
			}
		}
		if(limit_billion==false){		// limit billion has been reached
			if(rice_grain>=1000000000){
				squares_billion=square_counter;
				limit_billion=true;           
			}
		}
	}//end while

	cout << "Grains of rice for each chess board square\n\n";
	for(int i=0; i<records.size(); ++i)
	cout << " Square " << i+1 << " : " << records[i] << endl;

	//How many squares needed
	string s = "Squares needed for at least a ";
	cout << endl;
	cout << s << "thousand grains of rice is " << squares_thousand << endl;
	cout << s << "million grains of rice is " << squares_million << endl;
	cout << s << "billion grains of rice is " << squares_billion << endl << endl;


	return 0;
}// end main


/*
Grains of rice for each chess board square

 Square 1 : 1
 Square 2 : 2
 Square 3 : 4
 Square 4 : 8
 Square 5 : 16
 Square 6 : 32
 Square 7 : 64
 Square 8 : 128
 Square 9 : 256
 Square 10 : 512
 Square 11 : 1024
 Square 12 : 2048
 Square 13 : 4096
 Square 14 : 8192
 Square 15 : 16384
 Square 16 : 32768
 Square 17 : 65536
 Square 18 : 131072
 Square 19 : 262144
 Square 20 : 524288
 Square 21 : 1048576
 Square 22 : 2097152
 Square 23 : 4194304
 Square 24 : 8388608
 Square 25 : 16777216
 Square 26 : 33554432
 Square 27 : 67108864
 Square 28 : 134217728
 Square 29 : 268435456
 Square 30 : 536870912
 Square 31 : 1073741824

Squares needed for at least a thousand grains of rice is 11
Squares needed for at least a million grains of rice is 21
Squares needed for at least a billion grains of rice is 31

Press any key to continue . . .


*/