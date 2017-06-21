/* 
		etonw
		21.06.2017
		PPP chapter03
		chapter03_10_simple_calculator.cpp 

		10. Write a program that takes an operation followed by two operands and
		outputs the result. For example:
				+ 100 3.14
				• 4 5
		Read the operation into a string called operation and use an if-statement
		to figure out which operation the user wants, for example, if (opera·
		tion=="+"). Read the operands into variables of type double. Implement
		this for operations called +, -, *, /, plus, minus, mul, and div with their
		obvious meanings .

*/

#include "stdafx.h"
#include<iostream>
#include<fstream>
#include<sstream>
#include<cmath>
#include<cstdlib>
#include<string>
#include<list>
#include<vector>
#include<algorithm>
#include<stdexcept>
using namespace std;

int main (){

	string operation = " ";	//declaration and initialization
	double operand_one(-1), operand_two(-1);
	

	cout << "Program performs simple calculation\n" 
		 << "Enter operation and two operands, \nseperated by a space\n";  //prompt

	while(cin >> operation >> operand_one >> operand_two ){
								
	if(operation=="+")        cout << "\nAnswer is " << operand_one+operand_two << "\n";						
	else if(operation=="-")   cout << "\nAnswer is " << operand_one-operand_two << "\n";	
	else if(operation=="*")   cout << "\nAnswer is " << operand_one*operand_two << "\n";	
	else if(operation=="/")   cout << "\nAnswer is " << operand_one/operand_two << "\n";	
	}
}