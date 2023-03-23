#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: amount of the arguments.
 *
 * Return: sum of its parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list varlist;

	if (n == 0)
		return (0);
	
	va_start(varlist, n);

	for (i = 0; i < n; i++)
		sum += va_args(varlist, int);
	
	va_end(varlist);

	return (0);
}
