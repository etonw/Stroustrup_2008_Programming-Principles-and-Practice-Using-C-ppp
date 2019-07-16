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

7. Add a unit to each double entered; that is, enter values such as 10cm, 2.5in, 5ft, or 3.33m. Accept the four units: cm, m, in, ft. Assume conversion factors 1m == 100cm, 1in == 2.54cm, 1ft == 12in. Read the unit indicator into a string. You may consider 12 m (with a space between the number and the unit) equivalent to 12m (without a space).

8. Reject values without units or with “illegal” representations of units, such as y, yard, meter, km, and gallons.

9. Keep track of the sum of values entered (as well as the smallest and the largest) and the number of values entered. When the loop ends, print the smallest, the largest, the number of values, and the sum of values. Note that to keep the sum, you have to decide on a unit to use for that sum; use meters.

10. Keep all the values entered (converted into meters) in a vector. At the end, write out those values.

11. Before writing out the values from the vector, sort them (that’ll make them come out in increasing order).

*/

void print_largest(vector<double> v1){
	double largest=v1[v1.size()-1];
	cout << "\nLargest value: " << largest << "m.";
}

void print_smallest(vector<double> v1){
	double smallest=v1[0];
	cout << "\nSmallest value" << smallest << "m.";
}

void print_vector_sum(vector<double> v1){
	double sum =0;
		for (double x: v1) {
			sum+=x;   // add all elements in the vector
		}//end for 		
	cout << "\nSum of lengths recorded: " << sum << "m.";
}

void print_vector_values(vector<double> v1){
	cout << "\nRecorded lengths: ";		
	for (double x: v1) cout << x << " \t" ; 
	cout << "\nEnd of Program.";
}

int main(){
    vector<double>values;    // empty vector that can hold doubles (DRILL # 10)
	double val=0;
	double converted_value=0;
	string unit = " ";

	// prompt
	cout << "\n";
	cout << "Enter a length and its unit,  (|) to end program: " ;	
	
    while (cin >> val >> unit){
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
	
	sort (values.begin(), values.end() );  //sort vector  ( Drill # 11)
	print_largest(values);			//determine largest or smallest values and print those
	print_smallest(values);
	cout << "\nNumber of values: " << values.size();	//print number of values
	print_vector_sum(values);	//print sum of values
	print_vector_values(values);	//print all values of the vector

}//end main

/*
Enter a length and its unit,  (|) to end program: 23in                                           
                                                                                                 
You entered 23 in = 0.5842m.                                                                     
345ft                                                                                            
                                                                                                 
You entered 345 ft = 105.156m.                                                                   
2345cm                                                                                           
                                                                                                 
You entered 2345 cm = 23.45m.                                                                    
2m                                                                                               
                                                                                                 
You entered 2 m.                                                                                 
3454feet                                                                                         
                                                                                                 
ERROR: illegal unit entered.                                                                     
|                                                                                                
                                                                                                 
Largest value: 105.156m.                                                                         
Smallest value0.5842m.                                                                           
Number of values: 4                                                                              
Sum of lengths recorded: 131.19m.                                                                
Recorded lengths: 0.5842        2       23.45   105.156                                          
End of Program.                                                                                  
                                                                                                 
...Program finished with exit code 0                                                             
Press ENTER to exit console.
*/
