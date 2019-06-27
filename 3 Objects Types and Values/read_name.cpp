// include at the beginning of every Stroustrup exercise

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }

int main()
{
         cout << "Please enter your first name (followed by 'enter'):\n";
         string first_name;        // first_name is a variable of type string
         cin >> first_name;        // read characters into first_name
         cout << "Hello, " << first_name << "!\n";
}
