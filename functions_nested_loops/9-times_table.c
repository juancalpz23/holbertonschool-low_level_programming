#include "main.h"
/**
 * times_table - Print 9 time tables starting from 0
 *
 * Return: 0 Success
 **/
void times_table(void)
{
	int x, y, z;

	for (x = 0; x <= 9; x++)
	{
		_putchar('0');

		for (y = 1; y <= 9; y++)
		{
			_putchar(',');
			_putchar(' ');
			z = x * y;
			if (z <= 9)
			{
				_putchar(' ');
			}
			else
				_putchar((z / 10) + '0');
			_putchar((z % 10) + '0');
		}
		_putchar('\n');
	}
}
