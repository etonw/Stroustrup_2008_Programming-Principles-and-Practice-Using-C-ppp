/*
	etonw
	22.6.2017
	PPP chapter04 - computation
	chapter04_try_this_BLEEP_improved.cpp 
	
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
	//words to avoid
	string disliked_1 = "race";
	string disliked_2 = "war";
	string disliked_3 = "hate";

	//read words into vector
	cout << "Enter words followed by space: \n"
		 << "Control-Z to end entry \n\n";
	while(cin>>temp)			  //user inputs words
		 words.push_back(temp);   //add to end of vector
	
	/*
	print values of vector, checking for disliked word
	maybe could have done this with a vector holding the
	disliked words
	*/
	
	cout << "\n";
	for(int i=0; i<words.size(); ++i) {
		if (words[i]==disliked_1 || 
			words[i]==disliked_2 || 
			words[i]==disliked_3 )

			cout << "BLEEP" << endl;
		else cout << words[i] << endl;
	}
	cout << "\n";
	return 0;
}

/*

Enter words followed by space:
Control-Z to end entry

race
eton
stact
help
war
slk
jø
hate
Hate^Z

^Z

BLEEP
eton
stact
help
BLEEP
slk
jø
BLEEP
Hate

Press any key to continue . . .

*/