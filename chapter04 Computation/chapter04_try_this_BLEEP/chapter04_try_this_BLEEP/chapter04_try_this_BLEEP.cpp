/*
	etonw
	22.6.2017
	PPP chapter04 - computation
	chapter04_try_this_BLEEP.cpp
	
	Write a program that "bleeps" out words that you don't like; that is, you
	read in words using cin and print them again on cout. If a word is among a
	few you have defined, you write out BLEEP instead of that word. Start with
	one "disliked word" such as
	string disliked = "Broccoli " ;
	When that works, add a few more.
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
	//create empty vector
	vector<string> words;		  
	string temp;
	string disliked = "Broc";

	//read words into vector
	cout << "Enter words followed by space: \n"
		 << "Control-Z to end entry \n\n";
	while(cin>>temp)			  //user inputs words
		 words.push_back(temp);   //add to end of vector
	
	//print values of vector, checking for disliked word
	cout << "\n";
	for(int i=0; i<words.size(); ++i) {
		if (words[i]==disliked)
			cout << "BLEEP" << endl;
		else cout << words[i] << endl;
	}
	cout << "\n";
	return 0;
}

/*

Enter words followed by space:
Control-Z to end entry

eton B
broc
eton
Broc
a
stacy
andrew
^Z

eton
B
broc
eton
BLEEP
a
stacy
andrew

Press any key to continue . . .

*/