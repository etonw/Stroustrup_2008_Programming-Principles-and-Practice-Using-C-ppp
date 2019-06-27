// include at the beginning of every Stroustrup exercise

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }

// READ NAME AND AGE  (SECOND VERSION)
 int main ()
 {
     cout << "Please enter your first name and age\n";
     string first_name = "???";  // string literal, ()"???" means i dont know the name)
     int age = -1;               // -1 means "don't know the age")
     cin >> first_name >> age;   //read a string followed by an integer
     cout << "Hello, " << first_name << " (age " << age << ")\n";
 }