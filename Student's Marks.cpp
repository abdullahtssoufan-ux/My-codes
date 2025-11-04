#include <iostream>
using namespace std;
int main()
{
	double a;
	double b;
	cout << "What is your mark ? ";
		cin >> a ;
		cin >> b;
		if (a >= 84)
			cout << "excellent" << endl;
		
		else if (a >= 77 && a<84)
			cout << "very good" << endl;
		else if (a>= 68 && a<77)
			cout << "good" << endl;
		else if (a >= 60 && a < 68)
			cout << "weak" << endl;
		else if (a < 60)
			cout << "1.fail" << endl;


		return 0;
}