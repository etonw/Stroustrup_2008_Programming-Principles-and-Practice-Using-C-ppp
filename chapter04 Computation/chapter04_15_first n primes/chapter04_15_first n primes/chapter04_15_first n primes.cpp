/*
	etonw
	25.6.2017
	PPP chapter04 - computation
	chapter04_15_first n primes.cpp 

	1 5 . Write a program that takes an input value n and then finds the first n
	primes.
	
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
	return 0;
}