#include <iostream>
#include "Powers.h"

using namespace std;

int main()
{	
	char answer = 'Y';
	while (answer == 'Y')
	{
		long double x;
		unsigned short y;

		cout << "x to the power of y (test and comparison of 4 functions)" << endl << endl;
		cout << "Please, enter real number x: ";
		cin >> x;
		cout << "Please, enter natural number y: ";
		cin >> y;
		cout << endl;
		cout << "power(x, y) (iterative) = " << power(x, y) << endl;
		cout << "quickPower(x, y) (iterative) = " << quickPower(x, y) << endl;
		cout << "(number of recursive calls = " << y - 1 << "), " << "rPower(x, y) (recursive) = " << rPower(x, y) << endl;
		cout << "(number of recursive calls = " << floor(log2(y)) << "), " << "rQuickPower(x, y) (recursive) = " << rQuickPower(x, y) << endl;
		cout << endl;
		cout << "Press Y to continue. Press any key to exit" << endl;
		cin >> answer;
	}

	return 0;
}