#include "main.h"
/**
 * _puts_recursion - Prints a string using recursion
 *
 * @s: String to be printed
 *
 * Return: String
 **/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
}
