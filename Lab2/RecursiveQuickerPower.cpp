#include <iostream>

long double rQuickPower(long double x, unsigned short y)
{
	long double result;

	if (y == 1) return x;

	if (y % 2 == 1)
	{
		result = rQuickPower(x * x, y / 2) * x;
		return result;
	}
	else result = rQuickPower(x * x, y / 2);
	return result;
}