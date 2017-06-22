/*
	etonw
	22.6.2017
	PPP chapter04
	chapter04
	
	chapter04_try_this_for_loop_char.cpp

	The character 'b' is char('a'+1 ), 'c' is char('a'+2), etc. Use a loop to write out
	a table of characters with their corresponding integer values:
			a 97
			b 98
			z 122
	Rewrite the character value example from the previous 'Iry this to use a forloop.
	Then modify your program to also get a table of the integer values for
	uppercase letters and digits
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
	char alpha = 'a';	// declare annd initialize
	int alpha_count(0);

	for (int i = alpha; i < ( 'a' + 25); i++){   // equivalent to the while loop
		cout << alpha << " " << i << '\n';
		alpha = ('a' + (++alpha_count));	// increment value of the character
	}
	
	keep_window_open(); // window must be closed manually
	return 0;
}

/*
a 97
b 98
c 99
d 100
e 101
f 102
g 103
h 104
i 105
j 106
k 107
l 108
m 109
n 110
o 111
p 112
q 113
r 114
s 115
t 116
u 117
v 118
w 119
x 120
y 121


*/