#include <stdio.h>
/**
 * main - Print 0 - 9 using putchar
 *
 * Return: 0 Success
 **/
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		putchar(x + '0');
	}
	putchar('\n');
	return (0);
}
