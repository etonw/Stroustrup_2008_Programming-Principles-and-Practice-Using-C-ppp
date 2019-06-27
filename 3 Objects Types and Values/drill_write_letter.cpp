#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }

/*  DRILL WRITE A LETTER
page 83

*/

int main()
{
	string first_name = " "; 
	string friend_name = " "; 
	char friend_sex = 'x';
	int age = 0;
	
	cout << "Enter the name of the person you want to write to: ";
	cin >> first_name;
	cout << "\nEnter name of mutual friend: ";
	cin >> friend_name;
	cout << "\nEnter 'm' if friend is male, 'f' if friend is female: ";
	cin >> friend_sex;
	cout << "\nEnter the age of the recipent of the letter: ";
	cin >> age;	
	
	cout << "\nDear " << first_name << ", \n" ;
	cout << "\n\tHow are you? I am fine. I miss you brother."
	     << "\nI am happy to see your family updates on Facebook.";
	cout << "\nHave you seen " << friend_name << " lately? ";
		if (friend_sex=='m') 
			cout << "If you see " << friend_name << " please ask him to call me.";
		if (friend_sex=='f') 
			cout << "If you see " << friend_name << " please ask her to call me.";
	cout << "\nI hear you just had a brithday and you are " << age << " years old.";
		if (age <= 0 || age >= 100) 
			cout << "\nYou're kidding! ";
		if (age<12)
			cout << "\nNext year you will be " << age+1;
		if (age==17)
			cout << "\nNext year you will be able to vote.";
		if (age>70)
			cout << "\nI hope you are enjoying retirement.";
	cout << "\n\nYours sincerly, " <<"\n\n\n" << "Eton"; 
}//end main