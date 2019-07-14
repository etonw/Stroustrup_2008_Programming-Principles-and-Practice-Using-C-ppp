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
          vector<double> temps;             // create vector to hold temperatures
          for (double temp; cin>>temp; )    // read into temps
                temps.push_back(temp);      // put temp into vector temps

				
          // compute mean temperature:
          double sum = 0;
          for (int x : temps)
                sum += x;   // range for statement
          cout << "\nAverage temperature: " << sum/temps.size() << '\n';
          cout << "\n";
         
          cout << "This is vector temps: [";          
          for (int i=0; i<temps.size();++i)
             cout << temps[i] << "\t";
           cout << " ]";          

		  
		  // compute median temperature:
          sort(temps.begin(), temps.end());                      // sort temperatures
          
		  cout << "\n\nMedian temperature: " << temps[temps.size()/2] << '\n';
}