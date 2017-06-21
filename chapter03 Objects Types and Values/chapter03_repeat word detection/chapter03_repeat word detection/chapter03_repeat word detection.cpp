// chapter03_repeat word detection.cpp : Defines the entry point for the console application.
// chapter03_delete repeated words.cpp : Defines the entry point for the console application.
/*
	etonw
	21.6.2017
	PPP chapter03
	chapter03
	
	delete repeated words
	program detects adjacent repeated
	words in a sequence of words

	Loop terminated by entered Ctrl+Z, follwed by enter.


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
	cout << "Program detects adjacent repeated\n";
	cout << "words in a sequence of words.\n\n";
	cout << "Loop terminated by entered Ctrl+Z, follwed by Enter.\n\n";

	string previous = " ";	//previous word, initialized to not a word
	string current;			//current word

	while(cin>>current){    	//for string >> will read whitespace-seperated words
		if(previous==current)	//check if the word is the same as last
			cout << "repeated word: " << current << '\n';
			previous = current;
	}
	
	// keep_window_open(); // window must be closed manually
	return 0;
}
