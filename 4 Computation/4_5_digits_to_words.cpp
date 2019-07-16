#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }

/*  
EXERCISE 
6. Make a vector holding the ten string values "zero", "one", . . . "nine". 
Use that in a program that converts a digit to its 
corresponding spelled-out value; e.g., the input 7 gives the output seven. 
Have the same program, using the same input loop, 
convert spelled-out numbers into their digit form;
 e.g., the input seven gives the output 7.

*/

int main(){
    vector<string> words = {"zero","one","two","three","four","five","six","seven","eight","nine"};
	int digit = 0;

	cout << "Convert digit to spelled out value:\n" ;
	cout << "Enter any digit between 0 to 9\n";
	cin >> digit;
	
	if (digit>=0 && digit<=9){
		for (int i=0; i<words.size();++i)
			  if (i==digit)	cout << "You entered: " << words[i] << "\t";
	} else  cout << "Error: you must enter any digit between 0 and 9\n";

	return 0; // successful program
} // end main


/*
OUTPUT

Convert digit to spelled out value:                                                                     
Enter any digit between 0 to 9                                                                          
5                                                                                                       
You entered: five  


Convert digit to spelled out value:                                                                     
Enter any digit between 0 to 9                                                                          
10                                                                                                      
Error: you must enter any digit between 0 and 9                                                      
     
*/