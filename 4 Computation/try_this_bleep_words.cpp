#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }

/*  
TRY THIS
Write a program that “bleeps” out words that you don’t like; that is, you read in words using cin and print them again on cout. If a word is among a few you have defined, you write out BLEEP instead of that word. Start with one “disliked word” such as

string disliked = “Broccoli”;

When that works, add a few more.
*/
int main()
{
    
	vector <string> disliked = {"no", "yes"};
	vector <string> words;
    string temp = ""; 
	while (cin>>temp ) {        // enter as many strings as you would like
        
	//search through vector disliked, check if any words match with entered temp         
		if (find(disliked.begin(), disliked.end(), temp)  != disliked.end() )
				cout << "BLEEP\n";
		else  words.push_back(temp);     //add to the dictionary
	}
	
	/*
	cout << "Number of words: " << words.size() << '\n';
		 
	sort (words.begin(), words.end() );
			 
    for(int i = 0; i< words.size(); ++i) 
		if (i==0 || words[i-1]!=words[i])	// test for repeated words
			cout << words[i]<<"\n";
			
	*/		
}