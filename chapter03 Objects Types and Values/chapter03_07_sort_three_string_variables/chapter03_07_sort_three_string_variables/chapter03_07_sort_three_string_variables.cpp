/* chapter03_07_sort_three_string_variables.cpp : Defines the entry point for the console application.
program gives errors for "eton andrew stacy"

6. Write a program that prompts the user to enter three integer values, and
then outputs the values in numerical sequence separated by commas. So,
if the user enters the values 10 4 6, the output should be 4, 6, 1 0. If two
values are the same, they should just be ordered together. So, the input 4
5 4 should give 4, 4, 5.

7. Do exercise 6, but with three string values. So, if the user enters the values
"Steinbeck", "Hemingway", "Fitzgerald", the output should be
"Fitzgerald, Hemingway, Steinbeck".

*/

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std; 

int _tmain(int argc, _TCHAR* argv[])
{
	
	 //declare and initialize variables
	string a = " ";
	string b = " ";
	string c = " ";
	string smallest = " ";
	string middle = " ";
	string largest = " ";

	cout << "Arrange entered strings in numerical sequence. \n\n";  //prompt
	cout << "Enter three strings: \n";
	cin >> a >> b >> c; //user enters 3 integers
	
	if ( a>=b)
	{          
		if(a>=c)
		{      
			largest=a;        
			if(b>=c)
			{  
				middle=b;    
				smallest=c;    
			}           
			else
			{      
				smallest=b;   
				middle=c;   
			}
		}   
		else
		{  
			smallest=a;       
			if(b>=c)
			{
				largest=b;   
				middle=c;   
			} 
			else
			{
				middle=b;   
				largest=c;   
			} 
		}
	} 
	else
	{  
		if(a>=c)
		{ 
			middle=a;        
			if(b>=c)
			{   
				largest=b;    
				smallest=c;    
			}          
			else
			{      
				smallest=b;    
				largest=c;    
			}      
		}   
		else
		{ 
			smallest=a;        
			if(b>=c)
			{
				largest=b;    
				middle=c;    
		    } 
			else
			{
				middle=b;   
				largest=c;   
			} 
		} 
	}
    cout << "Here are the numbers ordered:" << " " << smallest << ", " << middle << ", " << largest  << " \n\n"; // output
	return 0; // successful program
	} // end main