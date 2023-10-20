#include "main.h"
/**
 * more_numbers - Prints 0 to 14 times 10
 *
 * Return: 0 Success
 **/
void more_numbers(void)
{
	int x, y;

	for (x = 0; x <= 9; x++)
	{
		for (y = 1; y <= 14; y++)
		{
			if (y > 9)
			_putchar(y / 10 + '0');
			_putchar(y % 10 + '0');
		}
		_putchar('\n');
	}
}
