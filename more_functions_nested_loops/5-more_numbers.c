#include "main.h"
/**
 * more_numbers - Prints 0 to 14 times 10
 *
 * Return: 0 Success
 **/
void more_numbers(void)
{
	int x, y;

	for (x = 0; x <= 14; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			_putchar(x + '0');
			_putchar('\n');
		}
	}
}