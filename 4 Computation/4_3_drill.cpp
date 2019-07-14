#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }

/*  
DRILL
1 Write a program that consists of a while-loop that (each time around the loop) reads in two ints and then prints them. Exit the program when a terminating '|' is entered.

2. Change the program to write out the smaller value is: followed by the smaller of the numbers and the larger value is: followed by the larger value.

3. Augment the program so that it writes the line the numbers are equal (only) if they are equal.

*/

int main()
{
	int a = 0;
	int b = 0;
	
	while (cin>> a >> b){
		if (a<b) cout << "The smaller value is: "<< a << "\nThe larger value is : " << b ;
		else cout << "The smaller value is: "<< b << "\nThe larger value is : " << a ;
		cout << "\n";
	}

	return 0; // successful program
} // end main	


