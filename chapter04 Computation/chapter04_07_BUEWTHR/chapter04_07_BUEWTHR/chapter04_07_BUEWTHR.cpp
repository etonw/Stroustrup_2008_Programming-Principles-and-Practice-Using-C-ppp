/*
	etonw
	25.6.2017
	PPP chapter04 - computation
	chapter04_07_BUEWTHR.cpp 
	
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

vector<string> s_digits;

void init_vector()
{
    s_digits.push_back("zero");
    s_digits.push_back("one");
    s_digits.push_back("two");
    s_digits.push_back("three");
    s_digits.push_back("four");
    s_digits.push_back("five");
    s_digits.push_back("six");
    s_digits.push_back("seven");
    s_digits.push_back("eight");
    s_digits.push_back("nine");
}

// tries to read an integer from input; if this fails, input is cleared and read as a string
int get_number()
{
    int inp = 0;
    if (cin>>inp)
        return inp;
    cin.clear();
    string inp_s;
    cin >> inp_s;
    for (int i = 0; i<s_digits.size(); ++i) {
        if (s_digits[i]==inp_s)
            return i;
    }
    // this is only executed if input is not valid
    return(-1);
}

int main()
{
    init_vector();
    cout << "Enter two values (number or single digit spelled out) separated by\n"
        << "a character (+, -, * or /). Enter 'q' as operator to exit.\n";
    while (true) {
        int val1 = 0;
        int val2 = 0;
        char op = 0;
        val1 = get_number();
        cin >> op;
        val2 = get_number();
        if (val1==-1 || val2==-1)
            cout << "Numbers must be int or, when spelled out, single digit\n";
        else {
            switch (op) {
            case '+':
                cout << "The sum of " << val1 << " and " << val2 << " is " << val1+val2 << ".\n";
                break;
            case '-':
                cout << "The difference of " << val1 << " and " << val2 << " is " << val1-val2 << ".\n";
                break;
            case '*':
                cout << "The product of " << val1 << " and " << val2 << " is " << val1*val2 << ".\n";
                break;
            case '/':
                if (val2==0)
                    cout << "No division by zero!\n";
                else
                    cout << "The ratio of " << val1 << " and " << val2 << " is " << double(val1)/val2 << ".\n";
                break;
            case 'q':
                return 0;
            default:
                cout << "This is not a valid operation (use +, -, * or /)\n";
                break;
            }
        }
    }
}

/*
Enter two values (number or single digit spelled out) separated by
a character (+, -, * or /). Enter 'q' as operator to exit.
1+3
The sum of 1 and 3 is 4.
3*2
The product of 3 and 2 is 6.
6/6
The ratio of 6 and 6 is 1.
3%3
This is not a valid operation (use +, -, * or /)
356+*
Numbers must be int or, when spelled out, single digit
32+65
The sum of 32 and 65 is 97.
q




1
2
Numbers must be int or, when spelled out, single digit
q


*/