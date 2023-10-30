#include "main.h"
/**
 * _sqrt_recursion - Gives the square root of 'n'
 *
 * @n: number to find its square root
 *
 * Return: -1 if no sqr root
 **/
int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);
	return (_sqrt(0, n));
}
/**
 *_sqrt - Returns square root
 *
 * @n: test number
 * @x: squared number
 *
 * Return: the square root of n
 **/
int _sqrt(int n, int x)
{
	if (n > x / 2)
	{
		return (-1);
	}
	else if (n * n == x)
	{
		return (n);
	}
	return (_sqrt(n + 1, x));
}
