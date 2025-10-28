#include <iostream>
using namespace std;
int main() {
	// this program computes students age and prints out his name and favourite color
	string Firstname, lastname;
	int name;
	int age;
	int year; // year of birth
	string color;
	cout << " please enter your first name and last name:\n ";
	cin >> Firstname;
	cin >> lastname;
	cout << " please enter your year of birth:\n";
	cin >> year;
	cout << " please enter your favourite color:\n";
	cin >> color;
	//compute students age
	age = 2025 - year;
	cout <<" name \t\t age \t\t color\n";
		cout << Firstname << "\t" << age << "\t\t"<<color << endl;
	return 0;
}