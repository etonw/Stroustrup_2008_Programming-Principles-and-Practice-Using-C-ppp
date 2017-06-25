// : Defines the entry point for the console application.
/*
	etonw
	25.6.2017
	PPP chapter04 - computation
	chapter04

	chapter04_06_words_and_digits.cpp 

	Make a vector holding the ten string values "zero", "one", . . . " nine".
	Use that in a program that converts a digit to its corresponding spelledout
	value; e.g., the input 7 gives the output seven. Have the same program, 
	using the same input loop, convert spelled-out numbers into their
	digit form; e.g., the input seven gives the output 7.
	
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
	vector <string> w(10);
	vector <string> d(10);
	string input =" ";

	//initialize
	w[0]="zero";
	w[1]="one";
	w[2]="two";
	w[3]="three";
	w[4]="four";
	w[5]="five";
	w[6]="six";
	w[7]="seven";
	w[8]="eight";
	w[9]="nine";

	d[0]="0";
	d[1]="1";
	d[2]="2";
	d[3]="3";
	d[4]="4";
	d[5]="5";
	d[6]="6";
	d[7]="7";
	d[8]="8";
	d[9]="9";


	cout << "Program start.\n"
		<<"Enter a number 1-9 as either a word ('one') or a digit('1')\n";

	while(cin>>input){

		bool number_found=false;
		//word -> digit
		for(int i=0; i<w.size(); ++i){
			if(input==w[i]){
				number_found=true;
				cout << "is digit " << d[i] << endl;
			} // end if
		} // end for

		//digit -> word
		for(int i=0; i<d.size(); ++i){
			if(input==d[i]){
				number_found=true;
				cout << "is word " << w[i] << endl;
			} // end if
		} // end for

		if(!number_found)
			cout << "Bad input \n"
			<< "Enter a number 1-9 as either a word ('one') or a digit('1')\n";
	
	}
	return 0;
}

/*
Program start.
Enter a number 1-9 as either a word ('one') or a digit('1')
one
is digit 1
4
is word four
6
is word six
found
Bad input
Enter a number 1-9 as either a word ('one') or a digit('1')
one
is digit 1
45
Bad input
Enter a number 1-9 as either a word ('one') or a digit('1')
5
is word five
6
is word six
7
is word seven
three
is digit 3
six
is digit 6
7
is word seven
9
is word nine
0
is word zero
00
Bad input
Enter


********

More elegant to initialize with:

vector<string> s_digits;
    s_digits.push_back("zero");
    s_digits.push_back("one");
    s_digits.push_back("two");
    s_digits.push_back("three");
    s_digits.push_back("four");
    s_digits.push_back("five");
    s_digits.push_back("six");
    s_digits.push_back("seven");
    s_digits.push_back("eight");
    s_digits.push_back("nine");
    vector<string> i_digits;
    i_digits.push_back("0");
    i_digits.push_back("1");
    i_digits.push_back("2");
    i_digits.push_back("3");
    i_digits.push_back("4");
    i_digits.push_back("5");
    i_digits.push_back("6");
    i_digits.push_back("7");
    i_digits.push_back("8");
    i_digits.push_back("9");

	*/