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

Rewrite the character value example from the previous Try this to use a for-statement. 
Then modify your program to also write out a table of the integer values for 
uppercase letters 
and digits.

*/

int main()
{
		for(int i =0; i<26; ++i){
			cout <<  char('a'+i) << "\t" << 96+i  << "\n"; 
		}
		
		cout << "\n\n";
		
		for(int i =48; i<58; ++i){
			cout <<  char(i) << "\t" << i << "\n"; 
		}
		
		
		cout << "\n\n";		

		for(int i =65; i<91; ++i){
			cout <<  char(i) << "\t" << i << "\n"; 
		}
		
		

	return 0; // successful program
} // end main	


