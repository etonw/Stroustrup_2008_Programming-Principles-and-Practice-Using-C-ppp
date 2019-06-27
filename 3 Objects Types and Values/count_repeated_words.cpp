#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
#include<cmath>
inline void keep_window_open() { char ch; cin>>ch; }

// COUNT REPEATED WORDS

//while(cin>>current) will be true as long as there are 
//characters to read on the standard input

int main()
{
	int number_of_words = 0;
	string previous = " "; 
	string current; 
	while(cin>>current){  
		++number_of_words;
		if (previous == current)
				cout << "Word number (" << number_of_words << "), " << current << ", is repeated\n";
		previous = current;
	} //end while
}//end main