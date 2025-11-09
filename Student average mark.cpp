#include <iostream>
using namespace std;
int main()
{
	double grade1;
	double grade2;
	double grade3;
	double grade4;
	double average;
	cout << " Enter your 4 grades: ";
	cin >> grade1 >> grade2 >> grade3 >> grade4;
	average = (grade1 + grade2 + grade3 + grade4) / 4;
	if (average >= 84)
		cout << " Excellent " << endl;
	else if (average >= 77 && average < 84)
		cout << "Very good" << endl;
	else if (average >= 68 && average < 77)
		cout << "good " << endl;
	else if (average >= 60 && average < 68)
		cout << "weak " << endl;
	else if (average < 60)
		cout << "Fail " << endl;
	return 0;
		


}