#include <stdarg.h>

/**
*sum_them_all - sum up all the parameters
*@n: number of the parameters
*Return: returns the total
**/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, index;
	va_list arglist;

	if (n == 0)
	{
		return (0);
	}
	va_start(arglist, n);

	for (index = 0; index < n; index++)
	{
		sum += va_arg(arglist, int);
	}
	va_end(arglist);
	return (sum);
}
