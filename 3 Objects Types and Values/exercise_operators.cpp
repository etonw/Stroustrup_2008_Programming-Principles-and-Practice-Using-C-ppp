#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }

// EXERCISE OPERATERS (Read an INT instead of a DOUBLE)

int main()
{
          cout << "Please enter a floating-point value: ";
          double n;
          cin >> n;
          cout << "n == " << n
                    << "\nn+1 == " << n+1
                    << "\nthree times n == " << 3*n
                    << "\ntwice n == " << n+n
                    << "\nn squared == " << n*n
                    << "\nhalf of n == " << n/2
                    << "\nsquare root of n == " << sqrt(n)
                    << '\n';  // another name for newline (“end of line”) in output
}