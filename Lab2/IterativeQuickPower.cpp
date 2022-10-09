#include <iostream>
using namespace std;

long double quickPower(long double x, unsigned short y)
{
	long double result = 1;
	short counter = 0;
	while (y > 0)
	{
		//if y is odd
		if (y % 2 == 1)
		{
			//decrement y by 1
			--y;
			//remember to include one multiplyer x to the result: x^y = x * x^(y-1)
			result *= x;
		}
		y /= 2;
		x *= x;
		++counter;
	}
	cout << "(number of iterations = " << counter << "), ";
	return result;
}