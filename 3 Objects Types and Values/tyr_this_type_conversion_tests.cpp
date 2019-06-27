#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }

/* TRY THIS TYPE CONVERSION TESTS

In addition to showing how 
	conversions from double to int 
	and conversions from int to char are done on the machine
the program shows 
	what character (if any) the machine gives for any integer value

list of ACSII characters
https://www.sciencebuddies.org/science-fair-projects/references/ascii-table

"while(cin>>current)" will be true as long as there are characters to read on the standard input
*/

int main()
{
	double d = 0;
	while (cin>>d){
		int  i = d;    //squeeze double into int
		char c = i;    //squeeze int into char
		int i2 = c;    // get integer value of char
		cout<<"\n original double, d=="<<d	  //original double
			<<"\n converted to int, i==" <<i   // converted to int
			<<"\n int value of char, i2=="<<i2  // int value of char
			<<"\n char(" << c << ")\n";   // char
			
	}//end while
}//end main



int uses 4 bytes