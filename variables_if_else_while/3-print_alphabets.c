#include <stdio.h>
/**
 * main - Print the alphabet in lower and upper case
 *
 * Return: 0 Success
 **/
int main(void)
{
	char x, A;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	for (A = 'A'; A <= 'Z'; A++)
	{
		putchar(A);
	}
	putchar('\n');
	return (0);
}
