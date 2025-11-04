#include <iostream>
using namespace std;
int main()
{
	double salary;
	cout << "Enter your salary: ";
	cin >> salary;
	if (salary > 500 && salary < 800 || salary == 800)
	{
		salary = salary * 115 / 100;
		cout << "Your new salary is: " << salary << endl;
	}
	else if (salary > 800 && salary < 1500 || salary == 1500)
	{
		salary = salary * 110 / 100;
		cout << "Your new salary is: " << salary << endl;
	}
	else if (salary > 1500)
	{ 
	
		cout << "Your new salary is: " << salary << endl;
	}
	return 0;
}