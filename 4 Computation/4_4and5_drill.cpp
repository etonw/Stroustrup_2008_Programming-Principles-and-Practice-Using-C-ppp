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

4. Change the program so that it uses doubles instead of ints.

5. Change the program so that it writes out the numbers are almost equal after writing out which is the larger and the smaller if the two numbers differ by less than 1.0/100.

*/

int main()
{
	int a = 0;
	int b = 0;
	
	while (cin>> a >> b){
		if (a<b) cout << "The smaller value is: "<< a << "\nThe larger value is : " << b ;
		else if(a>b)cout << "The smaller value is: "<< b << "\nThe larger value is : " << a ;
		else if (a==b)cout << "The numbers are equal. ";
		cout << "\n";
	}

	return 0; // successful program
} // end main	




/*
23
23
The numbers are equal. 
2
23
The smaller value is: 2
The larger value is : 23
32
2
The smaller value is: 2
The larger value is : 32
*/