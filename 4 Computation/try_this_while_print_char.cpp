#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }

/*  
TRY THIS
The character 'b' is char('a'+1), 'c' is char('a'+2), etc. Use a loop to write out a table of characters with their corresponding integer values:

a     97
b     98
. . .
z     122
*/

int main()
{
	int i = 0;
		while (i<26){
		cout <<  char('a'+i) << "\t" <<96+i  << "\n"; 
		++i;
		} //end while
	return 0; // successful program
} // end main