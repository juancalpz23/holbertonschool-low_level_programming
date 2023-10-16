#include <stdio.h>
/**
 * main - Prints base 16 numbers in lower case
 *
 * Return: 0 Success
 **/
int main(void)
{
	int x, h;

	for (x = 0; x < 10; x++)
	{
		putchar(x + '0');
	}
	for (h = 'a'; h <= 'f'; h++)
	{
		putchar(h);
	}
	putchar('\n');
	return (0);
}
