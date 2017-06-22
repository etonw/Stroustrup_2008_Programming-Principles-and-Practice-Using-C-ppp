/*
	etonw
	22.6.2017
	PPP chapter04 - computation
    chapter04_vector_mean_median.cpp 

	Calculating the mean and median of
	of values held in a vector
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
	//create empty temps vector
	vector<double>temps;	     
	double temp;
	
	//prompt
	cout<<"Type in double values of temperature\n"
		<<"Type in something other than a double to stop\n\n";
	
	//user enters value
	while(cin>>temp)		     
		temps.push_back(temp);   //put value into end of vector

	//print vector values
	cout << "\nYou typed in the following values:\n";
	for (int i=0; i<temps.size(); ++i)	//loop through vector
			cout << "v[" << i << "]==" << temps[i] << '\n';   
	cout << "\n";

	//Calculate mean value
	double sum=0;
	for (int i=0; i<temps.size(); ++i) sum+=temps[i];
	cout << "Average temperature is: " << sum/temps.size() << endl;

	//calculate median value
	//Sort the vector and then pick the middle value
	sort(temps.begin(),temps.end());  // sort from beginning to end
	cout << "Median temperature: " << temps[temps.size()/2] << "\n" << endl;
	
	//print sorted vector values
	cout << "\nThis is the sorted vector:\n";
	for (int i=0; i<temps.size(); ++i)	//loop through vector
			cout << "v[" << i << "]==" << temps[i] << '\n';   
	cout << "\n";
}

/*

Type in double values of temperature
Type in something other than a double to stop

56
62
6
3
1000
325
23.05
7.02
0.0002
0.235
k

You typed in the following values:
v[0]==56
v[1]==62
v[2]==6
v[3]==3
v[4]==1000
v[5]==325
v[6]==23.05
v[7]==7.02
v[8]==0.0002
v[9]==0.235

Average temperature is: 148.231
Median temperature: 23.05


This is the sorted vector:
v[0]==0.0002
v[1]==0.235
v[2]==3
v[3]==6
v[4]==7.02
v[5]==23.05
v[6]==56
v[7]==62
v[8]==325
v[9]==1000

Press any key to continue . . .
*/