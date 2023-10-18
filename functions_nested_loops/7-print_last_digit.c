#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number using a function
 *
 *@k: variable to be used to determine the last digit
 *
 * Return: 0 if Success
 **/
int print_last_digit(int k)
{
	int g = k % 10;

	if (g < 0)
	{
		g *= -1;
		_putchar (g + '0');
	}
	return (g);
}
