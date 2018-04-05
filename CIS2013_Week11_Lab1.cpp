#include <iostream>
#include <cstring>
using namespace std;

struct myDate {
	int day;
	int month;
	int year;
};

struct person {
	myDate birthday;
	string firstname;
	string lastname;
	int age;
};

int main(){
	
	person sonny;
	myDate sonny_bday;
	myDate tom_bday;
	
	sonny.firstname = "Sonny";
	sonny.lastname = "Icks";
	sonny.age = 32;
	
	cout << "Enter Sonny's birthday day: ";
	cin >> sonny.birthday.day;
	
	cout << "Enter Sonny's birthday year: ";
	cin >> sonny.birthday.year;
	
	cout << "Enter Sonny's birthday month: ";
	cin >> sonny.birthday.month;
	
	cout << sonny.firstname << " " << sonny.lastname << "'s birthday is ";
	cout << sonny.birthday.day << sonny.birthday.month << sonny.birthday.year;
	
	
	
	return 0;
}
