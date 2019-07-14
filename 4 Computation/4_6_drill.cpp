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

6. Now change the body of the loop so that it reads just one double each time around. Define two variables to keep track of which is the smallest and which is the largest value you have seen so far. Each time through the loop write out the value entered. If it’s the smallest so far, write the smallest so far after the number. If it is the largest so far, write the largest so far after the number.

*/

int main()
{
    vector<double>values;    // empty vector that can hold doubles
	double val =0;
	double smallest=0;
	double largest=0;
	
	// prompt
	cout << "\n";
	cout << "Enter a value to be sorted,  (|) to end program: " ;	
	

    while (cin >> val )
    {
        cout << "\n";
		cout << "Value entered: " << val;
        cout << "\n";
		values.push_back(val); // add to vector 
		
		//sort vector
		sort (values.begin(), values.end() );
		
			//determine if entered value is largest or smallest and print that
			if (val==values[0]) {
				smallest=val;
				cout << "\n" << val << " is the smallest value so far\n";
			}else if  (val==values[values.size()-1]){
				largest=val;
				cout << "\n" << val << " is the largest value so far\n";
			} // end else if
		
	}//end while
}//end main



/*
Enter a value to be sorted,  (|) to end program: 23

Value entered: 23

23 is the smallest value so far
2

Value entered: 2

2 is the smallest value so far
20

Value entered: 20
12

Value entered: 12
1

Value entered: 1

1 is the smallest value so far
1000

Value entered: 1000

1000 is the largest value so far
999

Value entered: 999
1001

Value entered: 1001

1001 is the largest value so far
*/
