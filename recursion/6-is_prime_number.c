#include "main.h"
/**
 * is_prime_number - Identify prime numbers
 *
 * @n: Number to check if it's prime
 *
 * Return: 1 if Prime 0 if not
 **/
int is_prime_number(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n == 1)
	{
		return (0);
	}
	if (n < 0)
	{
		return (0);
	}
	return (prime_x(n, 2));
}
/**
 * prime_x - check if n is prime
 *
 * @n: value to check
 * @x: variable to test against n
 *
 * Return: 1 if prime 0 if not
 **/
int prime_x(int n, int x)
{
	if (n % x == 0)
	{
		return (0);
	}
	else if (x == n - 1)
	{
		return (1);
	}
	return (prime_x(n, x + 1));
}
