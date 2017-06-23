/*
	etonw
	23.6.2017
	PPP chapter04 - computation
	chapter04_03_neighboring_cities.cpp

	Read a sequence of double values into a vector. Think of each value as
	the distance between two cities along a given route. Compute and print
	the total distance (the sum of all distances) . Fmd and print the smallest
	and greatest distance between two neighboring cities. Fmd and print the
	mean distance between two neighboring cities.
	
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
inline void keep_window_open() { char ch; cin>>ch; }

int main()
{
	//declare
	vector<double> distance;
	double km(0), //distance between cities
		   sum(0),
		   smallest(0),
		   greatest(0),
		   mean(0);

	//introduction
	cout << "Program starts\n"
		<< "Enter specicifed route distances seperated by space\n";

	//read in values
	while(cin>>km){
		distance.push_back(km);
		sum+=km;
		cout << "...\n";
	}  // end while

	//smallest and greatest distance
	smallest = distance[0];
	for(int i=0; i<distance.size(); ++i){
		if (smallest > distance[i])
			smallest=distance[i];
	}
	greatest = distance[0];
	for(int i=0; i<distance.size(); ++i){
			if(greatest<distance[i])
				greatest=distance[i];
	}

	//mean distance
	mean=sum/distance.size();
	
	cout << "Total distance recorded is= " << sum << endl;
	cout << "Smallest distance is= " << smallest << endl;
	cout << "Greatest  distance is= " << greatest << endl;
	cout << "Mean distance between two neighboring cities= " << mean << endl;
	return 0;
}

/*
Program starts
Enter specicifed route distances seperated by space
5
...
6
...
20
...
1
...
900
...
22
...
l
Total distance recorded is= 954
Smallest distance is= 1
Greatest  distance is= 900
Mean distance between two neighboring cities= 159
Press any key to continue . . .

*/