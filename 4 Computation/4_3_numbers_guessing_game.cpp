#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }

/*  
EXERCISE 
4. Write a program to play a numbers guessing game. 
The user thinks of a number between 1 and 100 and your program asks questions to figure out what the number is (e.g., “Is the number you are thinking of less than 50?”). 

Your program should be able to identify the number after asking no more than seven questions. 
Hint: Use the < and <= operators and the if-else construct.

*/

int main()
{
	int guess = 50;
	vector<int>differences = {25, 13, 6, 3, 2, 1};
	int counter = 0;
	char answer = '0';
	string s_try = "";	
	
	cout << "Think of a number between 1 and 100.\n";
	cout << "For ever guess given, enter if your number is\n";
	cout << "larger 'l' or smaller 's' than the one shown.\n";
	cout << "Enter 'c' if the number shown is yours.\n";
		
	while( answer != 'c'){
		cout << "my guess: " << guess << "\n";
		++counter;
		cout << "Is it correct, larger or smaller ( 'c', 'l', 's' ) ?\n";
		cout << "Current counter is :" << counter << endl; 

		cin >> answer;
		
		switch (answer){
		case 'c':
			// do nothing. fall out of loop
			if(counter==1){
				s_try = " attempt ";
			}else{
				s_try = " attempts ";
			}
			cout << counter << s_try << " to guess the correct number\n";
			break;
		case 'l':
			// guess is too small. increase by next difference or by one
			if(counter<=differences.size())
				guess+= differences[counter-1];
			else	
				++guess;
			break;	
		case 's':
			// guess is to large. decrease by next difference or by one
			if(counter<=differences.size())
				guess-= differences[counter-1];	
			else
				--guess;
			break;	
		default:
			// invalid answer. 
			cout << "This is not a valid answer.\n";
			cout << "Use correct, larger or smaller ( 'c', 'l', 's' )!";
			--counter;  // reduce counter by 1 since it does not count
			break;	
		} //end switch
	
		if( guess>100 || guess <1){
			cout << "Your answer should be 1 and 100\n";
			return 0;
		}	// end if
		if(counter==7 && answer != 'c'){
			cout << " Check your responses and my guesses\n";
			cout << "I should guessed your number by now\n";
			return 0;
		}	// end if	
	} // end while		

return 0; // successful program
} // end main	


/*
OUTPUT
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }

/*  
EXERCISE 
4. Write a program to play a numbers guessing game. 
The user thinks of a number between 1 and 100 and your program asks questions to figure out what the number is (e.g., “Is the number you are thinking of less than 50?”). 

Your program should be able to identify the number after asking no more than seven questions. 
Hint: Use the < and <= operators and the if-else construct.

*/

int main()
{
	int guess = 50;
	vector<int>differences = {25, 13, 6, 3, 2, 1};
	int counter = 0;
	char answer = '0';
	string s_try = "";	
	
	cout << "Think of a number between 1 and 100.\n";
	cout << "For ever guess given, enter if your number is\n";
	cout << "larger 'l' or smaller 's' than the one shown.\n";
	cout << "Enter 'c' if the number shown is yours.\n";
		
	while( answer != 'c'){
		cout << "my guess: " << guess << "\n";
		++counter;
		cout << "Is it correct, larger or smaller ( 'c', 'l', 's' ) ?\n";
		cout << "Current counter is :" << counter << endl; 

		cin >> answer;
		
		switch (answer){
		case 'c':
			// do nothing. fall out of loop
			if(counter==1){
				s_try = " attempt ";
			}else{
				s_try = " attempts ";
			}
			cout << counter << s_try << " to guess the correct number\n";
			break;
		case 'l':
			// guess is too small. increase by next difference or by one
			if(counter<=differences.size())
				guess+= differences[counter-1];
			else	
				++guess;
			break;	
		case 's':
			// guess is to large. decrease by next difference or by one
			if(counter<=differences.size())
				guess-= differences[counter-1];	
			else
				--guess;
			break;	
		default:
			// invalid answer. 
			cout << "This is not a valid answer.\n";
			cout << "Use correct, larger or smaller ( 'c', 'l', 's' )!";
			--counter;  // reduce counter by 1 since it does not count
			break;	
		} //end switch
	
		if( guess>100 || guess <1){
			cout << "Your answer should be 1 and 100\n";
			return 0;
		}	// end if
		if(counter==7 && answer != 'c'){
			cout << " Check your responses and my guesses\n";
			cout << "I should guessed your number by now\n";
			return 0;
		}	// end if	
	} // end while		

return 0; // successful program
} // end main	


/*
OUTPUT
Think of a number between 1 and 100.                                                                       
For ever guess given, enter if your number is                                                              
larger 'l' or smaller 's' than the one shown.                                                              
Enter 'c' if the number shown is yours.                                                                    
my guess: 50                                                                                               
Is it correct, larger or smaller ( 'c', 'l', 's' ) ?                                                       
Current counter is :1                                                                                      
s                                                                                                          
my guess: 25                                                                                               
Is it correct, larger or smaller ( 'c', 'l', 's' ) ?                                                       
Current counter is :2                                                                                      
s                                                                                                          
my guess: 12                                                                                               
Is it correct, larger or smaller ( 'c', 'l', 's' ) ?                                                       
Current counter is :3                                                                                      
s                                                                                                          
my guess: 6                                                                                                
Is it correct, larger or smaller ( 'c', 'l', 's' ) ?                                                       
Current counter is :4                                                                                      
s                                                                                                          
my guess: 3                                                                                                
Is it correct, larger or smaller ( 'c', 'l', 's' ) ?                                                       
Current counter is :5                                                                                      
s                                                                                                          
my guess: 1                                                                                                
Is it correct, larger or smaller ( 'c', 'l', 's' ) ?                                                       
Current counter is :6                                                                                      
l                                                                                                          
my guess: 2                                                                                                
Is it correct, larger or smaller ( 'c', 'l', 's' ) ?                                                       
Current counter is :7                                                                                      
c                                                                                                          
7 attempts  to guess the correct number                                                                    
                                                                                                           
                                                                                                           
...Program finished with exit code 0                                                                       
Press ENTER to exit console.                                                                               
                                                                                                           
                                                                                                              
                                                                                                           
                                                                                                           
Call Stack
#	Function	File:Line
Local Variables
Variable	Value
Display Expressions
Expression	Value	
Breakpoints and Watchpoints
	#	Description	

*/
