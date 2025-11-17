#include <iostream>
using namespace std;
int main()
{

	int sum = 0;
	int num;
	int counter = 0;
	cout << "Please enter 10 numbers:\n";
	while (counter < 10)
	{
		cin >> num;
		sum += num;
		counter++;

	}
	double avg = sum / 10;
	cout << "The sum is: " << sum << endl;
	cout << "The average is: " << avg << endl;
	return 0;
}