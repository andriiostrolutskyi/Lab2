#include <iostream>

long double rPower(long double x, unsigned short y)
{
	long double result = 1;
	if (y == 0) return result;
	result = rPower(x, y - 1) * x;
	return result;
}