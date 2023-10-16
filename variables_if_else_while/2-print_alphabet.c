#include <stdio.h>
/**
 * main -  Print the alphabet in lower case
 *
 * Return: 0 Success
 **/
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
