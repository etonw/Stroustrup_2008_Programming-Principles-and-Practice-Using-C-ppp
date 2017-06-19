// chapter03_07_sort_three_string_variables.cpp : Defines the entry point for the console application.
// program gives errors for "eton andrew stacy"
//

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