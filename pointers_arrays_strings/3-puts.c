#include "main.h"
/**
 * _puts - Prints a string followed by a new line
 *
 * @str: String to be printed
 *
 * Return: String and new line
 **/
void _puts(char *str)
{
	int in;

	for (in = 0; str[in] != '\0'; in++)
	{
		_putchar(str[in]);
	}
	_putchar('\n');
}
