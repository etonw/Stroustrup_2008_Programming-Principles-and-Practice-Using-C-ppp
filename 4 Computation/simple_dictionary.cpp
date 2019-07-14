#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }

/*  
TRY THIS
wORKING WITH VECTORS. EXAMPLE IN BOOK

*/
int main()
{
    vector<string> words; 	               //create string vector to hold words           
    for (string temp; cin>>temp; )         // enter as many strings as you would like
                words.push_back(temp);     //add to the vector

	cout << "Number of words: " << words.size() << '\n';
		 
	sort (words.begin(), words.end() );
			 
    for(int i = 0; i< words.size(); ++i) 
		if (i==0 || words[i-1]!=words[i])	// test for repeated words
			cout << words[i]<<"\n";
}