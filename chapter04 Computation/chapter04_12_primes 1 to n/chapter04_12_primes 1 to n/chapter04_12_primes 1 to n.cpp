/*
	etonw
	25.6.2017
	PPP chapter04 - computation
	chapter04_12_primes 1 to n.cpp  
	
	11. Create a program to find all the prime numbers between 1 and 100. One
	way to do this is to write a function that will check if a number is prime
	(i.e., see if the number can be divided by a prime number smaller than itself)
	using a vector of primes in order (so that if the vector is called
	primes, primes[0]==2, primes[1]==3, primes[2]==5, etc.). 
	
	Then write a loop that goes from 1 to 100, checks each number to see if it is a prime,
	and stores each prime found in a vector. Write another loop that lists the
	primes you found. You might check your result by comparing your
	vector of prime numbers with primes. Consider 2 the first prime.

	12 . Modify the program described i n the previous exercise t o take a n input
	value max and then fmd all prime numbers from 1 to max.

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

vector<int> primes;	//store known prime numbers

bool is_prime(int n)	// calculate if prime
{
	for(int k=0; k<primes.size(); ++k)  // check all primes in vector
		if(n%primes[k]==0) return false;
	return true;
}
int main()
{
	//Introduction
	cout <<"Program finds primes \n"
		<< "from 1 to n. Enter max:";

	int max(0), counter(1);
	cin>>max;	//prompt
	
	primes.push_back(1);	// set first prime


	while(counter<=max){	 
		if(is_prime(counter))	primes.push_back(counter);	
	counter++;
	}

	cout<<endl;
	// print final list of primes
	for(int i=0; i<primes.size(); ++i)
		cout << primes[i] << endl;
	
	return 0;
}// end main
