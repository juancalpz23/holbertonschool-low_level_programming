#include "main.h"
/**
 * print_rev - Prints a string in reverse
 *
 * @s: String to be reversed
 *
 * Return: Reversed string
 **/
void print_rev(char *s)
{
	int in = 0;

	while (s[in] != '\0')
	{
		in++;
	}
	for (in = in - 1; s[in] != '\0'; in--)
	{
		_putchar(s[in]);
	}
	_putchar('\n');
}
