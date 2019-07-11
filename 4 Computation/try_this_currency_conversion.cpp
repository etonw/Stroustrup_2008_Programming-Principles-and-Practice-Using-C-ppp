#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }

/*  
EXERCISE 
Use the example above as a model for a program that converts yen, euros, and pounds into dollars. If you like realism, you can find conversion rates on the web.


*/

int main()
{
	
constexpr double yen_per_dollar = 0.0092;     
constexpr double euro_per_dollar = 1.13; 
constexpr double pounds_per_dollar = 1.25; 
double amount = 1;                           
char currency = ' ';                  // a space is not a unit

cout<< "Currency conversion to dollars. \nPlease enter a amount followed by a currency: "
    << "\n(y for Yen, e for Euro, p for Pounds):\n"; 
cin >> amount >> currency;

if (currency == 'y')
cout << amount << " Yen == " << amount*yen_per_dollar << " dollars\n";
else if (currency == 'e')
cout << amount << " Euros == " << amount*euro_per_dollar << "dollars\n";
else if (currency == 'p')
cout << amount << " Pounds == " << amount*pounds_per_dollar << "dollars\n";
else cout << "Sorry, I don't know that currency called '" << currency << "'\n";
return 0; // successful program

} // end main	


