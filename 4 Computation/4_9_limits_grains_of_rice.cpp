#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }

/*  
EXERCISE 
8. There is an old story that the emperor wanted to thank the inventor of the game of chess and asked the inventor to name his reward. The inventor asked for one grain of rice for the first square, 2 for the second, 4 for the third, and so on, doubling for each of the 64 squares. That may sound modest, but there wasn’t that much rice in the empire! 

Write a program to calculate how many squares are required to give the inventor at least 1000 grains of rice, at least 1,000,000 grains, and at least 1,000,000,000 grains. 

You’ll need a loop, of course, and probably an 
int to keep track of which square you are at, an 
int to keep the number of grains on the current square, and an 
int to keep track of the grains on all previous squares. 

We suggest that you write out the value of all your variables for each iteration of the loop so that you can see what’s going on.

9. Try to calculate the number of rice grains that the inventor asked for in exercise 8 above. You’ll find that the number is so large that it won’t fit in an int or a double. Observe what happens when the number gets too large to represent exactly as an int and as a double. What is the largest number of squares for which you can calculate the exact number of grains (using an int)? What is the largest number of squares for which you can calculate the approximate number of grains (using a double)?

GOOGLE: 
The biggest/largest integer that can be stored in a double without losing precision is the same as the largest possible value of a double. That is, DBL_MAX or approximately 1.8 × 10308 (if your double is an IEEE 754 64-bit double).

for INT: 2,147,483,647   ( NOTE: this is +1 of double amount for square 32)

*/

int main(){
	bool thousand=true;
    bool million=true;
    bool trillion=true;
	double grains_on_current_square=1;
	    
	cout << "Doubling Grains of Rice.\n" ;
	cout << "Determining how many squares needed to reach\n" ;
	cout << "1000, 1,000,000 or  1,000,000,000 grains of rice.\n\n" ;
	cout << "Square   Grains on Current Square\n";	
	
	for (int square=1; square<=64; ++square ){
		cout << " [" << square << "]       [" << grains_on_current_square << "]\n";

	if (grains_on_current_square>1000 && thousand){
		cout << "thousand now reached\n";
		thousand=false;
	}
	if (grains_on_current_square>1000000 && million){
		cout << "million now reached\n";
		million=false;
	}
	if (grains_on_current_square>1000000000 && trillion){
		cout << "trillion now reached\n";
		trillion=false;
	}		    

	grains_on_current_square+=grains_on_current_square;			

	//	if (grains_on_current_square>1000000000) break;	
	}// end for

	return 0; // successful program
} // end main	


/*
OUTPUT

Doubling Grains of Rice.
Determining how many squares needed to reach
1000, 1,000,000 or  1,000,000,000 grains of rice.

Square   Grains on Current Square
 [1]       [1]
 [2]       [2]
 [3]       [4]
 [4]       [8]
 [5]       [16]
 [6]       [32]
 [7]       [64]
 [8]       [128]
 [9]       [256]
 [10]       [512]
 [11]       [1024]
thousand now reached
 [12]       [2048]
 [13]       [4096]
 [14]       [8192]
 [15]       [16384]
 [16]       [32768]
 [17]       [65536]
 [18]       [131072]
 [19]       [262144]
 [20]       [524288]
 [21]       [1.04858e+06]
million now reached
 [22]       [2.09715e+06]
 [23]       [4.1943e+06]
 [24]       [8.38861e+06]
 [25]       [1.67772e+07]
 [26]       [3.35544e+07]
 [27]       [6.71089e+07]
 [28]       [1.34218e+08]
 [29]       [2.68435e+08]
 [30]       [5.36871e+08]
 [31]       [1.07374e+09]
trillion now reached
 [32]       [2.14748e+09]
 [33]       [4.29497e+09]
 [34]       [8.58993e+09]
 [35]       [1.71799e+10]
 [36]       [3.43597e+10]
 [37]       [6.87195e+10]
 [38]       [1.37439e+11]
 [39]       [2.74878e+11]
 [40]       [5.49756e+11]
 [41]       [1.09951e+12]
 [42]       [2.19902e+12]
 [43]       [4.39805e+12]
 [44]       [8.79609e+12]
 [45]       [1.75922e+13]
 [46]       [3.51844e+13]
 [47]       [7.03687e+13]
 [48]       [1.40737e+14]
 [49]       [2.81475e+14]
 [50]       [5.6295e+14]
 [51]       [1.1259e+15]
 [52]       [2.2518e+15]
 [53]       [4.5036e+15]
 [54]       [9.0072e+15]
 [55]       [1.80144e+16]
 [56]       [3.60288e+16]
 [57]       [7.20576e+16]
 [58]       [1.44115e+17]
 [59]       [2.8823e+17]
 [60]       [5.76461e+17]
 [61]       [1.15292e+18]
 [62]       [2.30584e+18]
 [63]       [4.61169e+18]
 [64]       [9.22337e+18                                          
     
*/