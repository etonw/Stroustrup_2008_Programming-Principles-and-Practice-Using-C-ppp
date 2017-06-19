// Drill_83_P_1.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	string first_name, friend_name;
	char friend_sex;
	int age;
//	1 . This is drill is to write a program that produces a simple form letter based
//on user input.
	cout << "Please enter your first name: ";
	cin  >> first_name;
	cout << "\nHello " << first_name << "," ;
	
	
	cout << "\nEnter the name of the person you want to write to: ";
	cin  >> friend_name;

	cout << "\nDear " << friend_name << ",\n" ;
	cout << "	How are you? I am fine. I miss you. I am learning C++ for \n";
	cout << "fun from the original inventor of the programming language.\n";
	cout << "\n\nEnter the name of another friend: ";
	cin  >> friend_name; 
	cout << "\nHave you seen " << friend_name << " lately?\n\n"; 
	cout << "Enter 'm' if that friend is male, 'f' if the friend is female: ";
	cin  >> friend_sex;
	
	// 4. Declare a char variable called friend_sex

	if (friend_sex == 'm' )
		cout << "\nIf you see " << friend_name << " please ask him to call me. \n";

	if (friend_sex == 'f' )
		cout << "\nIf you see " << friend_name << " please ask her to call me. \n\n";

	//5. Prompt the user to enter the age of the recipient

	cout << "Enter the age of the recipient:  ";
	cin >> age; 

	cout << "I hear you just had a birthday and you are " << age << " years old \n";

	if (age <= 0 )
		cout << " error ( you're kidding!) \n";

	if (age >= 110)
		cout << " error ( you're kidding!) \n";

	//6. Add this to your letter

	if (age <= 12 )
		cout << " Next year you will be " << age + 1 << " \n";

	if (age == 17 )
		cout << " Next year you will be able to vote. \n"; 

	if (age > 70 )
		cout << "I hope you are enjoying retirement.\n";


	cout << "\nYour sincerely, \n\n";
	cout << "Eton Williams \n";

	//7. Add "Yours sincerely:' followed by two blank lines for a signature,

	return 0;
}


