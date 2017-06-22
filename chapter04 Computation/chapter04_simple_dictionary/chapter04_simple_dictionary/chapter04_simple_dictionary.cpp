/*
	etonw
	22.6.2017
	PPP chapter04 - computation
	chapter04_simple_dictionary.cpp
	
	read word into a dictionary. 
	check for no duplicates
	print dictionary
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

	//read words into vector
	cout << "Enter words followed by space: \n"
		 << "Control-Z to end entry \n";
	while(cin>>temp)			  //user inputs words
		 words.push_back(temp);   //add to end of vector
	
	//sort vector from beginning to end
	sort(words.begin(),words.end());
	
	/*
	  The test below for repeated words
	  is only possible since the vector has been sorted
	  and repeated words are now positioned beside each other
	
	*/

	cout << "\nAlphabetical ordering of words entered: \n";
	
	for(int i=0; i<words.size(); ++i)
		if(i==0 || words[i-1]!=words[i])
			cout << words[i]<<"\n";		

	cout << "\nVector size is : " << words.size() << endl;

	// keep_window_open(); window must be closed manually
	return 0;
}

/*

Enter words followed by space:
Control-Z to end entry
a
a
a
e
eton
a
f
stacty
lkl
lkl
aa
thn
eton
^Z

Alphabetical ordering of words entered:
a
aa
e
eton
f
lkl
stacty
thn

Vector size is : 13
Press any key to continue . . .

*/