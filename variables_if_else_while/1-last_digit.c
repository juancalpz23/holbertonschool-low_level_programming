#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints the last digit of n and useses else-if statement to compare
 *
 * Return: 0 is Success
 **/
int main(void)
{
	int n, d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	d = n % 10;
	printf("Last digit of %d is %d", n, d);
	if (d > 5)
	{
		printf(" and is greater than 5\n");
	}
	else
	{
		if (d == 0)
		{
			printf(" and is 0\n");
		}
		if (d < 6 && d != 0)
		{
			printf(" and is less than 5 and not 0\n");
		}
	}
	return (0);
}
