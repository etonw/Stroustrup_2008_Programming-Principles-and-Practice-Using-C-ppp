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


void print_smallest(vector v1){
		double smallest=v1[0];
		cout << "\n" << smallest << " is the smallest value.\n";
}

int main()
{
    vector<double>values;    // empty vector that can hold doubles (DRILL # 10)
	string unit = " ";
	double val=0;
	double converted_value=0;
	double smallest=0;
	double largest=0;
	double sum = 0;
	// prompt
	cout << "\n";
	cout << "Enter a length and its unit,  (|) to end program: " ;	
	

    while (cin >> val >> unit)
    {
        //convert values with correct unit and add to vector
		
		if (unit=="cm"){
			converted_value=val*.01;
			cout << "\nYou entered " << val << " cm = " << converted_value << "m.\n";
			values.push_back(converted_value);
		} else if (unit=="in"){
			converted_value=val*.0254;
			cout << "\nYou entered " << val << " in = " << converted_value << "m.\n";
			values.push_back(converted_value);
		} else if (unit=="ft"){
			converted_value=val*.3048;
			cout << "\nYou entered " << val << " ft = " << converted_value << "m.\n";
			values.push_back(converted_value);
		} else if (unit=="m"){
			converted_value=val;
			cout << "\nYou entered " << val << " m.\n";
			values.push_back(converted_value);
		} else 	cout << "\nERROR: illegal unit entered.\n" ;

	}//end while
	
		//sort vector  ( Drill # 11)
		sort (values.begin(), values.end() );
		
		//determine largest or smallest values and print those
		smallest=values[0];
		cout << "\n" << smallest << " is the smallest value.\n";
		largest=values[values.size()-1];
		cout << "\n" << largest << " is the largest value.\n";
		
		
		//print number of values
		cout << "\nNumber of values: " << values.size();
		
		//print sum of values
		for (double x: values) sum +=x;   // add all elements in the vector
		cout << "\nSum of lengths recorded: " << sum << "m.";		
		
		//print all values of the vector
		cout << "\nRecorded lengths: ";		
		for (double x: values) cout << x << " \t" ; 
		cout << "\nEnd of Program.";

}//end main



/*

*/
