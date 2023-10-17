#include "main.h"
/**
 * print_alphabet - Print lowercase alphabet using prototype functions
 *
 * Return: 0 Success
 **/
void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
