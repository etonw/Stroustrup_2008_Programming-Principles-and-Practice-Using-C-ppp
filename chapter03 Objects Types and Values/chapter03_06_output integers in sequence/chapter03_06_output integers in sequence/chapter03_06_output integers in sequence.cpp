/* chapter03_06_ooutput integers in sequence.cpp : Defines the entry point for the console application.

Write a program that prompts the user to enter three integer values, and
then outputs the values in numerical sequence separated by commas. So,
if the user enters the values 10 4 6, the output should be 4, 6, 1 0. If two
values are the same, they should just be ordered together. So, the input 4
5 4 should give 4, 4, 5.

*/

#include "stdafx.h"
#include <iostream>   
using namespace std; 

int _tmain(int argc, _TCHAR* argv[])
{
	int a(0), b(0), c(0), smallest(0), middle(0), largest(0); //declare and initialize variables

	cout << "Arrange entered integers in numerical sequence. \n\n";  //prompt
	cout << "Enter three integers: \n";
	cin >> a >> b >> c; //user enters 3 integers
	
	if (a>=b){          // outer if
		if(a>=c){      
			largest=a;        // a is largest value
			if(b>=c){  
				middle=b;    // b is middle value
				smallest=c;    // c is smallest value
			}           
			else{      
				smallest=b;   //  b is smallest value
				middle=c;   //  c is middle value
				}
		}   
		else{  
			smallest=a;       // a is smallest value
			if(b>=c){
				largest=b;   // b is largest value
				middle=c;   // c is middle value
			} 
			else{
				middle=b;   // b is middle value
				largest=c;   // c is largest value
			} 
		} 
	} 
	else{  
		if(a>=c){ 
			middle=a;        //  a is middle value
			if(b>=c){   
				largest=b;    //  b is largest value
				smallest=c;    //  c is smallest value
			}          
			else{      
				smallest=b;    //  b is smallest value
				largest=c;    //  c is largest value
				}      
			}   
		else{ 
			smallest=a;        // a is smallest value
			if(b>=c){
				largest=b;    // b is largest value
				middle=c;    // c is middle value
			} 
			else{
				middle=b;   // b is middle value
				largest=c;   // c is largest value
			} 
		} 
	}
cout << "Here are the numbers ordered:" << " " << smallest << ", " << middle << ", " << largest << " \n\n"; // output
		return 0; // successful program
	} // end main