#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }

/*  
TRY THIS
Implement square() without using the multiplication operator; 
that is, do the x*x by repeated addition 
start a variable result at 0 and add x to it x times). 
Then run some version of “the first program” using that square().

*/
int square (int x){
	
	int sum=0;
    for (int i=0; i<x; ++i){
		sum +=x;    
	}
    return sum;
}
	
int main()
{
	for(int i =65; i<91; ++i){
		cout <<  char(i) << "\t" << square(i) << "\n"; 
	}
	return 0; // successful program
} // end main	


