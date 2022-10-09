#include <iostream>
using namespace std;

long double power(long double x, unsigned short y)
{
	long double result = 1;
	short counter = 0;
	
	for (int i = 0; i < y; ++i) {
		result *= x;
		++counter;
	}
	cout << "(number of iterations = " << counter << "), ";
	return result;
}

