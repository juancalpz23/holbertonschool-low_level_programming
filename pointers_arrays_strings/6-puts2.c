#include "main.h"
/**
 * puts2 - Prints every other character in a string
 *
 * @str: The string to be printed
 *
 * Return: 0 Success
 **/
void puts2(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (a % 2 == 0)
		{
			_putchar(str[a]);
		}
	}
	_putchar('\n');
}
