// chapter03_04 small large sum diff ratio.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	double val1,val2;
	double smallest, largest, sum, difference1, difference2, product, ratio1, ratio2; 
	cout << "Enter TWO integers: :";
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

