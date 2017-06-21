/* chapter03_05_double_small large.cpp 

Write a program that prompts the user to enter two integer values. Store
these values in int variables named val1 and vall. Write your program to
determine the smallest, largest, sum, difference, product, and ratio of
these values and report them to the user.

5. Modify the program above to ask the user to enter floating-point values
and store them in double variables. Compare the outputs of the two programs
for some inputs of your choice. Are the results the same? Should
they be? What's the difference?

*/

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	double val1,val2;
	double smallest, largest, sum, difference1, difference2, product, ratio1, ratio2; 
	cout << "(double version) Enter two integers: :";
	cin >> val1 >> val2;
	
	if (val1 > val2) {
			smallest = val2;
			largest = val1;
	}
	else {
			smallest = val1;
			largest = val2;
	}
	
	sum = val1+val2;  // why doesnt this work?
	difference1 = val1 - val2;
	difference2 = val2 - val1;
	product = val1 * val2;
	ratio1 = val1 / val2;
	ratio2 = val2 / val1;

	cout << "\nSmallest number is "  << smallest << " \n\n";
	cout << "\nLargest  number is "  << largest << " \n\n";
	cout << "\nSum is "				 << largest << " \n\n";
	cout << "\nDifference1 is "		 << difference1 << " \n\n";
	cout << "\nDifference2 is "		 << difference2 << " \n\n";
	cout << "\nProduct is "			 << product << " \n\n";
	cout << "\nRatio1 is "			 << ratio1 << " \n\n";
	cout << "\nRatio2 is "			 << ratio2 << " \n\n";
	
	return 0;
}

