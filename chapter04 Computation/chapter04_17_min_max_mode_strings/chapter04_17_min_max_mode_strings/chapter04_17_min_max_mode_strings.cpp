/*
	etonw
	24.6.2017
	PPP chapter04 - computation
	chapter04_17_min_max_mode_strings.cpp 

	Write a program that finds the min, max, 
	and mode of a sequence of strings.

	The item that appears the most times
	in a sequence is called the mode.
	
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
	vector<string> list;
	vector<string> compare;
	vector<int> rank;
	string word, min, max, mode;
	
	//Prompt
	cout << "Program start\n"
		<< "Enter words followed by space\n";

	//enter words
	while(cin>>word){
		list.push_back(word);
	}
	
	//print the list of words
	cout << "\nTable of words entered\n";
	for(int i=0; i<list.size(); ++i){
		cout << list[i] << endl;
	}

	//min
	min=list[0];
	for(int i=0; i<list.size();++i){
		if(list[i]<min)
			min=list[i];
	}
	//max
	max=list[0];
	for(int i=0; i<list.size();++i){
		if(list[i]>max)
			max=list[i];
	}

	//make a compare vector same size as list
	vector<int>compare(list.size());   
	vector<int>rank(list.size());

	for (int i=0;i<list.size(); ++i){
		compare[i]=list[i];
		for (int i=0;i<list.size(); ++i){
			if(compare[i]==list[i])
				rank[i]+=1;
		}
	}

	cout << "\n\nCompare Table\n";
	for(int i=0; i<compare.size(); ++i)
		cout << compare[i] << endl;

	cout << "\n\nRank Table\n";
	for(int i=0; i<rank.size(); ++i)
		cout << rank[i] << endl;
	
	cout<<"\n\nMin item in list:"<< min << endl;
	cout<<"Max item in list:"<< max << endl;
	//mode
	return 0;
}