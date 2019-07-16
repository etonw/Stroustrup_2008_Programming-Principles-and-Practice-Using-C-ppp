#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }


int get_number(string input_v){

	vector<string> n = {"0","1","2","3","4","5","6","7","8","9"};
    vector<string> s = {"zero","one","two","three","four","five","six","seven","eight","nine"};
	int val_for_calculation=0;

	for (int i=0; i<n.size();++i){
		if (input_v==n[i])  val_for_calculation=i;
		else if (input_v==s[i]) val_for_calculation=i;	
	} 	
	return val_for_calculation;
}

int main(){
	
	char operation = ' ';
	string input_val1 = " ";
	string input_val2 = " ";
	int val1=0;
	int val2=0;

	cout << "Simple Calculator. Enter two integer values between 0-9, as digits or words.\n" ;
	cout << "and '+', '-', '*', '/' for the operation\n";
	
	while(cin >> input_val1 >> input_val2 >> operation){

		//change string input to literal for calculation	
		val1=get_number(input_val1);
		val2=get_number(input_val2);

		
		switch(operation){
		case '+':
			cout << "The sum of " << val1 << " and " << val2 << " is " << val1+val2 << endl;
			break;
		case '-':
			cout << "The difference between " << val1 << " and " << val2 << " is " << val1-val2 << endl;
			break;
		case '*':
			cout << "The product of " << val1 << " and " << val2 << " is " << val1*val2 << endl;
			break;
		case '/':
			cout << "The qoutient of " << val1 << " and " << val2 << " is " << val1/val2 << endl;
			break;	
		default:
			cout << "Error in entering character for operation.\n";
			cout << "Enter '+', '-', '*', '/' for the operation.\n";	
			break;		
		} // end switch
		
		
		return 0; // successful program
		
				}//end while
} // end main	


/*
                                                         
 
Simple Calculator. Enter two integer values as digits or words)                                           
and '+', '-', '*', '/' for the operation                                                                  
seven                                                                                                     
five                                                                                                      
*                                                                                                         
The product of 7 and 5 is 35                                                                              
                                                                                                          
                                                                                                          
...Program finished with exit code 0                                                                      
Press ENTER to exit console. 


Simple Calculator. Enter two integer values (as digits or words)                                        
and '+', '-', '*', '/' for the operation                                                                
one                                                                                                     
7                                                                                                       
+                                                                                                       
The sum of 1 and 7 is 8                                                                                 
                                                                                                        
                                                                                                        
...Program finished with exit code 0                                                                    
Press ENTER to exit console.                                                    
     
*/