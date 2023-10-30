#include "main.h"
/**
 * factorial - Return a factorial of a given num.
 *
 * @n: Factorial to be found
 *
 * Return: Factorial or -1
 **/
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
		return (n * factorial(n - 1));
}
