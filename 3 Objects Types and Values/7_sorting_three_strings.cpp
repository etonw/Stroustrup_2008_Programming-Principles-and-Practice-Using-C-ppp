#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }

/*  
EXERCISE 7. SORTING THREE STRINGS

6 Write a program that prompts the user to enter three integer values, and then outputs the values in numerical sequence separated by commas. So, if the user enters the values 10 4 6, the output should be 4, 6, 10. If two values are the same, they should just be ordered together. So, the input 4 5 4 should give 4, 4, 5.

7 Do exercise 6, but with three string values. So, if the user enters the values Steinbeck, Hemingway, Fitzgerald, the output should be Fitzgerald, Hemingway, Steinbeck.

*/

int main()
{
	string a = " ";
	string b = " ";
	string c = " ";
	string largest = " ";
	string middle = " ";
	string smallest = " ";	
	cout << "Enter the value of the first string values to be sorted, a: " ;
	cin >> a;
	cout << "Enter the value of the second string values to be sorted, b: ";
	cin >> b;
	cout << "Enter the value of the third string values to be sorted, c: " ;
	cin >> c;
		
if (a>=b){          
		if(a>=c){      
			largest=a;   // a is largest 
			if(b>=c){  
				middle=b;    
				smallest=c;    
			}           
			else{      
				middle=c;
				smallest=b;   
			}
		}  //end if(a>=c) 
		else{  
			smallest=a;  // a is smallest     
			if(b>=c){
				largest=b;   
				middle=c;  
			} 
			else{
				largest=c;
				middle=b;   
			} 
		} 
} //end if (a>=b)
	else{  
		if(a>=c){ 
			middle=a;        //  a IS MIDDLE 
			if(b>=c){   
				largest=b;    
				smallest=c;    
			}          
			else{      
				largest=c;
				smallest=b;    
				}      
		}  // end if(a>=c){  
		else{ 
			smallest=a;        // a IS SMALLEST 
			if(b>=c){
				largest=b;    
				middle=c;   
			} 
			else{
				largest=c;  
				middle=b;   
				} 
		} 
	} // end else
		
cout << "Here are the string values ordered:" << " " << smallest << ", " << middle << ", " << largest << " \n\n"; // output
		return 0; // successful program
} // end main	



/*
Enter the value of the first string values to be sorted, a: e
Enter the value of the second string values to be sorted, b: a
Enter the value of the third string values to be sorted, c: w
Here are the string values ordered: e, a, w 

/*