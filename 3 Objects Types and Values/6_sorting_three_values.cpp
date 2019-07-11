#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }

/*  
EXERCISE 6. SORTING THREE VALUES

6 Write a program that prompts the user to enter three integer values, and then outputs the values in numerical sequence separated by commas. So, if the user enters the values 10 4 6, the output should be 4, 6, 10. If two values are the same, they should just be ordered together. So, the input 4 5 4 should give 4, 4, 5.
*/

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int largest = 0;
	int middle = 0;
	int smallest = 0;	
	cout << "Enter the value of the first integer variable to be sorted, a: " ;
	cin >> a;
	cout << "Enter the value of the second integer variable to be sorted, b: ";
	cin >> b;
	cout << "Enter the value of the third integer variable to be sorted, c: " ;
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
		
cout << "Here are the numbers ordered:" << " " << smallest << ", " << middle << ", " << largest << " \n\n"; // output
		return 0; // successful program
} // end main	