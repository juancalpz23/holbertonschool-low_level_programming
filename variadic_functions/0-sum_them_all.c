#include "variadic_functions.h"

/**
 * sum_them_all - Function that returns th sum of all
 * it parameters
 *
 * @n: number of arguments
 *
 * Return: Sum success, 0 failed
 **/
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int sum = 0;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, unsigned int);
	}
	va_end(ap);
	return (sum);

	if (n == 0)
	{
		return (0);
	}
}
