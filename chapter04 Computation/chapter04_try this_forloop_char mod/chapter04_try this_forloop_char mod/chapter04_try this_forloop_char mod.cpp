/*
	etonw
	22.6.2017
	PPP chapter04
	chapter04
	
	chapter04_try this_forloop_char mod.cpp

	The character 'b' is char('a'+1 ), 'c' is char('a'+2), etc. Use a loop to write out
	a table of characters with their corresponding integer values:
			a 97
			b 98
			z 122
	Rewrite the character value example from the previous 'Iry this to use a forloop.
	Then modify your program to also get a table of the integer values for
	uppercase letters and digits

	Then modify your program to also get a table of the integer values for
	uppercase letters and digits.
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
	
	cout << "Table of integer values for lower case alphabet \n\n";
	
	char alpha = 'a';	// declare annd initialize. set to char = 'a'
	int alpha_count(0);

	for (int i = alpha; i < ( 'a' + 26); i++){   // equivalent to the while loop
		cout << alpha << " " << i << '\n';
		alpha = ('a' + (++alpha_count));	// increment value of the character
	}
	
	cout << "\n\nTable of integer values for upper case alphabet and digits \n\n";

	alpha = 'A';	// declare annd initialize. set to char = 'A'
	alpha_count=0;

	for (int i = alpha; i < ( 'A' + 26); i++){   // equivalent to the while loop
		cout << alpha << " " << i << '\n';
		alpha = ('A' + (++alpha_count));	// increment value of the character
	}
	
	cout << "\n";

	alpha = '0';	// set to char = '0'
	alpha_count=0;

	for (int i = alpha; i < ( '0' + 10); i++){   // equivalent to the while loop
		cout << alpha << " " << i << '\n';
		alpha = ('0' + (++alpha_count));	// increment value of the character
	}


	keep_window_open(); // window must be closed manually
	return 0;
}

/*
Table of integer values for lower case alphabet
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
z 122


Table of integer values for upper case alphabet and digits

A 65
B 66
C 67
D 68
E 69
F 70
G 71
H 72
I 73
J 74
K 75
L 76
M 77
N 78
O 79
P 80
Q 81
R 82
S 83
T 84
U 85
V 86
W 87
X 88
Y 89
Z 90

0 48
1 49
2 50
3 51
4 52
5 53
6 54
7 55
8 56
9 57


*/