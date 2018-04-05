#include <iostream>
#include <cstring>
using namespace std;

class BirthDate{
	public:
		int year = 0;
		int month = 0;
		int day = 0;
		void print(){
			cout << month << "/" << day << "/" << year;
		}
		
		void set(int d, int m, int y){
			year = y;
			month = m;
			day = d;
		}
};

int main(){
	
	BirthDate sonny;
	
	cout << "Enter Sonny's birthday day: ";
	cin >> sonny.day;
	
	cout << "Enter Sonny's birthday year: ";
	cin >> sonny.year;
	
	cout << "Enter Sonny's birthday month: ";
	cin >> sonny.month;
	
	cout << "Sonny's birthday is ";
	sonny.print();
	cout << endl;
	
	BirthDate tom;
	cout << "Tom's birthday is: ";
	tom.print();
	tom.set(2, 2, 1986);
	cout << "Tom's birthday is: ";
	tom.print();
	
	return 0;
}