/*
	etonw
	23.6.2017
	PPP chapter04 - computation
	chapter04_03_guessing game.cpp
	
	Write a program to play a numbers guessing game. The user thinks of a
	number between 1 and 100 and your program asks questions to figure
	out what the number is (e.g., "Is the number you are thinking of less
	than 50?"). Your program should be able to identify the number after
	asking no more than seven questions. Hint: Use the < and <= operators
	and the if-else construct.

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
    cout << "Think of a number between 1 and 100.\n";
    cout << "For every guess, enter if your number is\n";
    cout << "(l)arger or (s)maller than the one shown.\n";
    cout << "Enter 'c' (for 'correct') if the number shown is yours.\n";

    int guess = 50;
    vector<int> differences(6);
    differences[0] = 25;
    differences[1] = 13;
    differences[2] = 6;
    differences[3] = 3;
    differences[4] = 2;
    differences[5] = 1;
    int counter = 0;
    char answer = ' ';

    while (answer != 'c') {
        cout << "My guess: " << guess << endl;
        ++counter;
        cout << "Correct, larger or smaller (c, l, s)? ";
        cin >> answer;
        switch (answer) {
        case 'c':
            // do nothing, simply fall out of the loop
            break;
        case 'l':
            // increase by next difference or one
            if (counter<=differences.size())
                guess += differences[counter-1];
            else
                ++guess;
            break;
        case 's':
            // decrease by next difference
            if (counter<=differences.size())
                guess -= differences[counter-1];
            else
                --guess;
            break;
        default:
            // invalid answer, reduce counter because guess does not count
            cout << "This is not a valid answer, use 'c', 'l' or 's'\n";
            --counter;
            break;
        }
        if (guess>100 || guess<1) {
            cout << "Your number must be between 1 and 100!\n";
            return 0;
        }
        if (counter==7 && answer!='c')
        {
            cout << "Super fishy, dude. I should have your number by now.\n";
            return 0;
        }
    }  // end while

    string s_try;
    if (counter==1)
        s_try = " try ";
    else
        s_try = " tries ";
    cout << "It took me " << counter << s_try << "to find your number, " << guess << ".\n";
}





















	////declaration
	//char ans = ' ';

	////prompt less than 50?
	//cout << "Think of a number between 1 and 100. \n";
	//cout << "Enter  (Y=Yes) or (N=No): \n";
	//cout << "Is n <= 50?: \n";
	//cin >> ans;

	////if else sequences
	//if(ans=='Y' || ans=='y'){      
	//cout << "1 < n < 50: \n";
	//cout << "Is n <= 25?: \n";
	//cin >> ans;
	//	if(ans=='Y' || ans=='y'){  // 1-25
	//	cout << "Is n <= 12?: \n";
	//	cin >> ans;
	//	}
	//	else{						// 26-50
	//	cout << "Is n <= 75?: \n";
	//	cin >> ans;
	//	}
	//
	//

	//
	//}
	//else{  // 51-100
	//cout << "51 < n < 100. \n";
	//cout << "Is n <= 75?: \n";
	//cin >> ans;
	//}
	//return 0;


	//if()

