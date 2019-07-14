#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }

/*  
EXERCISE 
2. If we define the median of a sequence as “a number so that exactly as many elements come before it in the sequence as come after it,” fix the program in §4.6.3 so that it always prints out a median. Hint: A median need not be an element of the sequence.

*/

void print_median(vector<double> v){
	if ( v.size() % 2 == 0) { cout << "\nMedian : " << (v[v.size()/2-1] + v[v.size()/2]) / 2;}
	else                    { cout << "\nMedian : " <<  v[v.size()/2];}
} //end print_median

int main(){
	vector<double>v;
	cout << "Median calculator. Enter values.\n" ;   //prompt
	for (double temp; cin>>temp;) { 			//loop to enter values
		v.push_back(temp);
	}
	sort(v.begin(), v.end() );
	print_median(v);
	return 0; // successful program
} // end main	


/*
OUTPUT
Median calculator. Enter values.10                                                     
20                                                                                     
30                                                                                     
|                                                                                      
                                                                                       
Median : 20 
*/