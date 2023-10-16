#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print random int and determine postive or negative using if else
 *
 * Return: Always 0
 **/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("%d", n);
	if (n < 0)
	{
		printf(" is negative");
	} else
	{
		if (n == 0)
		{
			printf(" is zero");
		}
		else
		{
			printf(" is positive");
		}
	}
	return (0);
}
