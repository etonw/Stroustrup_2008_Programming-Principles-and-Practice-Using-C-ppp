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
*/

int main(){
	bool thousand=true;
    bool million=true;
    bool trillion=true;
	int grains_on_current_square=1;
	    
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
 [21]       [1048576]
million now reached
 [22]       [2097152]
 [23]       [4194304]
 [24]       [8388608]
 [25]       [16777216]
 [26]       [33554432]
 [27]       [67108864]
 [28]       [134217728]
 [29]       [268435456]
 [30]       [536870912]
 [31]       [1073741824]
trillion now reached
 [32]       [-2147483648]
 [33]       [0]
 [34]       [0]
 [35]       [0]
 [36]       [0]
 [37]       [0]
 [38]       [0]
 [39]       [0]
 [40]       [0]
 [41]       [0]
 [42]       [0]
 [43]       [0]
 [44]       [0]
 [45]       [0]
 [46]       [0]
 [47]       [0]
 [48]       [0]
 [49]       [0]
 [50]       [0]
 [51]       [0]
 [52]       [0]
 [53]       [0]
 [54]       [0]
 [55]       [0]
 [56]       [0]
 [57]       [0]
 [58]       [0]
 [59]       [0]
 [60]       [0]
 [61]       [0]
 [62]       [0]
 [63]       [0]
 [64]       [0]                                                    
     
*/